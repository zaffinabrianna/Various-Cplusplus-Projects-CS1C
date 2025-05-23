
//1. STL i the Standard Template Library and uses templates which allows compile-time polymorphism
//   A vector is a sequential container implemented as a dynamic array.
//2. vecList.resize(n);
//3. An STL array container is a holder object that stores a collection of other objects. It differs
//	 from a vector because its size can not be changed once declared.
//4. Resize resizes the container so that it conatains n elements. reserve requests that the vector
//   capacity be at leat enough to contain n elements.
//5. Begin() returns the iterator to the beginning of the array and end() sets the iterator to the end.
//6. Using push_back() in a code: On lines 51-57


/*******************************************************************************
* AUTHOR					: Brianna Zaffina
* ASSIGNMENT				: HW05
* CLASS						: CS1C
* SECTION					: T/TH 1:30 - 3:50pm
* DUE DATE					: 9/19/2023
*******************************************************************************/

#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
using namespace std;

/*******************************************************************************
*
* STL VECTORS
*_______________________________________________________________________________
* This program uses vectors to simulate a lottery picking number device.
*_______________________________________________________________________________
* INPUT:
*	numOfSpots:	An integer that has 51 spots.
*	selectedSpots: An integer that has 6 spots that are meant to be selected in 
*				   vector.
*
* OUTPUT:
*	An assorment of 6 randomized numbers between 1-51 is outputted.
********************************************************************************/

// FUNCTION PROTOTYPES:
vector<int>Lotto(int, int);
int myRand(int);

// MAIN:
int main()
{
	//INPUT:
	int numofSpots = 51;
	int selectedSpots = 6;
	
	vector<int>winners;

	//PROCESS:
	winners = Lotto(numofSpots, selectedSpots);
	
	//OUTPUT:
	cout << "\nThe winning number is: ";
	
	for (vector<int>::iterator it = winners.begin(); it != winners.end(); ++it) //outputs the vector 
	{
		cout << " " << *it;
	}


	return 0;
}

// Function to randomize numebrs
int myRand(int i)
{
	return rand() % i;
}

//Vectore<int> function to randomize and pick the winning spots
vector<int>Lotto(int numofSpots, int selectedSpots)
{
	
	srand(unsigned(time(0))); //seeds random time

	//Intliazed vectors:
	vector<int>randVec;
	vector<int>winnerNum;

	// Push backs the amount of space from 1-51
	for (int i = 1; i < numofSpots; i++)
	{
		randVec.push_back(i);
	}

	//Shuffles the vectors numbers in order
	random_shuffle(randVec.begin(), randVec.end(), myRand);

	cout << "\nThe Shuffled Nums: " << endl;

	//Outputs the vectors randomized contents to the console.
	for (vector<int>::iterator it = randVec.begin(); it != randVec.end(); ++it)
	{
		cout << " " << *it;
	}
	cout << endl;

	// Pushes back the winning numbers into the vector that is being returned
	for (int i = 0; i < selectedSpots; i++)
	{
		int temp = rand() % 51 + 1;
		winnerNum.push_back(temp);
	}

	// Sorts the numbers in order
	sort(winnerNum.begin(), winnerNum.end());

	//Returns winning numbers
	return winnerNum;
} 