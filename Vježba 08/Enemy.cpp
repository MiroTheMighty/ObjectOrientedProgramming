#include "enemy.h"

Enemy::Enemy(const std::string& name, int health, int damage) : name(name) {
    if (health < 0 || damage < 0) {
        throw std::invalid_argument("Health and damage must be non-negative.");
    }
    this->health = health;
    this->damage = damage;
}

Enemy::~Enemy() {}