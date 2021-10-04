#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ukr");
	const float p0 = 1.29;
	const float z = 1.25 * pow(10, -4);
	const float e = 2.71828;
	float p;

	cout << "Висота" << "      " << "Густина" << endl;
	for (int h = 0; h <= 1000; h += 100) {
		p = p0 * pow(e, -1 * h * z);
		cout << "   " << h << " м     " << p<<" кг/м3"<< endl;
    }
}
