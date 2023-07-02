#include <iostream>
#include <queue>
using namespace std;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

void	solve(int n, int m, int st, int mp[1001][1001])
{
	int vs[1001][1001] = {0,};
	queue<int>	p;
	p.push(st);
	vs[st / m][st % m] = 0;
	while (!p.empty())
	{
		int	y = p.front() / m;
		int	x = p.front() % m;
		p.pop();
		for (int i = 0; i < 4; i++)
		{
			int ny = y + dy[i];
			int nx = x + dx[i];
			if (nx < 0 || nx >= m || ny < 0 || ny > n || 
				!mp[ny][nx] || vs[ny][nx] || ny * m + nx == st)
				continue ;
			vs[ny][nx] = vs[y][x] + 1;
			p.push(ny * m + nx);
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (vs[i][j])
				cout << vs[i][j];
			else if (mp[i][j] == 1)
				cout << -1;
			else if (!mp[i][j] || i * m + j == st)
				cout << 0;
			cout << " ";
		}
		cout << endl;
	}
}

int main()
{
	int	n, m, mp[1001][1001];
	int	start;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> mp[i][j];
			if (mp[i][j] == 2)
				start = i * m + j;
		}
	}
	solve(n, m, start, mp);
}
