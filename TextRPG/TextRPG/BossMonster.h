﻿#pragma once
#include "Monster.h"
#include <iostream>
#include <string>


using namespace std;
class BossMonster : public Monster {
private:
    string name;
    int health = 0;
    int attack = 0;
public:
    BossMonster(int level) {
        int RandomHelathBoost = rand() % 15 + 30;
        int RandomDamageBoost = rand() % 8 + 8;
        setName();
        setAttack(level, RandomDamageBoost);
        setHealth(level, RandomHelathBoost);
    }
    void setName();
    void setAttack(int level, int random);
    void setHealth(int level, int random);
    string getName() { return name; }
    int getHealth() { return health; }
    int getAttack() { return attack; }
    void takeDamage(int damage);
    Item* dropItem();
};