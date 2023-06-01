#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int cnt = 1;
	int prev = 1;
	while (prev < n)
	{
		cnt++;
		int k = cnt * (cnt + 1) / 2;
		if (n <= k)
			break ;
		prev = k;
	}
	int m = n - prev;
	int o = 1;
	while (m > 1)
	{
		cnt--;
		o++;
		m--;
	}
	if ((cnt + o) % 2)
		cout << o << "/" << cnt;
	else
		cout << cnt << "/" << o;
}