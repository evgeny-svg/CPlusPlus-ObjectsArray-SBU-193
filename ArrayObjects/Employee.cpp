#include "Employee.h"
#include <iostream>
using namespace std;
size_t strlen(const char* string)
{
	size_t size = 0;
	while(*string)
	{
		size++;
		string++;
	}
	return size;
}
void Employee::strcpy(char* newString, const char* oldString)
{
	size_t size = strlen(oldString);
	for (int i = 0; i < size; i++)
		newString[i] = oldString[i];
	newString[size] = '\0';
}
Employee::Employee(const char* firstName, const char* lastName, unsigned short int experience) : experience(experience)
{
	this->firstName = new char[strlen(firstName)+1];
	strcpy(this->firstName, firstName);
	this->lastName = new char[strlen(lastName)+1];
	strcpy(this->lastName, lastName);
}

Employee::Employee(const Employee& employee)
{
	experience = employee.experience;
	firstName = new char[strlen(employee.firstName) + 1];
	strcpy(firstName, employee.firstName);
	lastName = new char[strlen(employee.lastName) + 1];
	strcpy(lastName, employee.lastName);
}

const char* Employee::getFirstName() const
{
	return firstName;
}
const char* Employee::getLastName() const
{
	return lastName;
}
unsigned short int Employee::getExperience() const
{
	return experience;
}
void Employee::setExperience(int experience)
{
	this->experience = experience;
}
Employee::~Employee()
{
	delete[] firstName;
	delete[] lastName;
}
void Employee::Print() const
{
	cout << "Firstname: " << getFirstName() << endl;
	cout << "Lastname: " << getLastName() << endl;
	cout << "Experience: " << getExperience() << endl;
}