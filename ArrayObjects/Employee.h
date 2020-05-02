#pragma once
class Employee
{
	char* firstName;
	char* lastName;
	unsigned short int experience;
	void strcpy(char* newString, const char* oldString);
public:
	Employee(const char* firstName, const char* lastName, unsigned short int experience);
	Employee(const Employee& employee);
	const char* getFirstName() const;
	const char* getLastName() const;
	unsigned short int getExperience() const;
	void setExperience(int experience);
	void Print() const;
	~Employee();
};

