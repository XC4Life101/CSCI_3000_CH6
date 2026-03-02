#include <iostream>
using namespace std;

struct product {
	int id;
	float price;
};

product create(int id, float price) {
	product temp;
	temp.id = id;
	temp.price = price;

	return temp;
}

int main()
{
	int id;
	float price;

	cin >> id;
	cin >> price;

	product pmain = create(id, price);

	cout << "Product Id: " << pmain.id;
	cout << "\nProduct Price: " << pmain.price << endl;

	return 0;
}
