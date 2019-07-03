#pragma once

#include <SFML/Graphics.hpp>

#include "Scene/Scene.hpp"

class PauseMenu: public Scene {

private:

    sf::Text m_resumeText;
    sf::Text m_optionsText;
    sf::Text m_mainMenuText;

public:

    // The virtual methods from Scene
    void init(sf::Vector2f windowSize);
    std::set<SceneType> input(sf::RenderWindow& window, float elapsedTime);
    void update(sf::RenderWindow& window, float elapsedTime);
    // Inherited method from sf::Drawable
    void draw(sf::RenderTarget& target, sf::RenderStates state) const;

};