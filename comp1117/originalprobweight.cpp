#include <iostream>
using namespace std;

int main()
{
    char a, b, c, unit;
    cin >> a >> b >> c >> unit ;

    if (unit == 'l')
    {
        cout << a << b << c << "lb = " << ((a - '0')* 100 + (b - '0') * 10 + (c - '0')) / 2.2 << "kg" << endl;
    }

    else if (unit == 'k')
    {
        cout << a << b << c << "kg = " << ((a - '0')* 100 + (b - '0') * 10 + (c - '0')) * 2.2 << "lb" << endl;
    }

    return 0;
}
