//Name: SHIM Hyunju
//UID: 3035345693

#include <iostream>
using namespace std;

int main()
{
    int code, money;
    double converted;

    cin >> code >> money;

    //using switch statement, divide the situation into 4 parts
    switch (code)
    {
    //situation 1: code type 0, CNY
    case 0:
        converted = money * 1.1899;
        break;

    //situation 2: code type 1, JPY
    case 1:
        converted = money * 0.0702;
        break;

    //situation 3: code type 2. GBP
    case 2:
        converted = money * 10.5809;
        break;

    //situation 4: code type3. USD
    case 3:
        converted = money * 7.8162;
        break;
    }

    cout << converted << " HKD" << endl;

    return 0;
}

