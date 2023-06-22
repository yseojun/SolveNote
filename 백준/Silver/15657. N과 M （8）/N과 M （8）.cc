#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, M;
int a[10];

void	back(int cnt, int p[10])
{
	if (cnt == M)
	{
		for (int i = 0; i < M; i++)
			cout << p[i] << " ";
		cout << endl;
		return ;
	}
	for (int i = 0; i < N; i++)
	{
		if (p[cnt - 1] <= a[i])
		{
			p[cnt] = a[i];
			back(cnt + 1, p);
		}
	}
}

int main()
{
	cin >> N >> M;
	for (int i = 0; i < N; i++)
		cin >> a[i];
	sort(a, a + N);
	for (int i = 0; i < N; i++)
	{
		int p[10];
		p[0] = a[i];
		back(1, p);
	}
}