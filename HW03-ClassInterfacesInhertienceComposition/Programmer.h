#pragma once

#include "Employee.h" 

class Programmer : public Employee //Inherits Employee
{
private:
	int departmentNum;
	string supervisorName;
	float percentLastSalaryIncrease;
	bool cPlusPlusIdentifier;
	bool javaIdentifier;

public:
	Programmer();
	Programmer(int departmentNum, string supervisorName, float percentLastSalaryIncrease, bool cPlusPlusIdentifier, bool javaIdentifier, string employeeName, int employeeID, string employeePhoneNum, int employeeAge, char employeeGender, string employeeJobTitle, float employeeSalary, Date employeeHireDate);

	~Programmer();

	void setDepartmentNum(int departmentNum);
	void setSupervisorName(string supervisorName);
	void setPercentLastSalaryIncrease(float percentLastSalaryIncrease);
	void setCPlusPlusIndentifier(bool cPlusPlusIdentifier);
	void setJavaIdentifier(bool javaIdentifier);

	//Takes the virtual function from employee and changes it up
	const void displayEmployeeInfo();
};
