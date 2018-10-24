//Name: SHIM Hyunju
//UID: 3035345693

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    //input three integers
    cin >> a >> b >> c;

    // divide the case into two parts: a  >= b or a < b
    // start of first part
    if (a >= b)
    {
        if (c >= a)
            cout << a;
        else if (b >= c)
            cout << b;
        else
            cout << c;
    }

    //start of second part
    if (a < b)
    {
        if (a >= c)
            cout << a;
        else if (c >= b)
            cout << b;
        else
            cout << c;
    }

    //create new line
    cout << endl;

    return 0;
}
