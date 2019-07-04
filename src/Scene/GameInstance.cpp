#include "Scene/GameInstance.hpp"

void GameInstance::init(sf::Vector2f windowSize) {

    m_windowSize = windowSize;

    setBackgroundColor(DEFAULT_BACKGROUND_COLOR);
    setBackgroundTransparency(.70f);
    m_background.setSize(m_windowSize);

    /***************************
     *     HUD VIEW INIT
     **************************/
    


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


}