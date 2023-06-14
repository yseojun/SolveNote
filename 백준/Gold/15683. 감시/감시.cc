#include <iostream>
#include <cstring>
using namespace std;

int n,m;
int a[8][8];
int w[8][2];
int ans;

void    chk_min(int a[8][8], int t)
{
    if (t == -1)
    {
        int tmp = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0;j < m; j++)
            {
                if (a[i][j] == 0)
                    tmp++;
            }
        }
        ans = min(ans, tmp);
        return;
    }
    
    int i = w[t][0];
    int j = w[t][1];

    int save[8][8];
    if (a[i][j] == 1)
    {
        memcpy(save, a, sizeof(save));
        for (int y = i - 1; y >= 0; y--)
        {
            if (save[y][j] == 0)
                save[y][j] = -1;
            else if (save[y][j] == 6)
                break ;
        }
        chk_min(save, t - 1);

        memcpy(save, a, sizeof(save));
        for (int y = i + 1; y < n ; y++)
        {
            if (save[y][j] == 0)
                save[y][j] = -1;
            else if (save[y][j] == 6)
                break ;
        }
        chk_min(save, t - 1);

        memcpy(save, a, sizeof(save));
        for (int x = j - 1; x >= 0; x--)
        {
            if (save[i][x] == 0)
                save[i][x] = -1;
            else if (save[i][x] == 6)
                break ;
        }
        chk_min(save, t - 1);

        memcpy(save, a, sizeof(save));
        for (int x = j + 1; x < m ; x++)
        {
            if (save[i][x] == 0)
                save[i][x] = -1;
            else if (save[i][x] == 6)
                break ;
        }
        chk_min(save, t - 1);
    }
    else if (a[i][j] == 2)
    {
        memcpy(save, a, sizeof(save));
        for (int y = i - 1; y >= 0; y--)
        {
            if (save[y][j] == 0)
                save[y][j] = -1;
            else if (save[y][j] == 6)
                break ;
        }
        for (int y = i + 1; y < n ; y++)
        {
            if (save[y][j] == 0)
                save[y][j] = -1;
            else if (save[y][j] == 6)
                break ;
        }
        chk_min(save, t - 1);

        memcpy(save, a, sizeof(save));
        for (int x = j - 1; x >= 0; x--)
        {
            if (save[i][x] == 0)
                save[i][x] = -1;
            else if (save[i][x] == 6)
                break ;
        }
        for (int x = j + 1; x < m ; x++)
        {
            if (save[i][x] == 0)
                save[i][x] = -1;
            else if (save[i][x] == 6)
                break ;
        }
        chk_min(save, t - 1);
    }
    else if (a[i][j] == 3)
    {
        memcpy(save, a, sizeof(save));
        for (int y = i - 1; y >= 0; y--)
        {
            if (save[y][j] == 0)
                save[y][j] = -1;
            else if (save[y][j] == 6)
                break ;
        }
        for (int x = j - 1; x >= 0; x--)
        {
            if (save[i][x] == 0)
                save[i][x] = -1;
            else if (save[i][x] == 6)
                break ;
        }
        chk_min(save, t - 1);

        memcpy(save, a, sizeof(save));
        for (int y = i + 1; y < n ; y++)
        {
            if (save[y][j] == 0)
                save[y][j] = -1;
            else if (save[y][j] == 6)
                break ;
        }
        for (int x = j - 1; x >= 0; x--)
        {
            if (save[i][x] == 0)
                save[i][x] = -1;
            else if (save[i][x] == 6)
                break ;
        }
        chk_min(save, t - 1);

        memcpy(save, a, sizeof(save));
        for (int y = i - 1; y >= 0; y--)
        {
            if (save[y][j] == 0)
                save[y][j] = -1;
            else if (save[y][j] == 6)
                break ;
        }
        for (int x = j + 1; x < m ; x++)
        {
            if (save[i][x] == 0)
                save[i][x] = -1;
            else if (save[i][x] == 6)
                break ;
        }
        chk_min(save, t - 1);

        memcpy(save, a, sizeof(save));
        for (int x = j + 1; x < m ; x++)
        {
            if (save[i][x] == 0)
                save[i][x] = -1;
            else if (save[i][x] == 6)
                break ;
        }
        for (int y = i + 1; y < n ; y++)
        {
            if (save[y][j] == 0)
                save[y][j] = -1;
            else if (save[y][j] == 6)
                break ;
        }
        chk_min(save, t - 1);
    }
    else if (a[i][j] == 4)
    {
        memcpy(save, a, sizeof(save));
        for (int y = i - 1; y >= 0; y--)
        {
            if (save[y][j] == 0)
                save[y][j] = -1;
            else if (save[y][j] == 6)
                break ;
        }
        for (int x = j - 1; x >= 0; x--)
        {
            if (save[i][x] == 0)
                save[i][x] = -1;
            else if (save[i][x] == 6)
                break ;
        }
        for (int x = j + 1; x < m ; x++)
        {
            if (save[i][x] == 0)
                save[i][x] = -1;
            else if (save[i][x] == 6)
                break ;
        }
        chk_min(save, t - 1);

        memcpy(save, a, sizeof(save));
        for (int y = i - 1; y >= 0; y--)
        {
            if (save[y][j] == 0)
                save[y][j] = -1;
            else if (save[y][j] == 6)
                break ;
        }
        for (int y = i + 1; y < n ; y++)
        {
            if (save[y][j] == 0)
                save[y][j] = -1;
            else if (save[y][j] == 6)
                break ;
        }
        for (int x = j - 1; x >= 0; x--)
        {
            if (save[i][x] == 0)
                save[i][x] = -1;
            else if (save[i][x] == 6)
                break ;
        }
        chk_min(save, t - 1);

        memcpy(save, a, sizeof(save));
        for (int y = i + 1; y < n ; y++)
        {
            if (save[y][j] == 0)
                save[y][j] = -1;
            else if (save[y][j] == 6)
                break ;
        }
        for (int x = j - 1; x >= 0; x--)
        {
            if (save[i][x] == 0)
                save[i][x] = -1;
            else if (save[i][x] == 6)
                break ;
        }
        for (int x = j + 1; x < m ; x++)
        {
            if (save[i][x] == 0)
                save[i][x] = -1;
            else if (save[i][x] == 6)
                break ;
        }
        chk_min(save, t - 1);

        memcpy(save, a, sizeof(save));
        for (int y = i - 1; y >= 0; y--)
        {
            if (save[y][j] == 0)
                save[y][j] = -1;
            else if (save[y][j] == 6)
                break ;
        }
        for (int y = i + 1; y < n ; y++)
        {
            if (save[y][j] == 0)
                save[y][j] = -1;
            else if (save[y][j] == 6)
                break ;
        }
        for (int x = j + 1; x < m ; x++)
        {
            if (save[i][x] == 0)
                save[i][x] = -1;
            else if (save[i][x] == 6)
                break ;
        }
        chk_min(save, t - 1);
    }
    else
    {
        memcpy(save, a, sizeof(save));
        for (int y = i - 1; y >= 0; y--)
        {
            if (save[y][j] == 0)
                save[y][j] = -1;
            else if (save[y][j] == 6)
                break ;
        }
        for (int y = i + 1; y < n ; y++)
        {
            if (save[y][j] == 0)
                save[y][j] = -1;
            else if (save[y][j] == 6)
                break ;
        }
        for (int x = j - 1; x >= 0; x--)
        {
            if (save[i][x] == 0)
                save[i][x] = -1;
            else if (save[i][x] == 6)
                break ;
        }
        for (int x = j + 1; x < m ; x++)
        {
            if (save[i][x] == 0)
                save[i][x] = -1;
            else if (save[i][x] == 6)
                break ;
        }
        chk_min(save, t - 1);
    }
}

int main()
{
    cin >> n >> m;

    int t = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin >> a[i][j];
            if (a[i][j] != 6)
            {
                ans++;
                if (a[i][j])
                {
                    w[t][0] = i;
                    w[t++][1] = j;
                }
            }
        }
    }
    chk_min(a, t - 1);
    cout << ans;
}
