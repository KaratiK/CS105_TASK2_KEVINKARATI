// CS105_Kevin_Karati_Task2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Player.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;

class Player
{
public:
	string name;
	Race race;
	int hitPoints, magicPoints;

	Player(string n, Race r, int hP, int mP)
	{
		name = n;
		race = r;
		hitPoints = hP;
		magicPoints = mP;
	}
	void setHitPoints(int hitPoints) {
		this->hitPoints = hitPoints;
}
};

//derived class
class Warrior : public Player 
{
public:
	Warrior(int hP = 200, int mP = 0);

	//void setHitPoints(int hP)
	//{
	//	hitPoints = hP;
	//}
	//int getHitPoints()
	//{
	//	return hitPoints;
	//}
};
class Priest : public Player
{
	Priest(int hP = 100, int mP = 200);
};

class Mage : public Player
{
public:
	Mage(int hP = 200, int mP = 0);
};

void setName(string name)
{

}




int main()
{
	int charClass;

	cout << "CHARACTER CREATION\n";
	cout << "Which class would you like to choose?\n";
	cout << "1. Create a Warrior!\n2. Create a Priest!\n3. Create a Mage!\n4. Finish creating characters!\n";
	cin >> charClass;

	switch(charClass)
		case 1:

}

