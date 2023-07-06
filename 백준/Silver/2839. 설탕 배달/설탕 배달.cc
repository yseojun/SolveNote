#include <iostream>
using namespace std;

int main()
{
    int ans = -1;
    int N;
    cin >> N;
    int cnt;
    cnt = N / 3;
    for (int i = cnt; i >= 0; i--)
    {
        if ((N - i * 3) % 5 == 0)
        {
            int tmp;
            tmp = i + (N - i * 3) / 5;
            if (ans == -1 || ans > tmp)
                ans = tmp;
        }
    }
    cout << ans;
}
