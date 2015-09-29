#include <iostream>
#include <string>
#include "Zombie.h"
using namespace std;

// Paul Chu
// Mr. Matthew
// 9-29-2015

Zombie::Zombie() // Default constroater of Zombie
{

}

Zombie::Zombie(int a_health, int a_attack, string) // Define Zombie and set parameters to define varibles of health, attack and a bool if the zombie is alive.
{
	health = a_health;
	attack = a_attack;
	zombieAlive = true;
}


