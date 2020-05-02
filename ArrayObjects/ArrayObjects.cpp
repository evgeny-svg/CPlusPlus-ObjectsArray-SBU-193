#include <iostream>
#include "Employee.h"
using namespace std;
void PrintEmployee(const Employee& employee)
{
	cout << "Firstname: " << employee.getFirstName() << endl;
	cout << "Lastname: " << employee.getLastName() << endl;
	cout << "Experience: " << employee.getExperience() << endl;
}
int main()
{
	char* firstName = new char[255];
	cout << "Enter firstname: ";
	cin >> firstName;
	char* lastName = new char[255];
	cout << "Enter lastname: ";
	cin >> lastName;
	unsigned short int experience;
	cout << "Enter experience: ";
	cin >> experience;
	Employee employee(firstName, lastName, experience);
	PrintEmployee(employee);
	cout << "Change experience." << endl;
	cout << "Enter new experience: ";
	cin >> experience;
	employee.setExperience(experience);
	cout << "New experience is: " << employee.getExperience() << endl;
	PrintEmployee(employee);
	delete[] firstName;
	delete[] lastName;
}

