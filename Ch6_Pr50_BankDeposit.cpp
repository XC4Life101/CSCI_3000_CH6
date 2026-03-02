#include <iostream>
using namespace std;

struct bank_account {
	int acc_num;
	int balance;
};

void deposit(bank_account &acc_ref, int ammount) {
	acc_ref.balance += ammount;

	cout << "\nBalance inside function (reference): " << acc_ref.balance;
}

int main()
{
	bank_account acc_ref;
	int ammount;

	cout << "Insert Account Number: ";
	cin >> acc_ref.acc_num;
	cout << "Insert Balance: ";
	cin >> acc_ref.balance;
	cout << "Insert ammount being deposited: ";
	cin >> ammount;

	cout << "\n\nBalance before call: " << acc_ref.balance;

	deposit(acc_ref, ammount);

	cout << "\nBalance after call: " << acc_ref.balance << endl;

	return 0;
}
