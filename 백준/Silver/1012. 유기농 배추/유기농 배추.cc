#include <iostream>
using namespace std;

int T, N, M, K;
int map[51][51];
int ans;
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1 , -1, 0, 0};


void    dfs(int x, int y)
{
    int nx, ny;
    for (int i = 0; i < 4; i++)
    {
        nx = x + dx[i];
        ny = y + dy[i];
        if (nx >= 0 && nx < N && ny >= 0 && ny < M && map[nx][ny] == 1)
        {
            map[nx][ny] = 0;
            dfs(nx, ny);
        }
    }
}

int main()
{
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        ans = 0;
        cin >> M >> N >> K;
        for (int k = 0; k < N; k++)
        {
            for (int j = 0; j < M; j++)
            {
                map[k][j] = 0;
            }
        }
        for (int j = 0; j < K; j++)
        {
            int k[2];
            cin >> k[0] >> k[1];
            map[k[1]][k[0]] = 1;
        }
        for (int k = 0; k < N; k++)
        {
            for (int j = 0; j < M; j++)
            {
                if (map[k][j] == 1)
                {
                    dfs(k, j);
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }
}
