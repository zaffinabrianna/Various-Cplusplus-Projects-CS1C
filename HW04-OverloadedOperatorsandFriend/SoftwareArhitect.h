#pragma once

#include "Employee.h" 

class SoftwareArchitect : public Employee
{
private:
	int departmentNum;
	string supervisorName;
	float percentLastSalaryIncrease;
	float yearsExperienceinSoftwareProj;	


public:
	SoftwareArchitect();
	SoftwareArchitect(int departmentNum, string supervisorName, float percentLastSalaryIncrease, float yearsExperienceinSoftwareProj, string employeeName, int employeeID, string employeePhoneNum, int employeeAge, char employeeGender, string employeeJobTitle, float employeeSalary, string employeeHireDate);

	~SoftwareArchitect();

	void setDepartmentNum(int departmentNum);
	void setSupervisorName(string supervisorName);
	void setPercentLastSalaryIncrease(float percentLastSalaryIncrease);
	void setYearsExperienceinSoftwareProj(float yearsExperienceinSoftwareProj);

	void displayEmployeeInfo();
};