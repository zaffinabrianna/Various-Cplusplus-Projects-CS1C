/*******************************************************************************
* AUTHOR					: Brianna Zaffina
* ASSIGNMENT				: HW09
* CLASS						: CS1C
* SECTION					: T/TH 1:30 - 3:50pm
* DUE DATE					: 10/12/2023
*******************************************************************************/

#include "ManageInventory.h"
using namespace std;

/*******************************************************************************
*
* Pointers and Dynamic Arrays
*_______________________________________________________________________________
* This program uses Dynamic Arrays to update an inventory at a store and to 
* calculate the total of all items Mark wants.
*_______________________________________________________________________________
* INPUT:
*	Item Name, item quantity, double price, double total. These items are passed 
*	into objects.
*
* OUTPUT:
*	The total cost of all Mark's items and an updated inventory with the items
*	Mark bought. 
********************************************************************************/

int main()
{
	string itemName = " ";
	int quantity = 0;
	double price;
	double total;

	char yorn = 'N';

	//Object Intializer:
	ManageInventory inventory;

	//Stores all these items in inventory:
	inventory.addItem("Nike Basketball Shoes", 22, 145.99);
	inventory.addItem("Under Armor T-Shirt", 33, 29.99);
	inventory.addItem("Brooks Running Shoes", 11, 111.44);
	inventory.addItem("Asics Running Shoes", 20, 165.88);
	inventory.addItem("Nike Shorts", 77, 45.77);
	
	//Prints the inventory:
	inventory.printInventory();

	//Makes a new inventory to minus from the orginal inventory:
	ManageInventory markInventory;

	//CIN for all necessary data:
	cout << "\n\nEnter the exact name of the item you want: ";
	getline(cin, itemName);
	cout << "\nEnter the price of this item: ";
	cin >> price;
	cout << "\nEnter the quantity of this item you want: ";
	cin >> quantity;

	//Adds these items to marks inventory:
	markInventory.addItem(itemName, quantity, price);
	
	//Do-While loop for adding more info:
	cout << "\nWould you like to add more? Y or N: ";
	cin >> yorn;
	yorn = toupper(yorn);

	if (yorn == 'Y')
	{
		do
		{
			cout << "\n\nEnter the exact name of the item you want: ";
			getline(cin, itemName);
			cout << "\nEnter the price of this item: ";
			cin >> price;
			cout << "\nEnter the quantity of this item you want: ";
			cin >> quantity;

			markInventory.addItem(itemName, quantity, price);

			cout << "\nWould you like to add more? Y or N: ";
			cin >> yorn;
			yorn = toupper(yorn);

		} while (yorn != 'N');
	}

	//Prits Inventory:
	cout << "Regualar Inv: \n";
	inventory.printInventory();

	//Copy constrcutor and Print:
	cout << "Copy Inv: \n";
	ManageInventory invCopy(inventory);
	invCopy.printInventory();

	// total cost of marks inventory;
	total = markInventory.addTotal(markInventory);

	//Outputs the total:
	cout << "\nThe total amount for your items is BEFORE tax: $" << total;
	cout << "\nThe total amount for your items AFTER tax: $" << total + (total * .0825);
	
	return 0;
}

/* add user defined namespace to wrap classes include all test cases ... add inventory
items and make purchases missing*/ 