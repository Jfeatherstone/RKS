#pragma once

#include <SFML/Graphics.hpp>
#include "external/SFMLCollision/Polygon.hpp"

using namespace sf;
using namespace std;

struct Projectile {
    Polygon* shape;
    Vector2f startPosition;
    float distanceTraveled;
    float totalTravelDistance;
};

class RangedAttack {

private:

    float m_damage;
    float m_range;
    float m_speed;
    float m_attackSpeed;

    bool m_piercing;

    Texture* m_projectileTexture;
    Texture* m_weaponIconTexture;

public:

    RangedAttack(float damage, float range, float speed, Texture* projectileTexture, Texture* weaponIconTexture, bool piercing = false);
    RangedAttack();
    
    Projectile* createProjectile(Vector2f unitDirection, Vector2f position);

    float getDamage();
    void setDamage(float damage);

    float getRange();
    void setRange(float range);

    float getSpeed();
    void setSpeed(float speed);

    float getAttackSpeed();
    void setAttackSpeed(float attackSpeed);

    bool getPiercing();
    void setPiercing(bool piercing);

    Texture* getProjectileTexture();
    void setProjectileTexture(Texture* texture);

    Texture* getWeaponIcon();
    void setWeaponIconTexture(Texture* texture);

};
