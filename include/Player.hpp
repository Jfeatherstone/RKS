#pragma once

#include <SFML/Graphics.hpp>

class Player: public sf::Drawable{

private:

public:

    // Inherited method from sf::Drawable
    void draw(sf::RenderTarget& target, sf::RenderStates state) const;

};