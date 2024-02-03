#pragma once
#include"Enemy.h"

class Boss : public Enemy {
private:
    std::string weapon;
public:
    Boss(const std::string& name, int health, int damage, const std::string& weapon);
    ~Boss() override;

    void attack() override;
    void displayInfo() override;
};
