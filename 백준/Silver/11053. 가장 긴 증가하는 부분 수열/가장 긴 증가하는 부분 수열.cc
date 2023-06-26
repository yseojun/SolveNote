#include <iostream>
#include <cstdio>
 
using namespace std;
int N;
int A[1001];
int C[1001];
int mx = 1;

int main()
{
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    C[0] = 1;
    for (int i = 1; i < N; i++)
    {
        int c = 0;
        for (int j = i - 1; j >= 0; j--)
        {
            if (A[i] > A[j])
                c = max(c, C[j]);
        }
        C[i] = c + 1;
        mx = max(C[i], mx);
    }
    cout << mx;
}