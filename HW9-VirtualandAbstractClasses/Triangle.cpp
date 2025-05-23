#include "Triangle.h"

Triangle::~Triangle()
{

}

// Redefined virtual functions:
float Triangle::calcPerrimeter(float base, float height)
{
	float perrimeter = 0;
	
	perrimeter = base + (height * 2);

	return perrimeter; 
}
float Triangle::calcArea(float base, float height)
{
	float area = 0;

	area = 0.5 * (base * height);

	return area;
}

