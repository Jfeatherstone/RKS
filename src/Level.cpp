#include "Level.hpp"

Level::Level() {

}

void Level::setSize(LevelSize levelSize, Vector2f windowSize) {
    m_levelSize = levelSize;
    m_windowSize = windowSize;

    m_levelView.setSize(windowSize);
    m_levelView.setCenter(windowSize * .5f);

    m_projectiles = {};

    generateShape();
}

void Level::generateShape() {

    // From our level size we can find the min and max radius the points
    // should be from the center of the level

    // The static_cast method retrieves the int value of the enum

    int tolerance = static_cast<int>(m_levelSize) / 4;

    int minRadius = (static_cast<int>(m_levelSize) / 2) - tolerance;
    int maxRadius = (static_cast<int>(m_levelSize) / 2) + tolerance;

    int numVerticies = 8 + static_cast<int>(m_levelSize) / 8;

    int distances[numVerticies];
    float angles[numVerticies];

    // Seed the random generator
    std::srand(std::time(0));

    std::vector<sf::Vector2f> points;

    for (int i = 0; i < numVerticies; i++) {
        distances[i] = minRadius + float(std::rand() / ((RAND_MAX + 1u) / maxRadius));
        // We have each point positioned evenly around the center
        angles[i] = 2.0f * M_PI * (float(i) / numVerticies);

        points.push_back(sf::Vector2f(float(distances[i]) * cos(angles[i]), float(distances[i]) * sin(angles[i])));
        cout << points[i].x << " " << points[i].y << endl;
    }

    Polygon shape(points);

    m_levelShape = shape;
    m_levelShape.setOrigin(m_levelShape.getCentroid());
    m_levelShape.setPosition(m_windowSize * .5f);
    //m_levelShape.setFillColor(Color::Blue);
    Texture* t = new Texture();
    t->loadFromFile("assets/textures/test_tile.png");
    t->setRepeated(true);
    m_levelShape.setTextureRect(IntRect(m_levelShape.getLocalBounds()));
    m_levelShape.setTexture(t);
    m_levelShape.setScale(32, 32);
}

void Level::addProjectile(Projectile* projectile) {
    m_projectiles.push_back(projectile);
}

void Level::draw(sf::RenderTarget& target, sf::RenderStates state) const {
    
    // We have to hold onto the old view so we don't make any permanent changes outside of this method
    View oldView = target.getView();
    // Instead of rotating and moving each separate object we just transform the entire view
    target.setView(m_levelView);

    target.draw(m_levelShape);

    for (int i = 0; i < m_projectiles.size(); i++) {
        target.draw(*m_projectiles[i]->shape);
    }

    target.setView(oldView);
}

void Level::updateLevel(Vector2f moveDistance, float rotationAngle, float elapsedTime) {
    //m_levelView.setCenter(playerPosition - m_levelView.getCenter());
    // Move the level based on player movement
    m_levelView.move(moveDistance);
    m_levelView.rotate(rotationAngle);

    // Update all of the projectiles
    for (int i = 0; i < m_projectiles.size(); i++) {
        if (m_projectiles[i]->distanceTraveled >= m_projectiles[i]->totalTravelDistance) {
            m_projectiles.erase(m_projectiles.begin() + i);
            //delete m_projectiles[i];
        } else {
            m_projectiles[i]->shape->update(elapsedTime);
            m_projectiles[i]->distanceTraveled += VectorMath::mag(m_projectiles[i]->shape->getVelocity() * elapsedTime);
        }
    }
}