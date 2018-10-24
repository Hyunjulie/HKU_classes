//Exercise: Checking Palindrome
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input;
    int length = 0;
    bool palindrome = true;

    cout << "Please input a word: ";
    cin >> input;

    length = input.length();

    for (int i = 0; i < length / 2; i++)
    {
        if (input[i] != input[length - i - 1])
        {
            palindrome = false;
            break;
        }
    }

    if (palindrome)
        cout << input << " is a palindrome!\n";
    else
        cout << input << " is not a palindrome!\n";

    return 0;
}
