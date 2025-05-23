#include "Shape.h"

Shape::Shape()
{
	base = 0;
	height = 0;
}

Shape::Shape(float base, float height)
{
	this->base = base;
	this->height = height;
}

Shape::~Shape()
{

}
