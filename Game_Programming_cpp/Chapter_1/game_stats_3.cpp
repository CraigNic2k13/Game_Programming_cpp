// Game stats 3.0 
// Demonstrating constant values. 

#include <iostream>
using std::cout;
using std::endl;
const signed int ALIEN_POINTS = 150;


int main()
{
	int aliensKilled = 10;
	int score = aliensKilled * ALIEN_POINTS;

	cout << "Score: " << score << endl;

	enum difficulty
	{
		NOVICE, EASY, NORMAL, HARD, DEATHMODE
	};

	difficulty myDiffuclty = EASY;

	enum  shipCost
	{
		FIGHTER_COST	= 25,
		BOMBER_COST,
		CRUISER_COST	= 50
	};

	shipCost myShipCost = BOMBER_COST;

	cout << "\nTo upgrade my ship to a cruiser, it will cost " << (CRUISER_COST - myShipCost) << " Resource Points." << endl;


	system("pause");
	return 0;
}