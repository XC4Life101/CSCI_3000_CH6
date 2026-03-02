#include <iostream>
using namespace std;

struct rect {
	int len;
	int wid;
};

void resize(rect rect_copy, int factor) {
	rect_copy.len *= factor;
	rect_copy.wid *= factor;

	int area = rect_copy.len * rect_copy.wid;
	cout << "Area inside function (copy): " << area << endl;
}

int main()
{
	rect ex;
	int factor;

	cin >> ex.len;
	cin >> ex.wid;
	cin >> factor;

	int before = ex.len * ex.wid;
	cout << "Area before call (main): " << before << endl;

	resize(ex, factor);

	int after = ex.len * ex.wid;
	cout << "Area after call (main): " << after << endl;

	return 0;
}
