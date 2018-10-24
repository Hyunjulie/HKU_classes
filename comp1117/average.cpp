// SHIM, Hyunju
// UID: 3035345693

#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    double average;
    cin >> a >> b >> c;

    if ((a < b) && (a < c))
    {
        average = (b + c) / 2.0;
        cout << average << endl;
    }

    else if ((b < a) && (b < c))
    {
        average = (a + c) / 2.0;
        cout << average << endl;
    }

    else
    {
        average = (a + b) / 2.0;
        cout << average << endl;
    }

    return 0;
}
