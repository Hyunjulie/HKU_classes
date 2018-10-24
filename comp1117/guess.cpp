// Guess a number
// Using rand() to generate a secret number
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	int input = 0;
	int lower = 1;
	int upper = 100;

    srand(time(NULL));

    int secret = rand() % 100 + 1;

    cout << "Please input a number between " << lower << "-" << upper << endl;
    while(input != secret)
    {
        cin >> input;
        if (input == secret)
            cout << "Bingo!\n";
        else
        {
            cout << "Try again! Please input a number between ";
            if (input > secret)
                upper = input - 1;
            else
                lower = input + 1;
            cout << lower << "-" << upper << endl;
        }
    }

    return 0;
}
