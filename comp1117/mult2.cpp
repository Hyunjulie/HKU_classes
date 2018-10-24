// Workshop 4 Example 2
// user-defined function
#include <iostream>
using namespace std;

int mult (int n1, int n2)
{
    int count = 1;
    int r = 0;
    while (count <= n1)
    {
        r = r + n2;
        count = count + 1;
    }
    return r;
}

int main()
{
    int a, b, result;
    cin >> a >> b;
    result = mult(a, b);
    cout << result << endl;

    return 0;
}
