#include <iostream>
#include <queue>
using namespace std;

int b = 0;
int w = 0;

void    recur(int y, int x, int n, int mp[200][200])
{
    int prev;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 && j == 0)
                prev = mp[y + i][x + j];
            else
            {
                if (prev != mp[y + i][x + j])
                {
                    recur(y, x, n / 2, mp);
                    recur(y + n / 2, x, n / 2, mp);
                    recur(y, x + n / 2, n / 2, mp);
                    recur(y + n / 2, x + n / 2, n / 2, mp);
                    return ;
                }
            }
        }
    }
    if (prev == 0)
        w++;
    else
        b++;
}

int main()
{
    int N;
    int mp[200][200];
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            cin >> mp[i][j];
    }
    recur(0, 0, N, mp);
    cout << w << endl << b;
}
