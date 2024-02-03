#include "enemy.h"
#include "boss.h"
#include "monster.h"
#include <vector>

int main() {
    std::vector<Enemy*> enemies;

    try {
        enemies.push_back(new Boss("Big Boss", 100, 20, "Sword"));
        enemies.push_back(new Monster("Fire Monster", 80, 15, "Fire Breath"));
        enemies.push_back(new Boss("Evil Overlord", 120, 25, "Magic Staff"));

        for (const auto& enemy : enemies) {
            enemy->attack();
            enemy->displayInfo();
            std::cout << "---------------------------" << std::endl;
        }
    }
    catch (const std::invalid_argument& e) {
        std::cerr << "Invalid argument: " << e.what() << std::endl;
    }

    for (const auto& enemy : enemies) {
        delete enemy;
    }

    return 0;
}
