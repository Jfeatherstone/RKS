#include "Scene/PauseMenu.hpp"

void PauseMenu::init(sf::Vector2f windowSize) {

    m_windowSize = windowSize;

    setBackgroundColor(DEFAULT_BACKGROUND_COLOR);
    setBackgroundTransparency(.70f);
    m_background.setSize(m_windowSize);
 
    m_resumeText.setFont(*ResourceManager::getFont("assets/fonts/vcr_osd.ttf"));
    m_resumeText.setString("Resume");
    m_resumeText.setCharacterSize(m_windowSize.x * .04f);
    m_resumeText.setOrigin(m_resumeText.getLocalBounds().width / 2, m_resumeText.getLocalBounds().height / 2);
    m_resumeText.setPosition(m_windowSize.x / 2, m_windowSize.y * .35f);

    m_optionsText.setFont(*ResourceManager::getFont("assets/fonts/vcr_osd.ttf"));
    m_optionsText.setString("Options");
    m_optionsText.setCharacterSize(m_windowSize.x * .04f);
    m_optionsText.setOrigin(m_optionsText.getLocalBounds().width / 2, m_optionsText.getLocalBounds().height / 2);
    m_optionsText.setPosition(m_windowSize.x / 2, m_windowSize.y * .45f);

    m_mainMenuText.setFont(*ResourceManager::getFont("assets/fonts/vcr_osd.ttf"));
    m_mainMenuText.setString("Exit to main menu");
    m_mainMenuText.setCharacterSize(m_windowSize.x * .04f);
    m_mainMenuText.setOrigin(m_mainMenuText.getLocalBounds().width / 2, m_mainMenuText.getLocalBounds().height / 2);
    m_mainMenuText.setPosition(m_windowSize.x / 2, m_windowSize.y * .55f);

}

std::set<SceneType> PauseMenu::input(sf::RenderWindow& window, float elapsedTime) {
    
    std::set<SceneType> scenes;

    // We take the relative mouse position so we can highlight any text options that the mouse is inside of
    sf::Vector2i mousePosition = sf::Mouse::getPosition(window);

    // The play game option
    if (m_resumeText.getGlobalBounds().contains(mousePosition.x, mousePosition.y))
        m_resumeText.setFillColor(HIGHLIGHT_TEXT_COLOR);
    else
        m_resumeText.setFillColor(DEFAULT_TEXT_COLOR);

    // The options option
    if (m_optionsText.getGlobalBounds().contains(mousePosition.x, mousePosition.y))
        m_optionsText.setFillColor(HIGHLIGHT_TEXT_COLOR);
    else
        m_optionsText.setFillColor(DEFAULT_TEXT_COLOR);

    // The exit game option
    if (m_mainMenuText.getGlobalBounds().contains(mousePosition.x, mousePosition.y))
        m_mainMenuText.setFillColor(HIGHLIGHT_TEXT_COLOR);
    else
        m_mainMenuText.setFillColor(DEFAULT_TEXT_COLOR);


    sf::Event event;
    
    while (window.pollEvent(event)) {

        if (event.type == sf::Event::KeyPressed) {

            if (event.key.code == sf::Keyboard::Escape)
                // Exit the pause menu
                scenes.insert(SceneType::PauseMenu);

        }

        if (event.type == sf::Event::MouseButtonPressed) {

            // The resume game option
            if (m_resumeText.getGlobalBounds().contains(mousePosition.x, mousePosition.y)) {
                // Get rid of the main menu and add the game instance
                scenes.insert(SceneType::PauseMenu);
            }

            // The options option
            if (m_optionsText.getGlobalBounds().contains(mousePosition.x, mousePosition.y)) {
                // Put the options scene on top of the main menu
                scenes.insert(SceneType::OptionsMenu);
            }

            // The exit game option
            if (m_mainMenuText.getGlobalBounds().contains(mousePosition.x, mousePosition.y)) {
                // Add the main menu
                scenes.insert(SceneType::MainMenu);
                // Remove game instance and pause menu
                scenes.insert(SceneType::GameInstance);
                scenes.insert(SceneType::PauseMenu);
            }
        }

    }

    return scenes;
}

void PauseMenu::update(sf::RenderWindow& window, float elapsedTime) {

}

void PauseMenu::draw(sf::RenderTarget& target, sf::RenderStates state) const {

    target.draw(m_background);

    target.draw(m_resumeText);
    target.draw(m_optionsText);
    target.draw(m_mainMenuText);

}