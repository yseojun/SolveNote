#include <iostream>
#include <algorithm>
using namespace std;

int N, M;
int cnt = 0;
int a[10];
int prt[10];
bool chk[10] = { false };

void    solve(int idx)
{
    if (idx == M)
    {
        for (int i = 0; i < M; i++)
            cout << prt[i] << " ";
        cout << endl;
        return ;
    }
    int last = 0;
    for (int i = 0; i < N; i++)
    {
        if (!chk[i] && a[i] != last)
        {
            prt[idx] = a[i];
            last = prt[idx];
            chk[i] = true;
            solve(idx + 1);
            chk[i] = false;
        }
    }
}

int main()
{
    cin >> N >> M;
    for (int i = 0; i < N; i++)
        cin >> a[i];
    sort(a, a + N);
    solve(0);
}
