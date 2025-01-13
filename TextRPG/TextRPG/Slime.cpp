#include "Slime.h"
#include "Item.h"
#include "AttackBoost.h"
#include "HealthPotion.h"
#include <iostream>

using namespace std;

void Slime::takeDamage(int damage) {
	this->health -= damage;
}

Item* Slime::dropItem() {
	int randomItem = rand() % 2;
	if (randomItem == 0)return new HealthPotion();
	else if (randomItem == 1)return new AttackBoost();
	return nullptr;
}

void Slime::setName() {
	this-> name = "������";
}

void Slime::setAttack(int level, int random) {
	this-> attack = level * random;
}

void Slime::setHealth(int level, int random) {
	this-> health = level * random;
}

int Slime::dropGold() {
	int randomGold = rand() % 2;
	return randomGold;
}