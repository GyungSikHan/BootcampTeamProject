#include "Shop.h"
#include <iostream>
#include "Item.h"
#include "Character.h"
using namespace std;

void Shop::displayItems()
{
	cout<<"============== ���� =============="<<endl;
	cout<<"----------------------------------"<<endl;
	for (auto& item : avaliableItems)
	{
		int minusPrice = item->getPrice() * sellPriceRatio;
		int sellPrice = item->getPrice() - minusPrice;
		cout << item->getName() << " | ���Ű� : " << item->getPrice() << "Gold | �ǸŰ� : " << sellPrice << endl;
	}
	cout<<"----------------------------------"<<endl;
}

void Shop::buyItem(int index, Character* player)
{
	player->addGold(-(avaliableItems[index]->getPrice()));
	player->pushItem(avaliableItems[index]);
	cout << avaliableItems[index]->getPrice() << " Gold�� ����Ͽ�" << avaliableItems[index]->getName() << "�� �����ߴ�!" << endl;
}

void Shop::sellItem(int index, Character* player)
{
	for (auto& item : avaliableItems)
	{
		if (item->getItemIdx() == index) 
		{
			int minusPrice = item->getPrice() * sellPriceRatio;
			int sellPrice = item->getPrice() - minusPrice;
			player->addGold(sellPrice);
			cout << item->getName() << "��(��) �Ǹ��Ͽ� " << sellPrice<<" Gold�� �����!" << endl;
			player->popItemByType(index); 
			break;
		}
	}
}
