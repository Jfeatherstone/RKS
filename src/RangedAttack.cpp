#include "RangedAttack.hpp"

RangedAttack::RangedAttack() {
    // Default values
    m_damage = 5;
    m_range = 300;
    m_speed = 300;
    m_attackSpeed = .2f;
    m_piercing = false;
}

RangedAttack::RangedAttack(float damage, float range, float speed, Texture* projectileTexture, Texture* weaponIconTexture, bool piercing):
        m_damage(damage), m_range(range), m_speed(speed), m_projectileTexture(projectileTexture), m_weaponIconTexture(weaponIconTexture), m_piercing(piercing) {
    
}

Projectile* RangedAttack::createProjectile(Vector2f unitDirection, Vector2f position) {
    // Since there will likely be a lot of prjectiles on the screen, its best to use lowest level of detail here
    Projectile* p = new Projectile();
    p->shape = new Polygon(m_projectileTexture, Detail::Less);
    p->shape->setVelocity(unitDirection * m_speed);
    p->shape->setPosition(position);
    p->startPosition = position;
    p->distanceTraveled = 0.0f;
    p->totalTravelDistance = m_range;
    return p;
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

float RangedAttack::getAttackSpeed() {
    return m_attackSpeed;
}

void RangedAttack::setAttackSpeed(float attackSpeed) {
    m_attackSpeed = attackSpeed;
}

bool RangedAttack::getPiercing() {
    return m_piercing;
}

void RangedAttack::setPiercing(bool piercing) {
    m_piercing = piercing;
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