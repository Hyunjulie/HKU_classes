// Workshop 5 Exercises
// Read maximum 20 positive integers
// Reverse the array
#include <iostream>
using namespace std;

// Task: Print the array contents
// PRE: an integer array and the array size
void print(int array[], int size)
{
    for (int i = 0; i < size; i++)
        cout << array[i] << " ";
    cout << endl;
}

// Task: Swap two numbers
// PRE: int a and int b
// POST: swapped the two numbers
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

// Task: Reverse the contents in the array
// PRE: an integer array and the array size
void rev(int array[], int size)
{
    for (int i = 0; i < size / 2; i++)
        swap(array[i], array[size - i - 1]);
}

int main()
{
    const int SIZE = 20;
    int array[SIZE];
    int actualsize = 0;  // User may input fewer than 20
    int d;

    // Read the input from user
    cin >> d;
    while (d != -1 && actualsize < SIZE)
    {
        array[actualsize] = d;
        actualsize++;
        if (actualsize < SIZE)
            cin >> d;
    }

    // Reverse the content in array
    rev(array, actualsize);

    // Print the result
    print(array, actualsize);
}
