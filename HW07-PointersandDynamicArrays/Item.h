#pragma once
#include <iostream>
#include <string>
using namespace std;

class Item
{
private:
	float price;
	int quantity;
	string itemName;

public:
	Item();
	Item(float price, int quantity, string itemName);
	~Item();

	void setPrice(float price);
	void setItemName(string itemName);
	void setQuantity(int quantity);

	const float getPrice(float price);
	const string getItemName(string itemName);
	const int getQuantity(int quantity);
};