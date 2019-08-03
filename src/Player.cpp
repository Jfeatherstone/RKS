#include "Player.hpp"

void Player::init() {

    m_speed = 150;
    m_rotationSpeed = 65;
    m_dodgeCooldown = 1.5f;

    m_rangedAttack.setProjectileTexture(ResourceManager::getTexture("assets/textures/test_projectile.png"));
}

float Player::getSpeed() {
    return m_speed;
}

float Player::getRotationSpeed() {
    return m_rotationSpeed;
}

float Player::getDodgeCooldown() {
    return m_dodgeCooldown;
}

RangedAttack Player::getRangedAttack() {
    return m_rangedAttack;
}