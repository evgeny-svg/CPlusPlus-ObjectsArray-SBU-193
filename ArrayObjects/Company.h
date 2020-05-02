#pragma once
#include"Employee.h"
class Company
{
	Employee** _employees;
	size_t _size;

public:
	Company(const Employee *employees, size_t size);
	void printCompany() const;
	~Company();
};

