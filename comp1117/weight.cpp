// SHIM, Hyunju
// UID: 3035345693

#include <iostream>
using namespace std;

int main()
{
    int number;
    char unit;
    cin >> number >> unit ;

    if (unit == 'l')
    {
        cout << number << "lb = " << number / 2.2 << "kg" << endl;
    }

    else if (unit == 'k')
    {
        cout << number << "kg = " << number * 2.2 << "lb" << endl;
    }

    return 0;
}
