// String Exercise: extract the month in a string
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int pos1, pos2;
	string myinput;

	cout << "Input the string:\n";
	getline(cin, myinput);

	// Find the 1st and 2nd character "/" in the string
	pos1 = myinput.find("/");
	pos2 = myinput.find("/", pos1 + 1);

    if (pos1 != -1 && pos2 != -1)
		cout << "The month is: " << myinput.substr(pos1 + 1, pos2 - pos1 - 1) << endl;

	return 0;
}
