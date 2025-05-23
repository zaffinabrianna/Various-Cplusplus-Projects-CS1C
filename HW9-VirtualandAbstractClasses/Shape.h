#pragma once
#include <iostream>
using namespace std;

class Shape
{
private:
	float base;
	float height;

public:
	Shape();
	Shape(float base, float height);
	~Shape();

	//pure virtual functions, parent class can NOT define these functions:
	virtual float calcPerrimeter(float base, float height) = 0;
	virtual float calcArea(float base, float height) = 0;

};