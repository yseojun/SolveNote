#include <iostream>
#include <queue>
using namespace std;

int N,M;
int mx = 0;
int mp[501][501];
int dx[4] = {0, 0, -1, 1};
int dy[4] = {1, -1, 0, 0};
int dfs(int i, int j)
{
    int ans = 1;

    mp[i][j] = 0;
    for (int k = 0; k < 4; k++) 
    {
        int ny = i + dy[k];
        int nx = j + dx[k];
        if(nx < 0 || nx >= M || ny < 0 || ny >= N)
            continue;
        if(mp[ny][nx] == 0)
            continue;
        ans += dfs(ny, nx);
    }
    return (ans);
}
int main()
{
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
            cin >> mp[i][j];
    }
    int cnt = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (mp[i][j])
            {
                int tmp;
                tmp = dfs(i, j);
                cnt++;
                mx = max(mx, tmp);
            }
        }
    }
    cout << cnt << endl << mx << endl;
}
