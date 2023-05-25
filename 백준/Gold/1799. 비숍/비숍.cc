#include <iostream>
using namespace std;
int n;
int ans[2];
int m[10][10];
int l[20];
int r[20];
void back(int y, int x, int cnt, int color)
{
    if (x >= n) {
        y++;
        if (x % 2 == 0) x = 1;
        else x = 0;
    }
    if (y >= n) {
        ans[color] = max(ans[color], cnt);
        return;
    }
    if (m[y][x] && !l[x - y + n - 1] && !r[y + x])
    {
        l[x - y + n - 1] = r[y + x] = 1;
        back(y, x+2, cnt + 1, color);
        l[x - y + n - 1] = r[y + x] = 0;
    }
    back(y, x+2, cnt, color);
}
int main(void)
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> m[i][j];
    }
    back(0, 0, 0, 0);
    back(0, 1, 0, 1);
    cout << ans[0] + ans[1];
    return 0;
}
