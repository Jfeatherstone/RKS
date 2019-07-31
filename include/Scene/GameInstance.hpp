#pragma once

#include <SFML/Graphics.hpp>

#include "Scene/Scene.hpp"
#include "Player.hpp"
#include "Level.hpp"

class GameInstance: public Scene {

private:

    /**
     * @brief The player in the center of the screen
     */
    Player m_player;

    /**
     * @brief The view the player and all environment/enemies will be drawn on that
     * can rotate and move with the player
     */
    sf::View m_playerView;

    /**
     * @brief The HUD view, which will stay static throughout the game, and contain
     * the health bar, xp bar, etc.
     */
    sf::View m_HUDView;

    /******************
     *      HUD VIEW
     *****************/
    sf::Sprite m_healthBar;


    /******************
     *    PLAYER VIEW
     *****************/
    Level m_currentLevel;

public:

    // The virtual methods from Scene
    void init(sf::Vector2f windowSize);
    std::set<SceneType> input(sf::RenderWindow& window, float elapsedTime);
    void update(sf::RenderWindow& window, float elapsedTime);
    // Inherited method from sf::Drawable
    void draw(sf::RenderTarget& target, sf::RenderStates state) const;

};