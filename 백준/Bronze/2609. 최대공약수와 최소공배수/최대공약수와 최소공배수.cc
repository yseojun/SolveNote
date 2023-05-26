#include <iostream>
using namespace std;
int main()
{
	int a,b;
	cin >> a >> b;
	int d = (a % 2 == 0 && b % 2 == 0) + 1;
	int m = 1;
	while (d <= a && d <= b)
	{
		if (a % d == 0 && b % d == 0)
			m = d;
		d += 2;
	}
	cout << m << endl << a * b / m;
}