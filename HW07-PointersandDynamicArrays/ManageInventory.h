#pragma once
#include "iostream"
#include "string"
using namespace std;

struct Item
{
	string itemName;
	int quantity;
	double price;
};

const int MAX_SIZE = 50;

class ManageInventory
{
private:
	int size{ MAX_SIZE };
	int count;
	//Dynamic Array:
	Item** p_pInventoryItems;

public:
	ManageInventory() : count{ 0 }, p_pInventoryItems{ new Item * [size] } {}
	ManageInventory(int size) : size{ size }, count{ 0 }, p_pInventoryItems{ new Item * [size] } {}
	~ManageInventory();
	//Function to add an item to the list:
	void addItem(string itemName, int quantity, double price);
	//Function to print the list:
	void printInventory();

	// Function that adds the total for the total cost of items:
	double addTotal(ManageInventory mark);

	//Copy Constructor:
	ManageInventory(ManageInventory& inventory);

	//Overloaded operator to update the list:
	Item operator -(Item item);
};