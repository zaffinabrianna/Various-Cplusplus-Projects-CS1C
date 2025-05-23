/*******************************************************************************
* AUTHOR:							Brianna Zaffina
* Assigment:						HW1
* CLASS:							CS1C
* SECTION:							TTh: 1:30p - 3:50p
* Due Date:							8/29/2023
********************************************************************************/

#include <iostream>
#include <ctime>
using namespace std;

/*******************************************************************************
*
* USE A THREE-DIGIT INTEGER AND SUM THE DIGITS, TRIPLE THE #, AND REVERSE THE
* DIGITS.
*
* ______________________________________________________________________________
* This program uses srand() to randomize a three digit number. After this,
* it uses functins to sum the digits, triple the orginal number, and to
* reverse the digits.
* ______________________________________________________________________________
* INPUT:
*	randomNumber: A randomized three digit integer
*
* OUTPUT:
*	The output will consist of the sum of the three digits, the number tripled,
*	and the digits in reversed order.
* *****************************************************************************/

void sumTheDigits(int);
void tripleTheNumber(int);
void reverseTheDigits(int);

int main()
{
	//Class heading:

	cout << "************************************************************\n";
	cout << "		Programmed By: Brianna Zaffina\n";
	cout << "		CS1C		  : TTh 1:30p - 3:50p\n";
	cout << "		Assignment   : HW1\n";
	cout << "************************************************************\n";

	int random_number = 0; // INPUT - The interger that is going to be randomized
	srand(time(0));

	random_number = rand() % 900 + 100; //Generates random three-digit integer.

	cout << "Your random number is: " << random_number;
	// Function to sum each digit
	sumTheDigits(random_number);
	// Function to triple the randomized number
	tripleTheNumber(random_number);
	// Function to reverse the digits
	reverseTheDigits(random_number);

	return 0;
}

void sumTheDigits(int randomNum)
{
	int digit = 0; // INPUT - Each individual digit
	int sum = 0;  // INPUT - The total of each individual digit added together.

	while (randomNum > 0)
	{
		digit = randomNum % 10; 
		sum = sum + digit;

		randomNum = randomNum / 10;

	}

	cout << "\nThe sum of the random digits is: " << sum; // Outputs the sum of the three digits.
}

void tripleTheNumber(int randomNum)
{
	int total = 0; // INPUT - The total after the random number is tripled.
	total = randomNum * 3;

	cout << "\nThe random number tripled is: " << total;
}

void reverseTheDigits(int randomNum)
{
	int digit = 0; // INPUT - the digits are saved and then put into the reversed num
	int reversedNum = 0; // INPUT - Digits are enteered here in opposite order 

	while (randomNum != 0) 
	{
		digit = randomNum % 10;
		reversedNum = reversedNum * 10 + digit;
		randomNum /= 10;
	}

	cout << "\nThe reverse of the digits are: " << reversedNum; // Outputs the oppoiste order of the digits.
}