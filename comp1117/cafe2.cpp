// 1117B Workshop 8
// toy cafe program
// using array with sorting
#include <iostream>
#include <string>
using namespace std;

// Swapping product name
// input: two strings
// output: swapped the values
void swap_n(string &a, string &b)
{
    string t;
    t = a;
    a = b;
    b = t;
}

// Swapping price
// input: two double values
// output: swapped the values
void swap_p(double &a, double &b)
{
    double t;
    t = a;
    a = b;
    b = t;
}

// Sorting the product list according to the product name
// input: two arrays one for product name and one for price
// output: n/a
void sort (string a[], double b[])
{
    for (int i = 9; i > 0; i--)
    {
        // find the max-index m of a[0..i]
        int m = 0;
        for (int j = 1; j <= i; j++)
        {
            if (a[j] > a[m])
                m = j;
        }
        // swap
        if (i != m)
        {
            swap_n(a[i], a[m]);
            swap_p(b[i], b[m]);
        }
    }
}

// To initialize the items
// input: two arrays one for product name and one for price
// store the values
// output: n/a
void initialize (string a[], double b[])
{
   a[0] = "Strawberry";
   a[1] = "Ice-cream";
   a[2] = "Lemon Tea";
   a[3] = "Watermelon";
   a[4] = "Cup Noodles";
   a[5] = "Banana Cake";
   a[6] = "Apple Juice";
   a[7] = "Cappuccino";
   a[8] = "Coca-cola";
   a[9] = "Grapefruit";
   b[0] = 15.5;
   b[1] = 20.0;
   b[2] = 18.2;
   b[3] = 2.5;
   b[4] = 39.9;
   b[5] = 28.0;
   b[6] = 15.8;
   b[7] = 29.0;
   b[8] = 6.5;
   b[9] = 21.0;

   sort(a, b);
}

// To print the menu
// input: product name and price arrays
// output: menu printed on screen
void menu(string a[], double b[])
{
    cout << "~~~~~~~Jolly Cafe~~~~~~~" << endl;
    for (int i = 0; i < 10; i++)
        cout << i + 1 << ".\t" << a[i] << "\t$" << b[i] << endl;
    cout << "0.\tCheck out\n";
}

// To calculate the sub-total
// input: the item number and quantity and the price array
// output: the price
double sub(int item, int quantity, double a[])
{
    return a[item - 1] * quantity;
}

// To calculate with 10% service charge
// input: the amount
// output: amount with 10% service charge
double final(double value)
{
    return value * 1.1;
}

int main()
{
    int input = -1;
    int quantity = 0;
    double amount = 0;
    double total = 0;
    string name[10];
    double price[10];

    initialize(name, price);

    while (input != 0)
    {
        // Print Menu
        menu(name, price);

        // Read the user input
        cout << "Please input the item number to purchase: ";
        cin >> input;

        if (input != 0)
        {
            cout << "Please input the quantity: ";
            cin >> quantity;
            amount = sub(input, quantity, price);
            total = total + amount;
            cout << "$" << amount << " is added to the total.\n\n";
        }
    }
    cout << "\nThe total amount: $" << total << endl;
    cout << "With 10% service charge: $" << final(total) << endl;
    cout << "Thank you!\n";

    return 0;
}
