#pragma once

#include "Scene/Scene.hpp"
#include "Engine.hpp"

class MainMenu: public Scene {

private:

    const static sf::Color DEFAULT_TEXT_COLOR;
    const static sf::Color HIGHLIGHT_TEXT_COLOR;

    /**
     * @brief The text displaying the title
     */
    sf::Text m_titleText;

    /**
     * @brief The text entry that says "Play" and will lead to the game select screen
     */
    sf::Text m_playGameText;

    /**
     * @brief The text entry that says "Options" and allows the user to adjust video, audio, etc. options
     */
    sf::Text m_optionsText;

    /**
     * @brief The text entry that says "Exit Game" and quits the game
     */
    sf::Text m_exitText;

    /**
     * @brief The text that displays the current version of the game in the bottom left corner of the screen
     */
    sf::Text m_versionText;

public:

    // The virtual methods from Scene
    void init(sf::Vector2f windowSize);
    std::set<SceneType> input(sf::RenderWindow& window, float elapsedTime);
    void update(sf::RenderWindow& window, float elapsedTime);
    // Inherited method from sf::Drawable
    void draw(sf::RenderTarget& target, sf::RenderStates state) const;

};