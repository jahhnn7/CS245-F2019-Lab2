/********************************************************************
 * AwardWinners.cpp :
 * Program that randomly picks a movie for an award; makes use of
 * string, vector, and random from the Standard Library.
 *
 * NOTE: This version of the program has numerous errors. Your job
 * is to...
 *	1.) fix all bugs
 *	2.) commit your changes to your local Git repository
 *	3.) push your changes to your remote Git respository
 *	4.) submit a Pull Request to your instructor's Git project
 *
 ********************************************************************
 */

 // Preprocessor directives
#include <random>
#include <string>
#include <iostream>
using namespace std;



int main()
{
	// Create a vector of strings; add items using a list initializer
	vector<string> movies = { "Holmes & Watson", "Mega Shark vs. Crocosaurus", "C-SPAN: The Movie", "That's My Boy" };

	// Add a 5th string to the end of the vector
	movies.push_back("Titanic 2: The Quickening");

	// Announce the nominees
	cout << "And the nominees for Best Picture (cough) are..." << endl;

	int size = movies.size();
	for (int i = 0; i < size; i++)
	{
		cout << movies.at(i) << endl;
	}

	// Set up a random number generator seeder
	
	std::random_device seed;

	// Create a random integer generator; chooses random ints from 1 to 5 (inclusive)
	std::uniform_int_distribution<int> rand_dist(1, 5);

	// Get the next random integer

	int pick_a_number = rand_dist(seed);
	

	// Get the item from the vector at the randomly-selected index
	
	string winner = movies.at(pick_a_number);

	// Convert each charcter of the 'winner' string to UPPERCASE
	for (char c : winner)
	{
		c = toupper(c);
	}

	// Print the UPPERCASE string
	cout << endl << "And the winner is..." << winner;

	return 0;
}

