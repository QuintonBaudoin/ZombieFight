#pragma once

// Paul Chu
// Mr. Matthew
// 9-29-2015

class Zombie
{
private:
	int health;
	int attack; // Define varibles of int health and attack
	//string name;

public:
	Zombie(); // Default Constructor
	Zombie(int, int, std::string); // constructor
	bool zombieAlive; // a bool of true or false of zombies are alive or not

	int remainingHealth() // Get the health
	{
		return health;
	}

	void setHealth(int h) // setting the health
	{
		health = h;
	}

	int strongestAttack() // getting the attack
	{
		return attack;
	}
	
	//void getName()
	//{
		//name = s;
	//}
};