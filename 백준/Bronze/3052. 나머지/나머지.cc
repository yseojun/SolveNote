#include <iostream>
using namespace std;
int main()
{
	int a[42];
	for (int i = 0;i < 42;i++)
		a[i] = 0;
	for (int i = 0;i < 10;i++)
	{
		int n;
		cin >> n;
		a[n % 42]++;
	}
	int c = 0;
	for (int i = 0;i < 42;i++)
		if (a[i] > 0)
			c++;
	cout << c;
}