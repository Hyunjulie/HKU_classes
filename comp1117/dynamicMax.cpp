// Workshop 10
// Practice dynamic array
#include <iostream>
using namespace std;
int main()
{
   int n;
   int max;
   cout << "Input the size of the array: ";
   cin >> n;

   int *p = new int[n];
   cout << "Input " << n << " numbers: ";
   for (int i = 0; i < n; i++)
	   cin >> p[i];

   max = p[0];
   for (int i = 1; i < n; i++)
   {
	   if (p[i] > max)
		   max = p[i];
   }

   cout << "The maximum number in this array is: " << max << endl;
   delete []p;

   return 0;
}
