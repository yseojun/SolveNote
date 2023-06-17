#include <iostream>
using namespace std;

int R,C;
string m[21];
int ans = 1;

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

void	dfs(int x, int y, int c, int d[30])
{
	for (int i = 0; i < 4; i++)
	{
		int nx = x - dx[i];
		int ny = y - dy[i];
		if (0 > nx || C <= nx || 0 > ny || R <= ny)
			continue;
		if (d[m[ny][nx] - 'A'] == 0)
		{
			d[m[ny][nx] - 'A']++;
			dfs(nx, ny, c + 1, d);
			d[m[ny][nx] - 'A']--;
		}
	}
	ans = max(c, ans);
}

int main()
{
	cin >> R >> C;
	for (int i = 0; i < R; i++)
		cin >> m[i];
	int D[30];
	for (int i = 0; i < 30; i++)
		D[i] = 0;
	D[m[0][0] - 'A']++;
	dfs(0, 0, 1, D);
	cout << ans;
}