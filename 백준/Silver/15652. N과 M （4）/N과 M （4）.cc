#include <iostream>
using namespace std;

int n, m;
int a[8];

void    back(int c, int s[8])
{
    if (c == m - 1)
    {
        for (int i = 0; i < m; i++)
        {
            if (i != 0)
                cout << " ";
            cout << s[i];
        }
        cout << endl;
        return ;
    }
    for (int i = s[c]; i <= n; i++)
    {
        s[c + 1] = i;
        back(c + 1, s);
    }
}

int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        a[0] = i;
        back(0, a);
    }
}
