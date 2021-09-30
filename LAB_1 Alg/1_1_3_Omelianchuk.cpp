#include <iostream>

using namespace std;

int main()
{
    int a, a2, a3, a6, a7;
    cout << "Enter an integer a:" << endl;
    cin >> a;

    a2 = a * a;
    a3 = a2 * a;
    a6 = a3 * a3;
    a7 = a6 * a;

    cout << "а7 = " << a7;
}

