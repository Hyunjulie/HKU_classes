// Workshop 4 Example
// user-defined function
#include <iostream>
using namespace std;

int mult (int n1, int n2)
{
    return n1 * n2;
}

int main()
{
    int a, b, result;
    cin >> a >> b;
    result = mult(a, b);
    cout << result << endl;

    return 0;
}
