#pragma once

#include <SFML/Graphics.hpp>
#include "external/SFMLCollision/Polygon.hpp"
#include <tgmath.h>

using namespace sf;
using namespace std;

/**
 * @brief The different sizes of levels that can be created
 * The number associated with each is the number of tiles each
 * size will be across (about)
 */
enum class LevelSize: int {
    Tiny = 16,
    Small = 24,
    Medium = 36,
    Large = 48,
    Huge = 60,
};

class Level: public sf::Drawable {

private:

    /**
     * @brief How large the level is
     */
    LevelSize m_levelSize;

    /**
     * @brief This will hold the shape of the level, where each pixel represents
     * a tile
     */
    Polygon m_levelShape;

    /**
     * @brief The size of the window the level will be drawn on
     */
    Vector2f m_windowSize;

    void generateShape();


public:

    Level();

    void setSize(LevelSize levelSize, Vector2f windowSize);

    /**
     * @brief Overriden from sf::Drawable. Will draw all of the background tiles
     * 
     * @param target 
     * @param state 
     */
    void draw(sf::RenderTarget& target, sf::RenderStates state) const;

};