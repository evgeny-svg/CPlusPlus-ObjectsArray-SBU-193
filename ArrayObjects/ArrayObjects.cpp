#include <iostream>
#include "Employee.h"
#include "Company.h"

using namespace std;
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
	employee.Print(); //PrintEmployee(employee)
	cout << "Change experience." << endl;
	cout << "Enter new experience: ";
	cin >> experience;
	employee.setExperience(experience);
	cout << "New experience is: " << employee.getExperience() << endl;
	employee.Print();
	Employee em(employee); 
	cout << "New employee: " << endl;
	em.Print(); // PrintEmployee(em)
	em.setExperience(10);
	cout << endl;
	Employee comp[2] = { employee, em };
	Company company(comp, 2);
	cout << "Print Company: " << endl;
	company.printCompany();
	delete[] firstName;
	delete[] lastName;
}

