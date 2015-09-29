#include <iostream>
#include <string>
#include "Zombie.h"
using namespace std;


Zombie::Zombie()
{

}

Zombie::Zombie(int a_health, int a_attack, string) // Define Zombie and set parameters to define varibles
{
	health = a_health;
	attack = a_attack;
	zombieAlive = true;
}


void fighting(Zombie zombie[]) // Have Zombies in array in order for Zombies to fight 
{
	int currentZombies = sizeof(zombie); // the current zombies left in the array

	while (currentZombies > 1) // at least one zombie is alive
	{
		for (int i = 0; i < sizeof(zombie); i++) // loop through zombies in array
		{
			if (zombie[i].strongestAttack() == zombie[i + 1].strongestAttack())
			{
				zombie[i].remainingHealth() -= zombie[i + 1].strongestAttack(); // Sytnax errors, I don't know how to fix them
			}

			if (zombie[i].strongestAttack() == zombie[i + 2].strongestAttack())
			{
				zombie[i].remainingHealth() -= zombie[i + 2].strongestAttack();
			}



			if (zombie[i + 1].strongestAttack() == zombie[i].strongestAttack())
			{
				zombie[i + 1].remainingHealth() -= zombie[i].strongestAttack();
			}

			if (zombie[i + 1].strongestAttack() == zombie[i + 2].strongestAttack())
			{
				zombie[i + 1].remainingHealth() -= zombie[i + 2].strongestAttack();
			}



			if (zombie[i + 2].strongestAttack() == zombie[i].strongestAttack())
			{
				zombie[i + 2].remainingHealth() -= zombie[i].strongestAttack();
			}

			if (zombie[i + 2].strongestAttack() == zombie[i + 1].strongestAttack())
			{
				zombie[i + 2].remainingHealth() -= zombie[i + 1].strongestAttack();
			}
		}

		for (int i = 0; i < sizeof(zombie); i++) // loop in the array of zombies to check if alive.
		{
			if (zombie[i].remainingHealth <= 0)
			{
				zombie[i].zombieAlive = false;
			}

			if (zombie[i + 1].remainingHealth <= 0)
			{
				zombie[i + 1].zombieAlive = false;
			}

			if (zombie[i + 2].remainingHealth <= 0)
			{
				zombie[i + 2].zombieAlive = false;
			}
		}

	}

}