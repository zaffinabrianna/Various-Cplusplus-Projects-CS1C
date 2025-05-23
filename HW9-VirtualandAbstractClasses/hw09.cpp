/*******************************************************************************
* AUTHOR					: Brianna Zaffina
* ASSIGNMENT				: HW09
* CLASS						: CS1C
* SECTION					: T/TH 1:30 - 3:50pm
* DUE DATE					: 10/12/2023
*******************************************************************************/

#include "Rectangle.h"
#include "Triangle.h"

/*******************************************************************************
*
* Virtual Functions & Abstract Classes
*_______________________________________________________________________________
* This program uses 2 virtual functions to understand the relationship with
* abstract classes.
*_______________________________________________________________________________
* INPUT:
*	Objects of triangle and rectangle and their dimensions.
*
* OUTPUT:
*	Rectangle and Triangles areas and perrimeters outputted to console via
*	the use of virtual functions.
********************************************************************************/

//Function Prototypes:
void printPerimeterRect(Rectangle rectangle1, float base, float height);
void printAreaRect(Rectangle rectangle1, float base, float height);
void printPerimeterTri(Triangle triangle1, float side1, float base);
void printAreaTri(Triangle triangle1, float base, float height);


int main()
{
	//INPUT:
	//Object of rectangle
	Rectangle rectangle1;

	//Object of triangle
	Triangle triangle1;

	float base = 0;
	float height = 0;
	float side1 = 0;

	//PROCESS:
	//Gets dimensions of rectangle
	cout << "Please enter a height and a base for your rectangle: ";
	cout << "\nBase: ";
	cin >> base;
	cout << "Height: ";
	cin >> height;
	
	cout << endl << endl;
	// Calculates rectangles perrimeter and outputs it to console.
	printPerimeterRect(rectangle1, base, height);
	cout << endl << endl;
	// Calculates rectangles area and outputs it to the console
	printAreaRect(rectangle1, base, height);

	//Gets dimensions of triangle
	cout << "\n\nPlease enter side1 of the triangle (assuming it is an isosceles triangle): ";
	cin >> side1;
	cout << "Please enter the base of the triangle: ";
	cin >> base;
	cout << "Please enter the height of the triangle: ";
	cin >> height;

	cout << endl << endl;
	// Calculates triangles perrimeter and outputs it to console
	printPerimeterTri(triangle1, side1, base);
	cout << endl << endl;
	// Calculates triangles area and outputs it to console 
	printAreaTri(triangle1, base, height);

	return 0;
}

//Function to caculate and output rectangles perrimeter:
void printPerimeterRect(Rectangle rectangle1, float base, float height)
{
	cout << "Here is your perrimeter for the rectangle: ";
	cout << rectangle1.calcPerrimeter(base, height);

}

//Function to calculate and output rectangles area:
void printAreaRect(Rectangle rectangle1, float base, float height)
{
	cout << "Here is your area for the rectangle: ";
	cout << rectangle1.calcArea(base, height);
}

//Funtion to calculate and output triangles perrimeter:
void printPerimeterTri(Triangle triangle1, float side1, float base)
{
	cout << "Here is your perrimeter for the triangle: ";
	cout << triangle1.calcPerrimeter(base, side1);
}

//Function to calculate and output triangles area:
void printAreaTri(Triangle triangle1, float base, float height)
{
	cout << "Here is the area of your triangle: ";
	cout << triangle1.calcArea(base, height);

}