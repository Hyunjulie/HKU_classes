//Name: SHIM Hyunju
//UID: 3035345693

#include <iostream>
using namespace std;

int main()
{
    char input1, input2;
    int i;
    double change, change2, newnumber1, newnumber2, sum;

    newnumber1 = newnumber2 = 0;
    i = 0;

    //inputting first value
    cin >> input1;

    //if the input is a~j or '.'
    while ((input1 == '.') || ('a'<= input1 && 'j'>= input1))
    {
        if ('a'<= input1 && 'j'>= input1) // change alphabet into an integer
            change = input1 - 'a'; //'change' has the corresponding integer in it

        else if (input1 == '.')  //if input is '.', update integer i to 1 so that it will start the decimal place
            i++;

        // after '.' make numbers into a decimal
        for (int x = 1; x < i; x++)
            change = change * 0.1;

        //increment i for the next iteration
        if (i > 0)
            i++;
        else;

        // add up separate character into a real number and save it into newnumber1
        if (input1 == '.')
            newnumber1 = newnumber1 + 0;

        else if ((change < 1) && (change >0)) // if change is not an integer (decimal)
            newnumber1 = newnumber1 + change;

        else if ((change == 0) || (change >= 1)) // if change is a whole number
            newnumber1 = newnumber1 * 10 + change;    //save a whole number into newnumber --> can be calculated


        cin >> input1;
    }
    //newnumber1 has the value of first number in it

    i = 0;
    //inputting second value
    cin >> input2;

    //repeat the same procedure
    while ((input2 == '.') || ('a'<= input2 && 'j'>= input2))
    {
        if ('a'<= input2 && 'j'>= input2)
            change2 = input2 - 'a';

        else if (input2 =='.')
            i++;

        for (int y = 1; y < i; y++)
            change2 = change2 * 0.1;


        if (i > 0)
            i++;
        else;


        if (input2 == '.')
            newnumber2 = newnumber2 + 0;

        else if ((change2 < 1) && (change2 >0))
            newnumber2 = newnumber2 + change2;

        else if ((change2 == 0) || (change2 >= 1))
            newnumber2 = newnumber2 * 10 + change2;

        cin >> input2;

    }
    //newnumber2 has the value of second number in it


    //summation
    sum = newnumber1 + newnumber2;
    cout << sum << endl;


    return 0;
}
