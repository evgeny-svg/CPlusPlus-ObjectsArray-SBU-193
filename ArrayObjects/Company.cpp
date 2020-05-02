#include "Company.h"
#include <iostream>
using namespace std;

Company::Company(const Employee* employees, size_t size) : _size(size)
{
	_employees = new Employee*[_size];
	for (size_t i = 0; i < _size; i++)
		_employees[i] = new Employee(employees[i]);
}

void Company::printCompany() const
{
	for (size_t i = 0; i < _size; i++)
	{
		cout << " Company's member number " << (i + 1) << ": " << endl;
		_employees[i]->Print();
	}
}

Company::~Company()
{
	for (size_t i = 0; i < _size; i++)
	{
		delete _employees[i];
	}
	delete[] _employees;
}
