// Game stats class to demonstrate arithmetic operations. 
#include <iostream>
#include <limits>
using std::cout;
using std::endl;

int main()
{
	unsigned int score = 5000;
	cout << "score: " << score << endl;

	// altering the score variable. 
	score = score + 100;
	cout << "score: " << score << endl;

	// combined assignment operator.
	score += 100;
	cout << "score: " << score << endl;

	// increment operators
	signed int lives = 3;
	++lives;
	cout << "lives: " << lives << endl;

	lives = 3;
	lives++;

	cout << "lives: " << lives << endl;

	lives = 3;
	signed int bonus = ++lives * 10;										// increments by 1, then processes line of code. 
	cout << "lives, bonus = " << lives << ", " << bonus << endl;

	lives = 3;
	bonus = lives++ * 10;													// processes line of code, then increments by 1 afterwards. 
	cout << "lives, bonus = " << lives << ", " << bonus << endl;

	// Integer wrap around. 
	score = std::numeric_limits<unsigned int>::max();
	cout << "\nscore: " << score << endl;
	++score;
	cout << "score: " << score << endl;


	system("pause");
	return 0;
}