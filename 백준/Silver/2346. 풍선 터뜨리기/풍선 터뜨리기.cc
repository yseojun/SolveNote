#include <iostream>
using namespace std;

int N;
int b[2001];

int main()
{
    cin >> N;
    for (int i = 1; i <= N; i++)
        cin >> b[i];
    int c = 0;
    int n = 1;
    while (c < N)
    {
        cout << n << " ";
        int chk = n;
        if (c + 1 == N)
        {
            c++;
            continue ;
        }
        if (b[n] < 0)
        {
            chk--;
            while (b[n])
            {
                if (chk < 0)
                    chk = N;
                if (chk == n)
                    chk--;
                if (b[chk])
                {
                    b[n]++;
                    if (!b[n])
                        break ;
                }
                chk--;
            }
        }
        else
        {
            chk++;
            while (b[n])
            {
                if (chk > N + 1)
                    chk = 1;
                if (chk == n)
                    chk++;
                if (b[chk])
                {
                    b[n]--;
                    if (!b[n])
                        break ;
                }
                chk++;
            }
        }
        n = chk;
        c++;
    }
}
