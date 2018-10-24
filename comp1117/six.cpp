// To generate six different numbers (1-49)
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
	int number[6];
	int i = 0;
	srand(time(NULL));
	int temp = 0;

	while (i < 6)
	{
        number[i] = rand() % 49 + 1;

        // To check whether the generated number is same as previous ones
		for (int j = 0; j < i; j++)
		{
			if (number[j] == number[i])
				i--;
		}
		i++;
	}

    // For sorting the numbers (optional)
    for (int i = 0; i < 6; i++)
        for (int j = 0; j < 6 - i - 1; j++)
        {
            if (number[j] > number[j+1])
            {
                temp = number[j];
                number[j] = number[j+1];
                number[j+1] = temp;
            }
        }

    // Printing the result
	cout << "The six numbers are: \n";
	for (int i = 0; i < 6; i++)
		cout << number[i] << endl;

	return 0;
}
