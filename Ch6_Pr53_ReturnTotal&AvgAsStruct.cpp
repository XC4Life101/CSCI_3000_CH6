#include <iostream>
using namespace std;

struct result {
	int total;
	float avg;
};

result calculate(int mark1, int mark2, int mark3) {
	result example;
	example.total = mark1 + mark2 + mark3;
	example.avg = example.total / 3.0;

	return example;
}

int main()
{
	int mark1, mark2, mark3;

	cin >> mark1 >> mark2 >> mark3;

	result pmain = calculate(mark1, mark2, mark3);

	cout << "Total: " << pmain.total;
	cout << "\nAverage: " << pmain.avg << endl;

	return 0;
}
