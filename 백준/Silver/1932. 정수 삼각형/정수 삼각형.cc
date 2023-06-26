#include <iostream>
#include <cstdio>
 
using namespace std;
int N;
int mp[501][501];

int main()
{
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j <= i; j++)
            cin >> mp[i][j];
    }
    for (int i = 1; i < N; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0)
                mp[i][0] += mp[i - 1][0];
            else if (j == i)
                mp[i][i] += mp[i - 1][i - 1];
            else
                mp[i][j] = mp[i][j] + max(mp[i - 1][j - 1], mp[i - 1][j]);
        }
    }
    int ans = 0;
    for (int i = 0; i < N; i++)
    {
        if (ans < mp[N - 1][i])
            ans = mp[N - 1][i];
    }
    cout << ans;
}