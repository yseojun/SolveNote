#include <iostream>
using namespace std;

int main()
{
	int n;
	int m;
	cin >> n >> m;
	int	a[1025][1025];
	int	from[2];
	int to[2];
	int ans[m];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			int tmp;
			cin >> tmp;
			a[i + 1][j + 1] = a[i][j + 1] + a[i + 1][j] - a[i][j] + tmp;
		}
	}
	for (int i = 0; i < m; i++)
	{
		int sum = 0;
		cin >> from[0] >> from[1] >> to[0] >> to[1];
		ans[i] = a[to[0]][to[1]] - a[to[0]][from[1] - 1] - a[from[0] - 1][to[1]] + a[from[0] - 1][from[1] - 1];
	}
	for (int i = 0; i < m; i++)
		cout << ans[i] << '\n';
}