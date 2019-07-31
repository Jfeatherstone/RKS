#include "Level.hpp"

Level::Level() {

}

void Level::setSize(LevelSize levelSize, Vector2f windowSize) {
    m_levelSize = levelSize;
    m_windowSize = windowSize;

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
    m_levelShape.setFillColor(Color::Blue);
    m_levelShape.setScale(6, 6);

}

void Level::draw(sf::RenderTarget& target, sf::RenderStates state) const {
    
    target.draw(m_levelShape);
}
