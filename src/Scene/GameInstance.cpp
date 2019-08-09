#include "Scene/GameInstance.hpp"

void GameInstance::init(sf::Vector2f windowSize) {

    m_windowSize = windowSize;

    setBackgroundColor(DEFAULT_BACKGROUND_COLOR);
    setBackgroundTransparency(.70f);
    m_background.setSize(m_windowSize);

    /***************************
     *     CONTROLS INIT
     **************************/
    m_pauseKey = Keyboard::Escape;
    m_forwardsKey = Keyboard::W;
    m_backwardsKey = Keyboard::S;
    m_rightKey = Keyboard::D;
    m_leftKey = Keyboard::A;
    m_rotateRightKey = Keyboard::E;
    m_rotateLeftKey = Keyboard::Q;
    m_dodgeKey = Keyboard::Space;

    /***************************
     *     PLAYER INIT
     **************************/
    RectangleShape r;
    r.setSize(Vector2f(50, 50));
    m_player = Player(r); // Temporarily, we will use a rectangle as the player sprite
    m_player.setOrigin(m_player.getCentroid());
    m_player.setPosition(m_windowSize * .5f);
    m_player.init();
    m_timeSinceDodge = 0;
    m_timeSinceRangedAttack = 0;

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

    m_currentLevel.setSize(LevelSize::Tiny, m_windowSize);
}

set<SceneType> GameInstance::input(RenderWindow& window, float elapsedTime) {
    
    set<SceneType> scenes;

    Event event;
    
    while (window.pollEvent(event)) {

        if (event.type == sf::Event::KeyPressed && window.hasFocus()) {

            if (event.key.code == m_pauseKey)
                // Enter the pause menu
                scenes.insert(SceneType::PauseMenu);

            if (event.key.code == m_forwardsKey) {
                m_velocity += Vector2f(0, -m_player.getSpeed());
                //m_player.setVelocity(m_player.getVelocity() + Vector2f(0, -m_player.getSpeed()));
            }
            if (event.key.code == m_backwardsKey) {
                m_velocity += Vector2f(0, m_player.getSpeed());
                m_player.setVelocity(m_player.getVelocity() + Vector2f(0, m_player.getSpeed()));
            }
            if (event.key.code == m_leftKey) {
                m_player.setVelocity(m_player.getVelocity() + Vector2f(-m_player.getSpeed(), 0));
            }
            if (event.key.code == m_rightKey) {
                m_player.setVelocity(m_player.getVelocity() + Vector2f(m_player.getSpeed(), 0));
            }
            if (event.key.code == m_rotateLeftKey) {
                m_player.setAngularVelocity(m_player.getAngularVelocity() - m_player.getRotationSpeed());
            }
            if (event.key.code == m_rotateRightKey) {
                m_player.setAngularVelocity(m_player.getAngularVelocity() + m_player.getRotationSpeed());
            }
            if (event.key.code == m_dodgeKey && m_timeSinceDodge >= m_player.getDodgeCooldown()) {
                cout << "Dodge" << endl;
                m_timeSinceDodge = 0;
            }

        }

        if (event.type == Event::KeyReleased) {

            if (event.key.code == m_forwardsKey) {
                m_velocity += -Vector2f(0, -m_player.getSpeed());
                //m_player.setVelocity(m_player.getVelocity() - Vector2f(0, -m_player.getSpeed()));
            }
            if (event.key.code == m_backwardsKey) {
                m_velocity += -Vector2f(0, m_player.getSpeed());
                //m_player.setVelocity(m_player.getVelocity() - Vector2f(0, m_player.getSpeed()));
            }
            if (event.key.code == m_leftKey) {
                m_velocity += -Vector2f(-m_player.getSpeed(), 0);
                //m_player.setVelocity(m_player.getVelocity() - Vector2f(-m_player.getSpeed(), 0));
            }
            if (event.key.code == m_rightKey) {
                m_velocity += -Vector2f(m_player.getSpeed(), 0);
                //m_player.setVelocity(m_player.getVelocity() - Vector2f(m_player.getSpeed(), 0));
            }
            if (event.key.code == m_rotateLeftKey) {
                m_rotationVelocity += m_player.getRotationSpeed();
                m_player.setAngularVelocity(m_player.getAngularVelocity() + m_player.getRotationSpeed());
            }
            if (event.key.code == m_rotateRightKey) {
                m_player.setAngularVelocity(m_player.getAngularVelocity() - m_player.getRotationSpeed());
                
                // Get the direction to dodge in
                Vector2f dodgeUnitVec;
                if (VectorMath::mag(m_player.getVelocity()) != 0)
                    dodgeUnitVec = VectorMath::normalize(m_player.getVelocity());
                else
                    // Otherwise, we go in the direction of the mouse
                    dodgeUnitVec = VectorMath::normalize(Vector2f(Mouse::getPosition(window)) - m_windowSize * .5f);

            }

        }

        if (Mouse::isButtonPressed(Mouse::Button::Left) && window.hasFocus() && m_timeSinceRangedAttack >= m_player.getRangedAttack().getAttackSpeed()) {
            Vector2f directionVec = VectorMath::normalize(Vector2f(Mouse::getPosition(window)) - m_windowSize * .5f);
            m_currentLevel.addProjectile(m_player.getRangedAttack().createProjectile(directionVec, m_player.getPosition()));
            m_timeSinceRangedAttack = 0;
        }

    }

    m_timeSinceDodge += elapsedTime;
    m_timeSinceRangedAttack += elapsedTime;
    return scenes;
}

void GameInstance::update(sf::RenderWindow& window, float elapsedTime) {

    //m_player.update(elapsedTime);
    m_currentLevel.updateLevel(m_player.getVelocity() * elapsedTime, m_player.getAngularVelocity() * elapsedTime, elapsedTime);
}

void GameInstance::draw(sf::RenderTarget& target, sf::RenderStates state) const {

    target.draw(m_background);
    target.draw(m_currentLevel);

    /***************************
     *         HUD VIEW
     **************************/
    target.setView(m_HUDView);


    /***************************
     *       PLAYER VIEW
     **************************/
    target.setView(m_playerView);

    target.draw(m_player);
}