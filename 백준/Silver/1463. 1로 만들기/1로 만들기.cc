#include <iostream>
using namespace std;

int a = 30;
void	back(int n, int c)
{
	if (n == 1)
	{
		if (a > c)
			a = c;
		return ;
	}
	if (c > a)
		return ;
	if (n % 2 == 0)
		back(n / 2, c + 1);
	if (n % 3 == 0)
		back (n / 3, c + 1);
	back(n - 1, c + 1);
}

int main()
{
	int n;
	cin >> n;
	back(n, 0);
	cout << a;
}
