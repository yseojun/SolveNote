#include <iostream>
#include <cstdio>
 
using namespace std;
int N, K, P, X;
int diff[10][10];
int rl[7];
int ans = 0;

void    make_diff(void)
{
    int ar[10][7] = {{1, 1, 1, 0, 1, 1, 1}, {0, 0, 1, 0, 0, 1, 0}, {1, 0, 1, 1, 1, 0, 1}, {1, 0, 1, 1, 0, 1, 1}, {0, 1, 1, 1, 0, 1, 0}
                    ,{1, 1, 0, 1, 0, 1, 1}, {1, 1, 0, 1, 1, 1, 1}, {1, 0, 1, 0, 0, 1, 0}, {1, 1, 1, 1, 1, 1, 1}, {1, 1, 1, 1, 0, 1, 1}};
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            int cnt = 0;
            for (int k = 0; k < 7; k++)
            {
                if (ar[i][k] != ar[j][k])
                    cnt++;
            }
            diff[i][j] = cnt;
        }
    }
}

void    sol(int idx, int a[7])
{
    if (idx == K)
    {
        int flr = 0;
        for (int i = 0; i < K; i++)
        {
            flr *= 10;
            flr += a[i];
        }
        if (flr < 1 || flr > N)
            return ;
        int chg = 0;
        for (int i = 0; i < K; i++)
            chg += diff[a[i]][rl[i]];
        if (1 <= chg && chg <= P)
            ans++;
        return ;
    }
    for (int i = 0; i < 10; i++)
    {
        a[idx] = i;
        sol(idx + 1, a);
    }
}

void make_rl(void)
{
    int n = X;
    for (int i = 1; i <= K; i++)
    {
        int tmp;
        tmp = n % 10;
        rl[K - i] = tmp;
        n /= 10;
    }
}

int main()
{
    cin >> N >> K >> P >> X;
    make_diff();
    make_rl();
    int fk[7];
    sol(0, fk);
    cout << ans;
}