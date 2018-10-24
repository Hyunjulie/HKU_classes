// Workshop 4 exercise
// Self-defined functions

#include <iostream>
using namespace std;

// function to calculate the tax with a given amount
// pre: input parameter is the amount > 0
// post: return the tax with tax rate 8%
double tax(double amount)
{
    return amount * 0.08;
}

// function to calculate the amount in HK$
// pre: input the amount in Japanese Yen
// post: return the amount in HK$ with the exchange rate
// 10000 yen = HK$774.2
double hkdollar(double yen)
{
    return (yen / 10000.0 * 774.2);
}

int main()
{
    double amount = 0.0;
    cout << "Please input the price in yen:" << endl;
    cin >> amount;

    cout << "The tax (in yen):" << tax(amount) << endl;
    cout << "The amount in HK$" << hkdollar(tax(amount) + amount) << endl;

    return 0;
}

