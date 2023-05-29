#include <iostream>
#include <cstring>
using namespace std;
int	want[1000001];
bool visited[1000001];
bool done[1000001];
int cnt;
void	dfs(int n)
{
	visited[n] = true;
	int next = want[n];
	if (!visited[next])
		dfs(next);
	else if (!done[next])
	{
		for (int i = next; i != n ;i = want[i])
			cnt++;
		cnt++;
	}
	done[n] = true;
}
int main()
{
	int n;
	cin >> n;
	while (n--)
	{
		int c;
		cin >> c;
		for (int j=1;j<=c;j++)
			cin >> want[j];
		cnt = 0;
		for (int j=1;j<=c;j++)
		{
			if (!visited[j])
				dfs(j);
		}
		cout << c - cnt << endl;
		memset(visited, false, sizeof(visited));
		memset(done, false, sizeof(done));
	}
}