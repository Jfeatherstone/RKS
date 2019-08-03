#pragma once

#include <SFML/Graphics.hpp>

using namespace sf;
using namespace std;

class RangedAttack {

private:

    float m_damage;
    float m_range;
    float m_speed;

    Texture* m_projectileTexture;
    Texture* m_weaponIconTexture;

public:

    RangedAttack(float damage, float range, float speed, Texture* projectileTexture, Texture* weaponIconTexture);
    RangedAttack();
    
    float getDamage();
    void setDamage(float damage);

    float getRange();
    void setRange(float range);

    float getSpeed();
    void setSpeed(float speed);

    Texture* getProjectileTexture();
    void setProjectileTexture(Texture* texture);

    Texture* getWeaponIcon();
    void setWeaponIconTexture(Texture* texture);

};
