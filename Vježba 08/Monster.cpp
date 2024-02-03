#include "monster.h"

Monster::Monster(const std::string& name, int health, int damage, const std::string& ability) : Enemy(name, health, damage) {
    if (ability.empty()) {
        throw std::invalid_argument("Ability cannot be empty.");
    }
    this->ability = ability;
}

Monster::~Monster() {}

void Monster::attack() {
    std::cout << "Monster attacks with special ability: " << ability << " and deals " << damage << " damage." << std::endl;
}

void Monster::displayInfo() {
    std::cout << "Monster - Name: " << name << ", Health: " << health << ", Damage: " << damage << ", Ability: " << ability << std::endl;
}
