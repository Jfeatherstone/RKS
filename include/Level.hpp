#pragma once

#include <SFML/Graphics.hpp>
#include "external/SFMLCollision/Polygon.hpp"

enum class LevelSize {
    Tiny,
    Small,
    Medium,
    Large,
    Huge,
};

class Level: public sf::Drawable {

private:

    /**
     * @brief This will hold the shape of the level, where each pixel represents
     * a tile
     */
    Polygon m_levelShape;

    void generateShape();


public:

    Level();

    /**
     * @brief Override from sf::Drawable. Will draw all of the background tiles
     * 
     * @param target 
     * @param state 
     */
    void draw(sf::RenderTarget& target, sf::RenderStates state) const;

};