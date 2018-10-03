// Exercise, chapter one. 
#include <iostream>

int main()
{
	// Write a program that gets three game	scores from	the	user and displays the average.

	std::cout << "Enter 3 scores." << std::endl;
	int score1, score2, score3;

	std::cin >> score1 >> score2 >> score3;

	int total = (score1 + score2 + score3);

	int mean = total / 3;

	std::cout << "Your score average is: " << mean << std::endl;

	system("pause");
	return 0;
}