#pragma once

#include <SFML/Graphics.hpp>

class Player: public sf::Drawable{

private:

    /**
     * @brief The current health of the player
     */
    int m_health;

    /**
     * @brief The maximum and starting health of the player
     */
    int m_maxHealth;

    /**
     * @brief How much health the player regenerates per second
     */
    float m_regen;

    /**
     * @brief The current xp of the player
     */
    int m_currentXP;

    /**
     * @brief The player's current level
     */
    int m_level;

    /**
     * @brief The sprite that will be drawn to the screen
     */
    sf::Sprite m_sprite;

    /**
     * @brief How fast the player is moving
     */
    sf::Vector2f m_velocity;

    /**
     * @brief The base speed of the player, as opposed to their current velocity
     * (m_velocity) (in pixels/second)
     */
    float m_speed;

    /**
     * @brief This method will check if the player is able to level up, and if they
     * are, their stats will be adjusted, and a messaged will be shown
     * 
     * return true The player has leveled up
     * return false The player has not leveled up
     */
    bool levelUp();

public:

    void update(float elapsedTime);

    // Inherited method from sf::Drawable
    void draw(sf::RenderTarget& target, sf::RenderStates state) const;

};