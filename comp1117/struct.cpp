// 1117C Workshop 8
#include <iostream>
using namespace std;

int main()
{
    struct Num { int value; int count;};

    Num input[10];
    int n;
    int size = 0;

    // Initialization
    for (int i = 0; i < 10; i++)
        input[i].value = input[i].count = 0;

    for (int i = 0; i < 10; i++)
    {
        cin >> n;

        bool duplicate = false;

        for (int j = 0; j < size; j++)
        {
            if (n == input[j].value)
            {
                input[j].count++;
                duplicate = true;
                break;
            }
        }
        if (duplicate == false)
        {
            input[size].value = n;
            input[size].count++;
            size++;
        }
    }

    cout << "There are " << size << " distinct numbers.\n";
    cout << "Number\tCount\n";

    for (int i = 0; i < size; i++)
        cout << input[i].value << "\t" << input[i].count << endl;

    return 0;
}
