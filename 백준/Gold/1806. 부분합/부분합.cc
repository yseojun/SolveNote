#include <iostream>
using namespace std;
int	n;
int s;
int m[100000];
int main()
{
	cin >> n >> s;
	int i;
	for (i = 0; i < n; i++)
		cin >> m[i];
	int low = 0;
	int high = 0;
	int sum = m[0];
	int ans = n + 1;
	while (low <= high && high < n)
	{
		if (sum < s)
			sum += m[++high];
		else
		{
			if (ans > high - low + 1)
				ans = high - low + 1;
			sum -= m[low++];
		}
	}
	if (ans == n + 1)
		cout << 0;
	else
		cout << ans;
}