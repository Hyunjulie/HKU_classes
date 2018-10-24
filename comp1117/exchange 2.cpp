// Workshop 10
// Practice dynamic array
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// For storing exchange rate records
struct exrec
{
    string name;
    int unit;
    double bankbuy;
    double banksell;
};

// To count the number of records in the file
int countdata(string filename)
{
    ifstream in_stream;
    int count = 0;
    string temp;

    in_stream.open(filename.c_str());
    if (in_stream.fail())
    {
        cout << "Cannot open the "<< filename << " file.\n";
        return 1; 
    }

    while (getline(in_stream, temp))
        count++;

    in_stream.close();
    return count;
}

// To read the data
void readdata(string filename, exrec *p, int count)
{
    ifstream in_stream;

    in_stream.open(filename.c_str());
    if (in_stream.fail())
    {
        cout << "Cannot open the "<< filename << " file.\n";
        return;
    }

    for (int i = 0; i < count; i++)
        in_stream >> p[i].name >> p[i].unit >> p[i].bankbuy >> p[i].banksell;

    in_stream.close();
}

// Search the foreign currency code
int exist(string name, exrec *p, int number)
{
    for (int i = 0; i < number; i++)
        if (p[i].name == name)
            return i;

    return -1;
}

int main()
{
    string a;
    int number = 0;
    string fc;
    char bs;
    double unit;
    int record = -1;
    double amount = 0;

    cout << "Please input the filename: ";
    cin >> a;

    number = countdata(a);

    exrec *p = new exrec[number];

    readdata(a, p, number);

    cout << "Currency\tUnit\tBank Buy\tBank Sell\n";
    for (int i = 0; i < number; i++)
       cout << p[i].name << "\t\t" << p[i].unit << "\t" << p[i].bankbuy << "\t\t" << p[i].banksell << endl;

    cout << "Which currency do you want?  How many unit?  Buy or Sell (B/S)?\n";
    cin >> fc >> unit >> bs;

    record = exist(fc, p, number);

    if (record != -1)
    {
        if (bs == 'B')
           amount = unit / p[record].unit * p[record].bankbuy;
        else
           amount = unit / p[record].unit * p[record].banksell;
        cout << "The amount is: $" << amount << endl;
    }
    else
    {
        cout << "No such foreign currency code in the record.\n";
    }

    delete []p;
    return 0;
}
