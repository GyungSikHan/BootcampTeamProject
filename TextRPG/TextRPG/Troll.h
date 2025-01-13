﻿#pragma once
#include "Monster.h"
#include<iostream>
#include<string>

using namespace std;
class Troll : public Monster {
private:
    string name = "NULL";
    int health = 0;
    int attack = 0;
public:
    Troll(int level/*캐릭터 레벨*/) {
        int RandomHelathBoost = rand() % 10 + 25;
        int RandomDamageBoost = rand() % 5 + 7;
        this->health = level * RandomHelathBoost;
        this->attack = level * RandomDamageBoost;
        this->name = "트롤";
    }
    string getName() { return name; }
    int getHealth() { return health; }
    int getAttack() { return attack; }
    void takeDamage(int damage);
    Item* dropItem();
};