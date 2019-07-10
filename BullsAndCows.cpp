// BullsAndCows.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

void PrintIntro();
void PlayGame();
void GetGuessAndPrintBack();

int main()
{

	PrintIntro();
	PlayGame();

	return 0;
}




void PrintIntro()
{
	constexpr int WORD_LENGTH = 9;
	cout << "Wellcome to Bulls and Cows\n";
	cout << "Can you guess the " << WORD_LENGTH;
	cout << " letter isogam I'm thinking of? \n";

}

void PlayGame() 
{
	// Loo for the number of turns asking for guesses
	constexpr int NUMBER_OF_TURNS = 5;

	for (int count = 1; count <= NUMBER_OF_TURNS; count++)
	{
		GetGuessAndPrintBack();
		cout << endl;
	}
}

void GetGuessAndPrintBack()
{
	// Get guess from player

	cout << "Enter your guess: ";
	string Guess = "";
	getline(cin, Guess);

	// Print the guess back to them
	cout << "Your Guess was: " << Guess << endl;
}
