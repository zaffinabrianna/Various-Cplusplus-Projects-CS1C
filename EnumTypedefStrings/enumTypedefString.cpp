/*******************************************************************************
* AUTHOR:							Brianna Zaffina
* Assigment:						HW1
* CLASS:							CS1C
* SECTION:							TTh: 1:30p - 3:50p
* Due Date:							8/29/2023
********************************************************************************/

#include <iostream>
#include <string>
using namespace std;

/*******************************************************************************
*
* USE ENUM, TYPEDEF, AND STRING
*
* ______________________________________________________________________________
* This program uses enum, typedef, and string, and demonstrates it to the 
* console.
* ______________________________________________________________________________
* INPUT:
*	aReallyBasicInt: A rename for integer. Used to explain typedef.
*	yourName:		 A string meant to demonstrate the use of string
*
* OUTPUT:
*	The output will consist of the comparison of the enums ORANGE and RED, 
*	the result of a typedef situation, and the result of a string input
*	and output.
* *****************************************************************************/

// Enum
enum color { RED, ORANGE, YELLOW, GREEN, BLUE, PURPLE };

int main()
{
	//Class heading:

	cout << "************************************************************\n";
	cout << "		Programmed By: Brianna Zaffina\n";
	cout << "		CS1C		  : TTh 1:30p - 3:50p\n";
	cout << "		Assignment   : HW1\n";
	cout << "************************************************************\n";
	
	//Using ENUM
	cout << "Orange is greater than Red in the enum \"Color\"" << endl;
	if (ORANGE > RED) // Compares the Enum ORANGE to RED
	{
		cout << "\nThis is true" << endl; //Outputs this to console if orange is greater than red
	}
	else
	{
		cout << "\nThis is NOT true" << endl; //Outputs if this is not true.
	}

	// Using Typedef.
	cout << "\n\nNow I will use typedef: \n";
	typedef int aReallyBasicInt; //Typedef for an integer
	aReallyBasicInt input = 0; // Creation of a variable using typedef.
	cout << "Give me an integer: ";
	cin >> input; // Input for an integer
	cout << "\nThis was entered using a typedef: " << input << endl; //Outputs the integer

	// Using String
	cout << "\n\nNow I will use a string: \n";
	string yourName = " "; // Creation of a string variable
	cout << "Enter your name and I will output it to the console: ";
	cin.ignore(); // Ingores the space after the previous statement with typedef
	getline(cin, yourName); // The "cin" version for string. Gets the string from the user.
	cout << "\nYour name is: " << yourName << endl; // Outputs the users input.


	return 0;
}