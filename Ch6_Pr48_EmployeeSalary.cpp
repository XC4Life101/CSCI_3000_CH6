#include <iostream>
using namespace std;

struct employee_record {
	int employee_id;
	int salary;
};

void increase_salary(employee_record employee_copy, int bonus_ammount);

int main()
{
	employee_record employee_main;
	int bonus;
	cout << "Employee Salary Records\n";

	cout << "\nEnter ID: ";
	cin >> employee_main.employee_id;
	cout << "\nEnter Salary: ";
	cin >> employee_main.salary;
	cout << "\nEnter Bonus: ";
	cin >> bonus;

	cout << "\nBefore function call (main): " << employee_main.salary;

	increase_salary(employee_main, bonus);

	cout << "\nAfter function call (main): " << employee_main.salary << endl;

	return 0;
}

void increase_salary(employee_record employee_copy, int bonus_ammount) {

	employee_copy.salary += bonus_ammount;

	cout << "\nInside Function (copy)" << employee_copy.salary;
};
