#pragma once
#include "Shape.h"

class Triangle : Shape
{
private:

public:
	~Triangle();

	//virtual functions: 
	float calcPerrimeter(float base, float height);
	float calcArea(float base, float height);

};