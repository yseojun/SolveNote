#include <iostream>
#include <cstring>
using namespace std;

int m[9][9];

int chk_d(int s[9][9], int y, int x, int i)
{
    for (int j = 0; j < 9; j++)
    {
        if (s[y][j] == i)
            return (0);
    }
    for (int j = 0; j < 9; j++)
    {
        if (s[j][x] == i)
            return (0);
    }
    int by;
    int bx;
    by = (y / 3) * 3;
    bx = (x / 3) * 3;
    int bc = 3;
    int bc2 = 3;
    while (bc)
    {
        int savex = bx;
        int bc2 = 3;
        while (bc2)
        {
            if (s[by][savex++] == i)
                return (0);
            bc2--;
        }
        by++;
        bc--;
    }
    return (1);
}

int    back(int a, int s[9][9])
{
    if (a == 81)
    {
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
                cout << m[i][j];
            cout << endl;
        }
        return (1);
    }

    int y = a / 9;
    int x = a % 9;

    if (m[y][x] == 0)
    {
        for (int i = 1; i <= 9; i++)
        {
            if (chk_d(s, y, x, i) == 1)
            {
                s[y][x] = i;
                if (back(a + 1, s) == 1)
                    return (1);
                s[y][x] = 0;
            }
        }
    }
    else
    {
        if (back(a + 1, s) == 1)
            return (1);
    }
    return (0);
}

int main()
{
    string  s[9];

    for (int i = 0; i < 9; i++)
        cin >> s[i];
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
            m[i][j] = s[i][j] - '0';
    }
    back(0, m);    
}
