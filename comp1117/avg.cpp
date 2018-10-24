// file i/o
#include <fstream>
#include <iostream>
using namespace std;

int main()
{
	int count, number, high, low;
	count = number = high = 0;
	low = 1000;
	double average = 0.0;

	ifstream in_stream;
	in_stream.open("data.txt");

	if (!in_stream.fail()) {
		in_stream >> count;
		for (int i = 0; i < count; i++)
		{
			in_stream >> number;
			if (number > high)
				high = number;
			if (number < low)
				low = number;
			average += number;
		}

		if (count > 0)
		{
			average /= count;

			cout << "The average mark is: " << average << endl;
			cout << "The highest mark is: " << high << endl;
			cout << "The lowest mark is: " << low << endl;
		}

		in_stream.close();
	}
	else
		cout << "Unable to open the file!\n";

	return 0;
}
