// UID: 3035345693
// Name: Shim, Hyunju

#include <iostream>
using namespace std;

// judge if first number is divisible by second number
// return 1 (true) if divisible, return 0 (false) if not divisible
bool judgeDivisible(int inter, int digit);

// judge if any of the digit of integer a is equal to b
// return 1 (true) if digit is equal, return 0(false) if not equal
bool judgeDigitEqual(int inter, int digit);

// judge if two numbers are interesting
// use judgeDivisible and judgeDigitEqual function together
// return 1 if interesting, return 0 if not interesting
bool judgeInteresting (int inter, int digit);


int main()
{
    int num1, num2, repeat, result;

    cin >> repeat;

    // repeat the judge interesting process for 'repeat' times
    // print "interesting" if two numbers are interesting,
    // print "not interesting" if two are not interesting
    for (int i=0; i < repeat; i++)
    {
        cin >> num1 >> num2;

        result = judgeInteresting (num1, num2);

        if (result == true) cout << "interesting" << endl;
        else cout << "not interesting" << endl;
    }

    return 0;
}


bool judgeDivisible (int inter, int digit)
{
    if (inter % digit == 0) return true;
    else return false;
}

bool judgeDigitEqual (int inter, int digit)
{
    while (inter >= digit)
    {
        // judge if the remainder is equal to the digit and return true if it is
        if (inter % 10 == digit) return true;
        else inter = inter / 10;
    }

    return false;
}



bool judgeInteresting (int inter, int digit)
{
    int divisible, digitequal;

    divisible = judgeDivisible (inter, digit);
    digitequal = judgeDigitEqual (inter, digit);

    // if inter and digit are either divisible or digitequal, return true
    if ((divisible == true) || (digitequal == true)) return true;
    else return false;
}
