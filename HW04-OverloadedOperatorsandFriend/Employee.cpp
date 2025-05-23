#include "Employee.h"

Employee::Employee()
{
	employeeName = " ";
	employeeID = 0;
	employeePhoneNum = " ";
	employeeAge = 0;
	employeeGender = ' ';
	employeeJobTitle = " ";
	employeeSalary = 0.0;
	employeeHireDate = " ";
}

Employee::Employee(string employeeName, int employeeID, string employeePhoneNum, int employeeAge, char employeeGender, string employeeJobTitle, float employeeSalary, string employeeHireDate)
{
	this->employeeName = employeeName;
	this->employeeID = employeeID;
	this->employeePhoneNum = employeePhoneNum;
	this->employeeAge = employeeAge;
	this->employeeGender = employeeGender;
	this->employeeJobTitle = employeeJobTitle;
	this->employeeSalary = employeeSalary;
	this->employeeHireDate = employeeHireDate;
}

Employee::~Employee()
{

}

void Employee::setEmployeeName(string employeeName)
{
	this->employeeName = employeeName;
}
void Employee::setEmployeeID(int employeeID)
{
	this->employeeID = employeeID;
}
void Employee::setEmployeePhoneNum(string employeePhoneNum)
{
	this->employeePhoneNum = employeePhoneNum;
}
void Employee::setEmployeeAge(int employeeAge)
{
	this->employeeAge = employeeAge;
}
void Employee::setEmployeeGender(char employeeGender)
{
	this->employeeGender = employeeGender;
}
void Employee::setEmployeeJobTitle(string employeeJobTitle)
{
	this->employeeJobTitle = employeeJobTitle;
}
void Employee::setEmployeeSalary(float employeeSalary)
{
	this->employeeSalary = employeeSalary;
}
void Employee::setEmployeeHireDate(string employeeHireDate)
{
	this->employeeHireDate = employeeHireDate;
}

void Employee::displayEmployeeInfo()
{
	cout << "Name: " << employeeName << endl;
	cout << "Employee ID: " << employeeID << endl;
	cout << "Phone: " << employeePhoneNum << endl;
	cout << "Age: " << employeeAge << endl;
	cout << "Gender: " << employeeGender << endl;
	cout << "Job Title: " << employeeJobTitle << endl;
	cout << "Salary: " << employeeSalary << endl;
	cout << "Hire Date: " << employeeHireDate << endl;
}

//STUFF FOR HW04:
//This overloads the == operator and knows what is on the left side 
bool Employee::operator ==(Employee& numOnRight)
{
	return employeePhoneNum == numOnRight.employeePhoneNum;
}

//This is a function to add a random number, inputted by user, to the employeeAge
int Employee::addOne(Employee employee1, int ranNum)
{
	return employee1.employeeAge + ranNum;
}

//This overloads the + operator to add whatever number is specified in main to employeeage:
int Employee::operator +(int num)
{
	return employeeAge += num;
}

//Overloads the >> operator and uses "input" instead of "cin"
istream& operator >>(istream& input, Employee& employee2)
{
	cout << "\nEnter the employees Name: ";
	input >> employee2.employeeName;
	cout << "\nEnter the employees ID: ";
	input >> employee2.employeeID;
	cout << "\nEnter the employees Phone: ";
	input >> employee2.employeePhoneNum;
	cout << "\nEnter the employees age: ";
	input >> employee2.employeeAge;
	cout << "\nEnter the employees Gender: ";
	input >> employee2.employeeGender;
	cout << "\nEnter the employees Job Title: ";
	input >> employee2.employeeJobTitle;
	cout << "\nEnter the employees Salary: ";
	input >> employee2.employeeSalary;
	cout << "\Enter the employees Hire Date: ";
	input >> employee2.employeeHireDate; 

	return input;
}

//Overlaods the << operator and uses "output" instead of cout
ostream& operator <<(ostream& output, Employee& employee2)
{
	output << "Name: " << employee2.employeeName << endl;
	output << "Employee ID: " << employee2.employeeID << endl;
	output << "Phone: " << employee2.employeePhoneNum << endl;
	output << "Age: " << employee2.employeeAge << endl;
	output << "Gender: " << employee2.employeeGender << endl;
	output << "Job Title: " << employee2.employeeJobTitle << endl;
	output << "Salary: $" << employee2.employeeSalary << endl;
	output << "Hire Date: " << employee2.employeeHireDate << endl;

	return output;
}

//EXTRA CREDIT: 

//overloads the ++i operator.
Employee Employee::operator ++()
{
	++employeeAge;

	return *this;
}

//overloads the i++ operator
Employee Employee::operator ++(int)
{
	employeeAge++;

	return *this;
}