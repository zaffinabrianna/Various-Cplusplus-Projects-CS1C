/*******************************************************************************
* AUTHOR					: Brianna Zaffina
* ASSIGNMENT				: HW03
* CLASS						: CS1C
* SECTION					: T/TH 1:30 - 3:50pm
* DUE DATE					: 9/12/2023
*******************************************************************************/

#include "Employee.h"
#include "Programmer.h"
#include "SoftwareArhitect.h"

/*******************************************************************************
*
* CLASS INTERFACES, INHERITENCE, & COMPOSITION
*_______________________________________________________________________________
* This program uses several classes and uses inheritence.
********************************************************************************/	

int main()
{
	//Employee Info:
	cout << "INFO FOR A CS1CEmployee: " << endl;
	Employee employee0; //Default
	Date hireDate1(8, 31, 2014); //Sets date
	Employee employee1("Jimmy Fallon", 12345, "949-555-1234", 40, 'M', "Comedian", 100000, hireDate1); //Creates an object of employee

	// Displays the default and intilaized objects:
	employee0.displayEmployeeInfo();
	employee1.displayEmployeeInfo();

	cout << "This is me changing the info for Jimmy Fallon: " << endl;
	employee1.setEmployeeAge(100); //Changes employee age of employee1 to 100
	employee1.displayEmployeeInfo(); //Displays

	//Programming Info:
	cout << "\n\nINFO FOR A PROGRAMMING EMPLOYEE: " << endl;
	Programmer programmer0; //Default
	Date hireDateProgrammer1(12, 24, 2011); //Sets date
	Programmer programmer1(5432122, "Joe Boss", 4, true, false, "Sam Software", 54321, "819-123-4567", 21, 'M', "Programmer", 223000, hireDateProgrammer1); //Creates an object of programmer

	//Displays the default and intliazed objects:
	programmer0.displayEmployeeInfo();
	programmer1.displayEmployeeInfo();

	cout << "This is me changing the info for Sam Software: " << endl;
	programmer1.setJavaIdentifier(true); //Changes the java identifier from false to true.
	programmer1.displayEmployeeInfo(); //Displays new info

	//Software Architect Info:
	cout << "\n\nINFO FOR A SOFTWARE ARCHITECT EMPLOYEE: " << endl;
	SoftwareArchitect softwareArchitect0; //Default
	Date hireDateSofArch1(12, 24, 2009); //Sets date
	SoftwareArchitect softwareArchitect1(5434222, "Big Boss", 5, 4, "Alex Arch", 888888, "819-123-4444", 31, 'M', "Architect", 323000, hireDateSofArch1); //Creates an object of Architect Soft.

	//Displays default and intalized info:
	softwareArchitect0.displayEmployeeInfo();
	softwareArchitect1.displayEmployeeInfo();

	cout << "This is me changing the info for Alex Arch: " << endl;
	softwareArchitect1.setYearsExperienceinSoftwareProj(100); //Changes years of expeience from arhitect1 to 100 years.
	softwareArchitect1.displayEmployeeInfo(); //Displays

	return 0;
}
