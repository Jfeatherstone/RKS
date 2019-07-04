#include "Level.hpp"

Level::Level(LevelSize size) {

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

    for (int i = 0; i < numVerticies; i++) {
        distances[i] = minRadius + float(std::rand() / ((RAND_MAX + 1u) / maxRadius));
        // We have each point positioned evenly around the center
        angles[i] = 2 * M_PI * (i / numVerticies);
    }

    std::vector<sf::Vector2f> points;

    for (int i = 0; i < numVerticies; i++) {
        points.push_back(sf::Vector2f(distances[i] * cos(angles[i]), distances[i] * sin(angles[i])));
    }

    Polygon shape(points);

    m_levelShape = shape;

}