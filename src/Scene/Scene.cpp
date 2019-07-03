#include "Scene/Scene.hpp"

const sf::Color Scene::DEFAULT_BACKGROUND_COLOR = sf::Color(50, 50, 50, 255);
const sf::Color Scene::DEFAULT_TEXT_COLOR = sf::Color(10, 10, 10);
const sf::Color Scene::HIGHLIGHT_TEXT_COLOR = sf::Color(200, 200, 200);

Scene::Scene() {

    setBackgroundColor(DEFAULT_BACKGROUND_COLOR);
    setBackgroundTransparency(1.0f);

}

void Scene::init(sf::Vector2f windowSize) {

}

std::set<SceneType> Scene::input(sf::RenderWindow& window, float elapsedTime) {
    std::set<SceneType> scenes;

    return scenes;
}

void Scene::update(sf::RenderWindow& window, float elapsedTime) {

}

void Scene::draw(sf::RenderTarget& target, sf::RenderStates state) const {

    std::cout << "Scene print" << std::endl;
}

sf::RectangleShape Scene::getBackground() {
    return m_background;
}

void Scene::setBackgroundColor(sf::Color backgroundColor) {
    m_backgroundColor = backgroundColor;
    m_background.setFillColor(sf::Color(m_backgroundColor.r, m_backgroundColor.g, m_backgroundColor.b, int(m_backgroundTransparency*255)));
}

void Scene::setBackgroundTransparency(float transparency) {
    m_backgroundTransparency = transparency;
    m_background.setFillColor(sf::Color(m_backgroundColor.r, m_backgroundColor.g, m_backgroundColor.b, int(m_backgroundTransparency*255)));
}
