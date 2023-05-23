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
			int good = 1;
			for (int j = 0; j < idx; j++)
			{
				if (m[idx] == m[j])
					good = 0;
				if (m[idx] - m[j] == idx - j || m[idx] - m[j] == j - idx)
					good = 0;
			}
			if (good)
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