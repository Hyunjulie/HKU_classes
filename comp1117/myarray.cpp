//UID: 3035345693
//Name: SHIM, Hyunju

#include <iostream>
using namespace std;

const int SIZE = 4;
int input, i, j, k;

//find the transpose of array A and save it into array B
void transpose (int A[SIZE][SIZE], int B[SIZE][SIZE]);

//find the addition of arrays A and B
// store the added values of array into array C
void add (int A[SIZE][SIZE], int B[SIZE][SIZE], int C[SIZE][SIZE]);

// find the multiplication of arrays A and B
// store the multiplied value into array C
void multi (int A[SIZE][SIZE], int B[SIZE][SIZE], int C[SIZE][SIZE]);


int main()
{
    int a[SIZE][SIZE], b[SIZE][SIZE], c[SIZE][SIZE];

    // ask the user to input the number of operation
    cout << "Please input the number of an operation (0.Stop; 1.Transpose; 2.Addition; 3.Multiplication):" << endl;
    cin >> input;

    // Operate operations if the input number is 1, 2, or 3
    while (input >= 1 && input <= 3)
    {
        // if the input is 1, operate the transpose function
        if(input == 1)
        {
            cout << "Please input an 4*4 two-dimensional array of integer:" << endl;

            // save 4 by 4 array into a[i][j]
            for(i = 0; i < SIZE; ++i)
                for(j = 0; j < SIZE; ++j)
                {
                    cin >> a[i][j];
                }

            //use transpose function
            transpose (a, b);

            //print output
            cout << "Output:" << endl;
            for(i = 0; i < SIZE; ++i)
                for(j = 0; j < SIZE; ++j)
                {
                    if (j <= 2)
                        cout << b[i][j] << " ";
                    else cout << b[i][j];
                    if(j == SIZE - 1)
                        cout << endl;
                }
        }

        // if the input is 2, operate the addition function
        else if (input == 2)
        {
            cout << "Please input two 4*4 two-dimensional arrays of integer:" << endl;

            // storing elements of first matrix entered by user into array a[][]
            for(i = 0; i < SIZE; ++i)
                for(j = 0; j < SIZE; ++j)
                {
                    cin >> a[i][j];
                }

            // Storing elements of second matrix entered by user into array b[][]
            for(i = 0; i < SIZE; ++i)
                for(j = 0; j < SIZE; ++j)
                {
                    cin >> b[i][j];
                }

            // use the summation function
            add (a, b, c);

            //print resulting summation array c[][]
            cout << "Output:" << endl;
            for(int i = 0; i < SIZE; ++i)
                for(int j = 0; j < SIZE; ++j)
                {
                    if (j <= 2)
                        cout << c[i][j] << " ";
                    else cout << c[i][j];

                    if(j == SIZE - 1)
                        cout << endl;
                }
        }

        // if the input is 3, operate multiplication function
        else if (input == 3)
        {
            cout << "Please input two 4*4 two-dimensional arrays of integer:" << endl;

            //storing elements of first matrix into array a[][]
            for(i = 0; i < SIZE; ++i)
                for(j = 0; j < SIZE; ++j)
                {
                    cin >> a[i][j];
                }

            // Storing elements of second matrix into array b[][]
            for(i = 0; i < SIZE; ++i)
                for(j = 0; j < SIZE; ++j)
                {
                    cin >> b[i][j];
                }

            //use multiplication function
            multi (a, b, c);

            // printing resulting mulitiplication array c[][]
            cout << "Output:" << endl;
            for(int i = 0; i < SIZE; ++i)
                for(int j = 0; j < SIZE; ++j)
                {
                    if (j <= 2)
                        cout << c[i][j] << " ";
                    else cout << c[i][j];

                    if(j == SIZE - 1)
                        cout << endl;
                }
        }

        //repeat the process until user inputs 0
        cout << "Please input the number of an operation (0.Stop; 1.Transpose; 2.Addition; 3.Multiplication):" << endl;
        cin >> input;
    }
    return 0;
}

void transpose (int A[SIZE][SIZE], int B[SIZE][SIZE])
{
    for(i = 0; i < SIZE; ++i)
        for(j = 0; j < SIZE; ++j)
        {
            B[j][i]=A[i][j];
        }
}

void add (int A[SIZE][SIZE], int B[SIZE][SIZE], int C[SIZE][SIZE])
{
    for(i = 0; i < SIZE; ++i)
        for(j = 0; j < SIZE; ++j)
            C[i][j] = A[i][j] + B[i][j];
}

void multi (int A[SIZE][SIZE], int B[SIZE][SIZE], int C[SIZE][SIZE])
{
    for(i = 0; i < SIZE; ++i)
        for(j = 0; j < SIZE; ++j)
        {
            C[i][j]=0;
        }

    for(i = 0; i < SIZE; ++i)
        for(j = 0; j < SIZE; ++j)
            for(k = 0; k < SIZE; ++k)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
}
