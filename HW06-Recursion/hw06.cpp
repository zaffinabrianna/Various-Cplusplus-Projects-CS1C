/*************************************************************************
* AUTHOR       : Brianna Zaffina
* ASSIGNMENT   : HW06	
* CLASS	       : CS 1C
* SECTION      : Tu/Th 1:30 - 3:50pm
* DUE DATE     : 9/21/23
*************************************************************************/

#include <iostream>
#include <string>
#include <stdio.h>
#include <ctype.h>

using namespace std;

/*******************************************************************************
*
* RECURSION
*_______________________________________________________________________________
* This program uses recursion to output letters in a character array in reverse.
*_______________________________________________________________________________
* INPUT:
*	char array(s) : an array that has letters a-z. 
*	Indice1 and Indice2: numbers specified by the user to reserve in the arrayS
*
* OUTPUT:
*	Specific numbers reversed in the array.
********************************************************************************/


void recursion_reverse(char [], int);
const void print(char alphabet[]);
char reverse(char alphabet[], int indice1, int indice2);

int main()
{
	//DECLARATIONS:
	int size = 27;
	int indice1 = 0;
	int indice2 = 0;

	char alphabet[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };
	char alphabet1[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };
	char alphabet2[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };

	//Getting input from user for two locations:
	cout << "\nEnter the first indice: ";
	cin >> indice1;
	cout << "\nEnter the second indice: ";
	cin >> indice2;
	cout << endl << endl;

	// Prints the first two locations:
	cout << "Printing the array but reversing the letters that were entered: \n";
	reverse(alphabet, indice1, indice2);
	print(alphabet);

	//Gets new info:
	cout << "\n\nPlease enter a new number for indice1: ";
	cin >> indice1;
	cout << "\nPlease enter a new number for indice2: ";
	cin >> indice2;

	//Prints new array with reversed information:
	cout << "Printing new results: \n";
	reverse(alphabet1, indice1, indice2);
	print(alphabet1);

	//Prints the normal array in reverse:
	cout << "\n\nPrinting Backwards Using Recursive:\n";
	recursion_reverse(alphabet2, size);
}

/****************************************************************************
* Recursion_Revserse()
* ___________________________________________________________________________
* This function takes an array from main() and reverses it.
* ___________________________________________________________________________
* Pre-Conditions:
*	An array with specified elements
*
* Post-Conditions:
*	Output of all the array reversed to the console.
*****************************************************************************/

void recursion_reverse(char alphabet[], int size)
{
	static int num = size - 1; //intializes to last element

	if (num < 0)
	{
		num = size - 1;

		cout << endl;

		return;
	}

	cout << alphabet[num] << " ";
	num--;

	recursion_reverse(alphabet, size);

}


/****************************************************************************
* print()
* ___________________________________________________________________________
* This function takes an array from main() and outputs it.
* ___________________________________________________________________________
* Pre-Conditions:
*	An array with specified elements.
*
* Post-Conditions:
*	Output of the array.
*****************************************************************************/

const void print(char alphabet[])
{
	for (int i = 0; i < 26; i++)
	{
		cout << alphabet[i] << " ";
	}

}


/****************************************************************************
* reverse()
* ___________________________________________________________________________
* This function takes an array from main() and reverses, specifically, the
* two specified locations provided by the user
* ___________________________________________________________________________
* Pre-Conditions:
*	An array with specified elements and two numbers given by the user
*
* Post-Conditions:
*	Output of the array but with the locations from indice1 - indice2
*	reversed.
*****************************************************************************/
char reverse(char alphabet[], int indice1, int indice2)
{
	if (indice1 >= indice2)
	{
		return alphabet[0];
	}

	else
	{
		swap(alphabet[indice1], alphabet[indice2]);

		reverse(alphabet, indice1 + 1, indice2 - 1);
	}
}