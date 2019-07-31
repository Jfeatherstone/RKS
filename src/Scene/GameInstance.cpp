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
    m_player = Player(r);
    m_player.setOrigin(m_player.getCentroid());
    m_player.setPosition(m_windowSize * .5f);

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

std::set<SceneType> GameInstance::input(sf::RenderWindow& window, float elapsedTime) {
    
    std::set<SceneType> scenes;

    sf::Event event;
    
    while (window.pollEvent(event)) {

        if (event.type == sf::Event::KeyPressed) {

            if (event.key.code == sf::Keyboard::Escape)
                // Enter the pause menu
                scenes.insert(SceneType::PauseMenu);

        }

    }

    return scenes;
}

void GameInstance::update(sf::RenderWindow& window, float elapsedTime) {

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