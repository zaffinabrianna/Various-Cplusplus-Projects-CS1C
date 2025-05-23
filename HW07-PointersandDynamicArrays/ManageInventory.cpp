#include "ManageInventory.h"

// Uses the dynamic delete operator:
ManageInventory::~ManageInventory()
{
	delete [] p_pInventoryItems;
}

/****************************************************************************
* addItem()
* ___________________________________________________________________________
* This function adds an item to the dynamic array 
* ___________________________________________________________________________
* Pre-Conditions:
*	Information entered for each variable.
*
* Post-Conditions:
*	A new object is created and entered into the dynamic array.
*****************************************************************************/
void ManageInventory::addItem(string itemName, int quantity, double price)
{
	p_pInventoryItems[count++] = new Item{ itemName, quantity, price };
}

/****************************************************************************
* printInventory()
* ___________________________________________________________________________
* This function displays all of the inventory information.
* ___________________________________________________________________________
* Pre-Conditions:
*	Information entered for each variable and object.
*
* Post-Conditions:
*	Output of all the information is outputted to the console
*****************************************************************************/
void ManageInventory::printInventory()
{
	cout << p_pInventoryItems[0]->itemName << endl;
	cout << p_pInventoryItems[0]->price << endl;
	cout << p_pInventoryItems[0]->quantity << endl;
	cout << endl << endl;
	cout << p_pInventoryItems[1]->itemName << endl;
	cout << p_pInventoryItems[1]->price << endl;
	cout << p_pInventoryItems[1]->quantity << endl;
	cout << endl << endl;
	cout << p_pInventoryItems[2]->itemName << endl;
	cout << p_pInventoryItems[2]->price << endl;
	cout << p_pInventoryItems[2]->quantity << endl;
	cout << endl << endl;
	cout << p_pInventoryItems[3]->itemName << endl;
	cout << p_pInventoryItems[3]->price << endl;
	cout << p_pInventoryItems[3]->quantity << endl;
	cout << endl << endl;
	cout << p_pInventoryItems[4]->itemName << endl;
	cout << p_pInventoryItems[4]->price << endl;
	cout << p_pInventoryItems[4]->quantity << endl;
}

/****************************************************************************
* addTotal()
* ___________________________________________________________________________
* This function adds the total of each item.
* ___________________________________________________________________________
* Pre-Conditions:
*	Information entered for each variable and object.
*
* Post-Conditions:
*	A number with the total of all the items in the list.
*****************************************************************************/

double ManageInventory::addTotal(ManageInventory mark)
{
	double total = 0.0;

	for (int i = 0; i < count; i++)
	{
		total = total + (mark.p_pInventoryItems[i]->price * mark.p_pInventoryItems[i]->quantity);
	}

	return total;
}

//Copy Constructor:
ManageInventory::ManageInventory(ManageInventory& inventory)
{
	size = inventory.size;
	count = inventory.count;
	p_pInventoryItems = inventory.p_pInventoryItems;
}

//Overloaded subtraction operator:
Item ManageInventory::operator -(Item item)
{

	return item;
}

//func purch item 
/* enter name and amount
*/