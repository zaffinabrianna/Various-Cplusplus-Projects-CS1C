/*******************************************************************************
* AUTHOR					: Brianna Zaffina
* ASSIGNMENT				: HW04
* CLASS						: CS1C
* SECTION					: T/TH 1:30 - 3:50pm
* DUE DATE					: 9/14/2023
*******************************************************************************/

#include "Employee.h"
#include "Programmer.h"
#include "SoftwareArhitect.h"

/*******************************************************************************
*
* OPERATOR OVERLOADING & FRIEND FUNCTIONS
*_______________________________________________________________________________
* This program uses HW03 to show how overloaded operators work and friend 
* functions.
********************************************************************************/

//Friend function prototype:
bool areEqual(Employee &employee1, Programmer &progammer1);

//Main
int main()
{
	int ranNum = 0;
	cout << "INFO FOR A CS1CEmployee: " << endl;

	//Employee Objects:
	Employee employee0;
	Employee employee1("Jimmy Fallon", 12345, "949-555-1234", 40, 'M', "Comedian", 100000, "8/31/2014");
	Programmer programmer1(5432122, "Joe Boss", 4, true, false, "Sam Software", 54321, "819-123-4567", 21, 'M', "Programmer", 223000, "12/24/2011");
	Employee employee2;

	// Displays the info for these objects:
	programmer1.displayEmployeeInfo();
	cout << endl;
	employee0.displayEmployeeInfo();
	cout << endl;
	employee1.displayEmployeeInfo();

	// USING FRIEND FUCNTION:
	cout << "\n\nProgrammer 1 and Employee 1 being compared:";
	if (areEqual(employee1, programmer1)) 
	{
		cout << "\nThe phone numbers are equal.\n";
	}

	else
	{
		cout << "\nThe phone numbers are NOT equal.\n";
	}

	// Sets programmer1 with a new phone number
	programmer1.setEmployeePhoneNum("949-555-1234");
	cout << "\nThis is AFTER the phone number for programmer1 has been changed:";

	if (areEqual(employee1, programmer1))
	{
		cout << "\nThe phone numbers are equal.\n";
	}

	else
	{
		cout << "\nThe phone numbers are NOT equal.\n";
	}

	// ======================================================================================== 
	// USING OVERLOADED == OPERATOR:

	cout << "\nEmployee0 and Employee 1 being compared:\n";

	if (employee0 == employee1)
	{
		cout << "The phone numbers are equal.\n";
	}
	else
	{
		cout << "The phone numbers are NOT equal.\n";
	}
	
	cout << "\nThis is AFTER the phone number for employee0 has been changed:\n";

	employee0.setEmployeePhoneNum("949-555-1234");

	if (employee0 == employee1)
	{
		cout << "The phone numbers are equal.\n";
	}
	else
	{
		cout << "The phone numbers are NOT equal.\n";
	}

	//=============================================================================================
	// USING OVERLOADED + OPERATORS:

	cout << "\n\nThis is me adding a number to the age of Employee1: " << endl;
	cout << "Please enter a random number: ";
	cin >> ranNum;
	cout << "\nThe new age is: " << employee1.addOne(employee1, ranNum);
	cout << "\nAmount of years added: " << ranNum;

	cout << "\n\nThis is using an overloaded operator to add 2:\n";
	employee1 + 2;
	cout << "New Employee Age: " << employee1.getEmployeeAge();
	
	// ==========================================================================================
	// USING OVERLOADED >> and << OPERATORS:

	cin >> employee2;
	
	cout << endl << endl;

	cout << employee2;

	// ======================================================================================
	// EC (USING OVERLOADED i++ and ++i OPERATORS:
	
	cout << "\n\nUsing pre and post operations on employee age (EC) \n";
	cout << "\nOrginal age for employee1: " << employee1.getEmployeeAge() << "\n";
	++employee1;
	cout << "The new age pre incremented is: " << employee1.getEmployeeAge();
	employee1++;
	cout << "\nThe new age post incremented is: " << employee1.getEmployeeAge();
}

//Friend function defintion:
bool areEqual(Employee &employee1, Programmer &programmer1)
{
	return ((employee1.getEmployeePhoneNum() == programmer1.employeePhoneNum));
}