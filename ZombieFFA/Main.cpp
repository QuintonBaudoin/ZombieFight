#include <iostream>
#include <string>
#include "Zombie.h"
using namespace std;

// Paul Chu
// Mr. Matthew
// 9-29-2015


void fighting(Zombie zombie[]) // Have Zombies in array in order for Zombies to fight 
{
	int currentZombies = sizeof(zombie); // the current zombies set equal to the array of zombies

	while (currentZombies >= 1) // at least one zombie is alive
	{
		for (int i = 0; i < currentZombies; i++) // loop through zombies in array
		{
			zombie[i].setHealth(zombie[i].remainingHealth() - zombie[i + 1].strongestAttack()); // elements in the zombie fight the next one in the array
			
			if (zombie[i].remainingHealth() <= 0) // if that current zombie is dead, then turn him off
			{
				zombie[i].zombieAlive = false; // zombie is dead

				if (zombie[i].zombieAlive == false) // if the zombie is dead
				{
					currentZombies -= 1; // minus one zombie that die
					
					if (currentZombies == 1) // if the current zombie is 1 
					{
						cout << "This Zombie won!" << endl; // Then I print that current zombie to the console.
						cout << zombie<< endl;
						break;
					}
				}
			}
		}
	}
}
void main()
{
	Zombie *zombieFighter[3]; // Array of 3 zombies
	zombieFighter[0] = &Zombie(100, 100, "Cookie man"); // zombie 1 reference to zombie and give him 100 health, 100 attack and the name cookie man.
	zombieFighter[1] = &Zombie(100, 50, "Bear hug");// zombie 2 reference to zombie and give him 100 health, 50 attack and the name bear hug.
	zombieFighter[2] = &Zombie(100, 25, "Pandas");// zombie 3 reference to zombie and give him 100 health, 25 attack and the name pandas.

	fighting(*zombieFighter); // call in the fighting function that has a parameter that points to zombiefighter.

	system("pause");
}


/*int zombies[5];
Zombie deadpeople[5];*/

//Zombie one = Zombie (100, 10, "Cookie Monster"); // Call in zombie
//Zombie two = Zombie(100, 50, "Woot monster");
//Zombie three = Zombie(100, 50, "Hug Zombie");