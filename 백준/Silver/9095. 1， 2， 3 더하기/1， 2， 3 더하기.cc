#include <iostream>

using namespace std;

int ans;

void    recur(int a, int n)
{
    if (a == n)
    {
        ans++;
        return ;
    }
    if (a > n)
        return ;
    for (int i = 1; i < 4; i++)
        recur(a + i, n);
}

int solve(int n)
{
    recur(0, n);
    return (ans);
}

int main()
{
    int n, t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        ans = 0;
        cin >> n;
        cout << solve(n) << endl;
    }
}
