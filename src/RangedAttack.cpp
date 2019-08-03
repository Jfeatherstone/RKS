#include "RangedAttack.hpp"

RangedAttack::RangedAttack() {
    // Default values
    m_damage = 5;
    m_range = 5;
    m_speed = 5;
}

RangedAttack::RangedAttack(float damage, float range, float speed, Texture* projectileTexture, Texture* weaponIconTexture):
        m_damage(damage), m_range(range), m_speed(speed), m_projectileTexture(projectileTexture), m_weaponIconTexture(weaponIconTexture) {
    
}

float RangedAttack::getDamage() {
    return m_damage;
}

void RangedAttack::setDamage(float damage) {
    m_damage = damage;
}

float RangedAttack::getRange() {
    return m_range;
}

void RangedAttack::setRange(float range) {
    m_range = range;
}

float RangedAttack::getSpeed() {
    return m_speed;
}

void RangedAttack::setSpeed(float speed) {
    m_speed = speed;
}

Texture* RangedAttack::getProjectileTexture() {
    return m_projectileTexture;
}

void RangedAttack::setProjectileTexture(Texture* texture) {
    m_projectileTexture = texture;
}

Texture* RangedAttack::getWeaponIcon() {
    return m_weaponIconTexture;
}

void RangedAttack::setWeaponIconTexture(Texture* texture) {
    m_weaponIconTexture = texture;
}