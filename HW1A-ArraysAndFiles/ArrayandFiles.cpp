/*******************************************************************************
* AUTHOR:							Brianna Zaffina
* Assigment:						HW1
* CLASS:							CS1C
* SECTION:							TTh: 1:30p - 3:50p
* Due Date:							8/29/2023
********************************************************************************/

#include <iostream>
#include <ctime>
#include <fstream>
using namespace std;

/*******************************************************************************
* 
* SORT ARRAYS & WRITE/READ TEXT FILES
* 
* ______________________________________________________________________________
* This program takes an array with random ints and sorts them. After this it
* writes to a text file and then reads from the text file.
* ______________________________________________________________________________
* INPUT:
*	randomArray[]: The array I will be using in this code. Has 10 elements.
*	temp:		   A temporary variable to help sort the array.
*
* OUTPUT:
*	The output will consist of the normal array w/o sorting, the array with 
*	sorting, the info in a text file, and the info read from a text file.
* *****************************************************************************/

//Function prototype
void readFile();

int main()
{
	//Class heading:
	
	cout << "************************************************************\n";
	cout << "		Programmed By: Brianna Zaffina\n";
	cout << "		CS1C		  : TTh 1:30p - 3:50p\n";
	cout << "		Assignment   : HW1\n";
	cout << "************************************************************\n";

	//Input:
	int randomArray[10] = { 15, 203, 7, 9, 77, 8, 900, 76, 5, 11 }; // INPUT - Array stored with random information
	int temp = 0;								// INPUT - A temporary variable to sort the array.
	
	
	//Process:
	cout << "Before sorting: " << endl;
	for (int i = 0; i < 10; i++) // A loop to output all the orginal array info.
	{
		cout << randomArray[i] << " "; 
	}


	for (int i = 0; i < 10; i++) // A loop to sort the array
	{
		for (int j = i + 1; j < 10; j++)
		{
			if (randomArray[j] < randomArray[i]) // If the item after element i is greater than j, then swap.
			{
				// Swapping elements to sort the area from low - high
				temp = randomArray[i];
				randomArray[i] = randomArray[j];
				randomArray[j] = temp;
			}
		}

	}

	// Output:
	cout << "\n\nAfter sorting: " << endl;
	
	for (int i = 0; i < 10; i++) // To output the sorted array
	{
		cout << randomArray[i] << " ";
	}

	ofstream myFile("Numbers.txt"); //Opens the text file for writing.
	if (myFile.is_open())
	{
		for (int i = 0; i < 10; i++) //For loop to write information to text file.
		{
			myFile << randomArray[i] << endl;
		}

		cout << "\n\nWriting to file complete." << endl;

		myFile.close();
	}

	else
	{
		cout << "\n\nFile error" << endl;
	}

	cout << "\n\nNow I will read from the text file into a new array and print that new array: " << endl;
	// Function to read text file and output its information.
	readFile(); 

	return 0;
}

// Function to read txt file information and put it into an array.
void readFile() 
{
	int newArray[10]; // INPUT - New array to read the file information

	ifstream myFile("Numbers.txt"); //Opens the text file for reading.
	if (myFile.is_open())
	{
		for (int i = 0; i < 10; i++) //Puts text file info into the new array.
		{
			myFile >> newArray[i]; 
		}
	}


	//OUTPUT:
	cout << "\nNew Array Info:" << endl;

	for (int i = 0; i < 10; i++) //Outputs all the new info from the file to the console via the array. 
	{
		cout << newArray[i] << " ";
	}
}