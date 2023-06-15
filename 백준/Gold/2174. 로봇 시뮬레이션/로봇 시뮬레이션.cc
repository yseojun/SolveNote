#include <iostream>
using namespace std;

int a,b;
int n,m;

int w[101][2];
int d[101];

int mp[101][101];

int do_cmd(int num, char cmd)
{
    if (cmd == 'R')
    {
        d[num]++;
        if (d[num] == 4)
            d[num] = 0;
    }
    else if (cmd == 'L')
    {
        d[num]--;
        if (d[num] == -1)
            d[num] = 3;
    }
    else if (cmd == 'F')
    {
        int x,y;
    
        mp[w[num][0]][w[num][1]] = 0;
        x = w[num][0];
        y = w[num][1];
        switch (d[num])
        {
            case 0:
                y++;
                break;
            case 1:
                x++;
                break;
            case 2:
                y--;
                break;
            case 3:
                x--;
                break;
        }
        if (y < 1 || b < y || x < 1 || a < x)
        {
            cout << "Robot " << num << " crashes into the wall" << endl;
            return (1);
        }
        else if (mp[x][y])
        {
            cout << "Robot " << num << " crashes into robot " << mp[x][y] << endl;
            return (1);
        }
        else
        {
            mp[x][y] = num;
            w[num][0] = x;
            w[num][1] = y;
        }
    }
    return (0);
}

int main()
{
    cin >> a >> b >> n >> m;
    for (int i = 0; i < 101; i++)
    {
        for (int j = 0; j < 101; j++)
            mp[i][j] = 0;
    }
    for (int i = 1; i <= n; i++)
    {
        char tmp;
        cin >> w[i][0] >> w[i][1] >> tmp;
        switch (tmp)
        {
            case 'N':
                d[i] = 0;
                break ;
            case 'E':
                d[i] = 1;
                break ;
            case 'S':
                d[i] = 2;
                break ;
            case 'W':
                d[i] = 3;
                break ;
        }
        mp[w[i][0]][w[i][1]] = i;
    }
    for (int i = 0; i < m; i++)
    {
        int num, cnt;
        char cmd;
        cin >> num >> cmd >> cnt;
        while (cnt)
        {
            if (do_cmd(num, cmd) == 1)
                return (0);
            cnt--;
        }
    }
    cout << "OK";
}
