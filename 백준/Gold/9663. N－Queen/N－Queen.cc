#include <iostream>
using namespace std;
int n;
int	cnt;
void	count(int *m, int idx)
{
	if (idx == n)
		cnt++;
	else
	{
		for (int i = 0; i < n; i++)
		{
			m[idx] = i;
			int j = 0;
			for (; j < idx; j++)
			{
				if (m[idx] == m[j] || m[idx] - m[j] == idx - j || m[idx] - m[j] == j - idx)
					break ;
			}
			if (j == idx)
				count(m, idx + 1);
		}
	}
}
int main()
{
	cin >> n;
	int m[n];
	count(m, 0);
	cout << cnt;
}