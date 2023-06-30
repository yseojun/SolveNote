#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
 
using namespace std;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int solve(int n, int m, vector<string> mp)
{
    int v[1001][1001][2] = {0,};
    queue<int> q;
    queue<int> b;
    q.push(0);
    b.push(0);
    v[0][0][0] = 1;
    while (!q.empty())
    {
        int crdn = q.front();
        int brk = b.front();
        int y = crdn / m;
        int x = crdn % m;
        q.pop();
        b.pop();
        // printf("y : %d, x: %d\n", y, x);
        if (crdn == (n - 1) * m + m - 1)
            return v[y][x][brk];
        for (int i = 0; i < 4; i++)
        {
            int ny = y + dy[i];
            int nx = x + dx[i];
            if (0 <= ny && ny < n && 0 <= nx && nx < m)
            {
                if (mp[ny][nx] == '1' && !brk)
                {
                    q.push(ny * m + nx);
                    b.push(1);
                    v[ny][nx][1] = v[y][x][0] + 1;
                }
                else if (mp[ny][nx] == '0' && v[ny][nx][brk] == 0)
                {
                    q.push(ny * m + nx);
                    b.push(brk);
                    v[ny][nx][brk] = v[y][x][brk] + 1;
                }
            }
        }
    }
    return (-1);
}

int main()
{
    int             N, M;
    vector<string>  mp;
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        string  tmp;
        cin >> tmp;
        mp.push_back(tmp);
    }
    cout << solve(N, M, mp);
}
