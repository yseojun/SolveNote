#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;

int N, M;
int mp[101][101];
int a[101][101];
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
vector<int> cz;
int ans = 0;
int cnt = 0;

void set_air(void)
{
    queue<int>  q;
    memset(a, 0, sizeof(a));
    q.push(0);
    a[0][0] = 1;
    while (!q.empty())
    {
        int nw = q.front();
        q.pop();
        int nx = nw % M;
        int ny = nw / M;
        for (int i = 0; i < 4; i++)
        {
            int neX = nx + dx[i];
            int neY = ny + dy[i];
            if (neX < 0 || neX >= M || neY < 0 || neY >= N || a[neY][neX] || mp[neY][neX])
                continue;
            q.push(neY * M + neX);
            a[neY][neX] = 1;
        }
    }
}

void    melt(void)
{
    for (int i = 0; i < cz.size(); i++)
    {
        if (cz[i] == 0)
            continue ;
        int w = cz[i];
        int x = w % M;
        int y = w / M;
        int side = 0;
        for (int i = 0; i < 4; i++)
        {
            int ny = y + dy[i];
            int nx = x + dx[i];
            if (a[ny][nx])
                side++;
        }
        if (side >= 2)
        {
            mp[y][x] = 0;
            cz[i] = 0;
            cnt--;
        }
    }
}

void    solve(void)
{
    while (cnt > 0)
    {
        memset(a, 0, sizeof(a));
        set_air();
        melt();
        ans++;
    }
}

int main()
{
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> mp[i][j];
            if (mp[i][j] == 1)
            {
                cz.push_back(i * M + j);
                cnt++;
            }
        }
    }
    solve();
    cout << ans;
}
