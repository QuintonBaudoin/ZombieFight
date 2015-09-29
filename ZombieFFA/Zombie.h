#pragma once
class Zombie
{
private:
	int health;
	int attack; // Define varibles

public:
	Zombie(); // Default Constructor
	Zombie(int, int, std::string); // constructor
	bool zombieAlive;

	int remainingHealth()
	{
		return health;
	}

	int strongestAttack()
	{
		return attack;
	}
};