#include <iostream>
using namespace std;

struct temp_record {
	float celsius;
};

void to_fahrenheit(temp_record &temp) {
	temp.celsius = (temp.celsius * 9.0 / 5.0) + 32;

	cout << "\nTemperature inside function (reference): " << temp.celsius;
}

int main()
{
	temp_record temp;

	cout << "Insert temperature in degrees Celsius: ";
	cin >> temp.celsius;

	cout << "\n\nTemp before call (main): " << temp.celsius;

	to_fahrenheit(temp);

	cout << "\n\nTemp after call (main): " << temp.celsius << endl;

	return 0;
}
