#include <iostream>
#include <cstdio>
 
using namespace std;
int N;
int mp[1001][3];

int main()
{
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < 3; j++)
            cin >> mp[i][j];
    }
    for (int i = 1; i < N; i++)
    {
        mp[i][0] = mp[i][0] + min(mp[i - 1][1], mp[i - 1][2]);
        mp[i][1] = mp[i][1] + min(mp[i - 1][0], mp[i - 1][2]);
        mp[i][2] = mp[i][2] + min(mp[i - 1][0], mp[i - 1][1]);
    }
    cout << min(mp[N - 1][0], min(mp[N - 1][1], mp[N - 1][2]));
}