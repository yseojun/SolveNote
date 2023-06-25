#include <iostream>
using namespace std;

int n,k;

int main()
{
	cin >> n >> k;
	int ans = 1;
	for (int i = 0; i < k; i++)
	{
		ans *= n--;
	}
	while (k)
	{
		ans /= k--;
	}
	cout << ans;
}