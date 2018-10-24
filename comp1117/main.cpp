// SHIM Hyunju
// UID: 3035345693
#include <iostream>
#include "array.h"
using namespace std;

void input(Array &C)
{
    //inputs 2D dynamic array from the user
    int arysize, newnumber, i = 0, j = 0;
    arysize = C.get_size();
    for (int i = 0; i < arysize; i++)
        for (int j = 0; j < arysize; j++)
        {
            cin >> newnumber;
            C.set(i, j, newnumber);
        }
}

void output(Array &C)
{
    //outputs the array
    int arysize;
    arysize = C.get_size();
    for (int i = 0; i < arysize; i++)
        for (int j = 0; j < arysize; j++)
        {
            if (j <= 2)
                cout << C.get(i, j) << " ";
            else cout << C.get(i, j);

            if (j == arysize - 1)
                cout << endl;
        }
}

int main(void)
{
    //input size
    int size;
    cout << "Please input array size:" << endl;
    cin >> size;

    //input A, B
    Array A(size), B(size);

    cout << "Please input " << size << "x" << size << "integer array A:" << endl;
    input(A);
    cout << "Please input " << size << "x" << size << "integer array B:" << endl;
    input(B);

    int op;
    bool stop = false;
    while (!stop)
    {
        cout << "Please input operation number (0. Stop; 1. Transpose; 2. Addition;" <<
             " 3. Subtraction; 4. Product; 5. Trace; 6. Equality):" << endl;
        cin >> op;
        switch(op)
        {
        case 0:
            // stop
            stop = true;
            break;
        case 1:
            // transpose
            A.transpose();
            output(A);
            break;
        case 2:
            //Addition
            A += B;
            output (A);
            break;
        case 3:
            //Subtraction
            A -= B;
            output(A);
            break;
        case 4:
            //Product
            A *= B;
            output (A);
            break;
        case 5:
            //trace
            cout << A.trace() << endl;
            break;
        case 6:
            //Equality
            if (A == B)
                cout << "A is equal to B" << endl;
            else
                cout << "A is not equal to B" << endl;
            break;
        }
    }
    return 0;
}
