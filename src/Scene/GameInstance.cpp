#include "Scene/GameInstance.hpp"

void GameInstance::init(sf::Vector2f windowSize) {

    m_windowSize = windowSize;

    setBackgroundColor(DEFAULT_BACKGROUND_COLOR);
    setBackgroundTransparency(.70f);
    m_background.setSize(m_windowSize);

    /***************************
     *     PLAYER INIT
     **************************/
    RectangleShape r;
    r.setSize(Vector2f(50, 50));
    m_player = Player(r); // Temporarily we will use a rectangle as the player sprite
    m_player.setOrigin(m_player.getCentroid());
    m_player.setPosition(m_windowSize * .5f);
    m_player.init();

    /***************************
     *     HUD VIEW INIT
     **************************/
    m_HUDView.setSize(m_windowSize);
    m_HUDView.setCenter(m_windowSize * .5f);

    /***************************
     *   PLAYER VIEW INIT
     **************************/
    m_playerView.setSize(m_windowSize);
    m_playerView.setCenter(m_windowSize * .5f);

    m_currentLevel.setSize(LevelSize::Medium, m_windowSize);

}

set<SceneType> GameInstance::input(RenderWindow& window, float elapsedTime) {
    
    set<SceneType> scenes;

    Event event;
    
    while (window.pollEvent(event)) {

        if (event.type == sf::Event::KeyPressed) {

            if (event.key.code == Keyboard::Escape)
                // Enter the pause menu
                scenes.insert(SceneType::PauseMenu);

            if (event.key.code == Keyboard::W) {
                m_player.setVelocity(m_player.getVelocity() + Vector2f(0, -m_player.getSpeed()));
            }
            if (event.key.code == Keyboard::S) {
                m_player.setVelocity(m_player.getVelocity() + Vector2f(0, m_player.getSpeed()));
            }
            if (event.key.code == Keyboard::A) {
                m_player.setVelocity(m_player.getVelocity() + Vector2f(-m_player.getSpeed(), 0));
            }
            if (event.key.code == Keyboard::D) {
                m_player.setVelocity(m_player.getVelocity() + Vector2f(m_player.getSpeed(), 0));
            }

        }

        if (event.type == Event::KeyReleased) {

            if (event.key.code == Keyboard::W) {
                m_player.setVelocity(m_player.getVelocity() - Vector2f(0, -m_player.getSpeed()));
            }
            if (event.key.code == Keyboard::S) {
                m_player.setVelocity(m_player.getVelocity() - Vector2f(0, m_player.getSpeed()));
            }
            if (event.key.code == Keyboard::A) {
                m_player.setVelocity(m_player.getVelocity() - Vector2f(-m_player.getSpeed(), 0));
            }
            if (event.key.code == Keyboard::D) {
                m_player.setVelocity(m_player.getVelocity() - Vector2f(m_player.getSpeed(), 0));
            }

        }

    }

    if (Keyboard::isKeyPressed(Keyboard::W)) {

    }

    return scenes;
}

void GameInstance::update(sf::RenderWindow& window, float elapsedTime) {

    m_player.update(elapsedTime);

}

void GameInstance::draw(sf::RenderTarget& target, sf::RenderStates state) const {

    target.draw(m_background);

    /***************************
     *         HUD VIEW
     **************************/
    target.setView(m_HUDView);

    target.draw(m_currentLevel);

    target.draw(m_player);
}