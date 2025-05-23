#include "Item.h"

Item::Item()
{
	price = 0;
	quantity = 0;
	itemName = " ";
}

Item::Item(float price, int quantity, string itemName)
{
	this->price = price;
	this->quantity = quantity;
	this->itemName = itemName;
}

Item::~Item()
{

}

void Item::setPrice(float price)
{
	this->price = price;
}

void Item::setItemName(string itemName)
{
	this->itemName = itemName;
}

void Item::setQuantity(int quantity)
{
	this->quantity = quantity;
}

const float Item::getPrice(float price)
{
	return price;
}

const string Item::getItemName(string itemName)
{
	return itemName;
}

const int Item::getQuantity(int quantity)
{
	return quantity;
}