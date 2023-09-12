#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N,M;
    cin >> N >> M;
    int arr[15001];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    int sum = 0;
    for (int i = 0; i + 1 < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            int tmp = arr[i] + arr[j];
            if (tmp == M)
                sum++;
        }
    }
    cout << sum;
}
