#include "Character.h"

#include <iostream>

Character* Character::instance = nullptr;

Character* Character::getInstance(string _name)
{
	if (!instance)
	{
		instance = new Character(_name);
	}
	else
	{
		cout << "�̹� ĳ���Ͱ� �����մϴ�." << endl;
	}
	
	return instance;
}

Character::Character(string _name) : name(_name)
{
	
}

Character::~Character()
{

}

void Character::displayStatus()
{
	cout << "------------ Player Info ------------" << endl;
	cout << "Name:" << this->name << endl;
	cout << "Level: " << this->level << endl;
	cout << "Health: " << this->health << "/" << this->maxHealth << endl;
	cout << "Attack: " << this->attack << endl;
	cout << "EXP: " << this->experience << "/" << this->maxExperience << endl;
	cout << "Gold: " << this->gold << endl;
	cout << "Inventory: " << endl;
	
	for (int i = 0; i < inventory.size(); i++)
	{
		cout << "  [" << i + 1 << "] " << inventory[i]->getName() << endl;
	}

	cout << "------------------------------------" << endl;
}

void Character::levelUp()
{
	if (experience < maxExperience)
	{
		cout << "����ġ�� �����Ͽ� �������� �� �����ϴ�. (" << experience << "/" << maxExperience << ")" << endl;
	}

	if (this->level >= 10)
	{
		cout << "�ְ� ������ �����Ͽ� �������� �� �����ϴ�." << endl;
	}

	this->level += 1;
	this->experience -= maxExperience;
	this->maxHealth = 100 + 20 * (this->level - 1);
	this->attack = 5 + 5 * (this->level - 1);
	this->maxExperience = 100 + 50 * (this->level - 1);
	this->health = this->maxHealth;
}

void Character::useItem(int _index)
{
	inventory[_index]->use();

	inventory.erase(inventory.begin() + _index);
}

void Character::visitShop()
{
	/*TODO*/
}
