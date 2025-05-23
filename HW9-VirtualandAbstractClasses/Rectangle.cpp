#include "Rectangle.h"

// Redefined virtual functions:
float Rectangle::calcPerrimeter(float base, float height)
{
	float perrimeter = 0;

	perrimeter = (base * 2) + (height * 2);
	
	return perrimeter;
}

float Rectangle::calcArea(float base, float height)
{
	float area = 0;

	area = base * height;

	return area;
}


