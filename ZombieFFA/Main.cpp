#include <iostream>
#include <string>
#include "Zombie.h"
#include "Zombie.cpp"
using namespace std;

void main()
{
	Zombie zombieFighter[3];
	zombieFighter[0] = Zombie(100, 12, "Cookie man");
	zombieFighter[1] = Zombie(100, 7, "Bear hug");
	zombieFighter[2] = Zombie(100, 20, "Pandas");

	fighting(zombieFighter);

	system("pause");
}


/*int zombies[5];
Zombie deadpeople[5];*/

//Zombie one = Zombie (100, 10, "Cookie Monster"); // Call in zombie
//Zombie two = Zombie(100, 50, "Woot monster");
//Zombie three = Zombie(100, 50, "Hug Zombie");