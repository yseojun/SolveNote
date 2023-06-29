#include <iostream>
#include <algorithm>
using namespace std;

int N;
int p[1001];
int ans = 0;

int main()
{
    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> p[i];
    sort(p, p + N);
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j <= i; j++)
            ans += p[j];
    }
    cout << ans;
}
