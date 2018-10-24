// Friend list
#include <string>
#include <iostream>
using namespace std;

struct date {
	int month;
	int day;
};

struct friends {
	string name;
	date birthday;
};

void swap(friends &a, friends &b)
{
    friends temp;
    temp = a;
    a = b;
    b = temp;
}

void sort(friends array[], int n)
{
    for (int i = n - 1; i > 0; i--)
    {
       int m = 0;
       //find the max-index m of a[0..i];
       for (int j = 1; j <= i; j++)
       {
           if (array[m].birthday.month < array[j].birthday.month)
           {
               m = j;
           }
           else if (array[m].birthday.month == array[j].birthday.month)
           {
               if (array[m].birthday.day < array[j].birthday.day)
               {
                   m = j;
               }
           }
       }

       //swap(array[i], array[m]);
       if (m != i)
       {
           swap(array[m], array[i]);
       }
    }
}

int main()
{
	int n;
	
	cout << "Please input the number of friends:\n";
	cin >> n;

	// Dynamic array
	friends *list = new friends[n];
	
    cout << "Please input the friends' information:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> list[i].name >> list[i].birthday.month >> list[i].birthday.day;
    }

    sort(list, n);

    cout << "\nName\tBirthday (day/month):\n";
    for (int i = 0; i < n; i++)
    {
        cout << list[i].name << '\t' << list[i].birthday.day << "/" << list[i].birthday.month << endl;
    }
	
	delete []list;
    return 0;
}
