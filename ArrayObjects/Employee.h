#pragma once
class Employee
{
	char* firstName;
	char* lastName;
	unsigned short int experience;
	void strcpy(char* newString, const char* oldString);
public:
	Employee(const char* firstName, const char* lastName, unsigned short int experience);
	const char* getFirstName() const;
	const char* getLastName() const;
	unsigned short int getExperience() const;
	void setExperience(int experience);
	~Employee();
};

