#pragma once
#include "Shape.h"

class Rectangle : Shape
{
private:

public:
	~Rectangle() {};

	// virtual functions:
	float calcPerrimeter(float base, float height);
	float calcArea(float base, float height);

};