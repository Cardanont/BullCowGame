// BullsAndCows.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

void PrintIntro();
void GetGuessAndPrintBack();

int main()
{

	PrintIntro();
	GetGuessAndPrintBack();
	GetGuessAndPrintBack();

	cout << endl;

	return 0;
}

void PrintIntro()
{
	constexpr int WORD_LENGTH = 9;
	cout << "Wellcome to Bulls and Cows\n";
	cout << "Can you guess the " << WORD_LENGTH;
	cout << " letter isogam I'm thinking of? \n";

}

void GetGuessAndPrintBack()
{
	// Get guess from player

	cout << "Enter your guess: ";
	string Guess = "";
	getline(cin, Guess);

	// Repeat the guess back to them
	cout << "Your Guess was: " << Guess << endl;
}
