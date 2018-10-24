// point on circumference
#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	int a, b, r, x, y;

	cout << "Please input the centre and the radius of the circle:\n";
	cin >> a >> b >> r;

	cout << "Please input a point:\n";
	cin >> x >> y;

	if ((pow((x - a),2.0)) + pow((y - b),2.0) == pow(r, 2.0))
		cout << "The point is on the circumference.\n";
	else
		cout << "The point is not on the circumference.\n";

	return 0;
}
