#include <iostream>
#include <queue>

using namespace std;

queue<int> nm;
queue<int> cnt;
int N;
int A[1001];
bool V[1001];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

    cin >> N;
    for (int i = 1; i <= N; i++)
        V[i] = false;
    for (int i = 1; i <= N; i++)
        cin >> A[i];
    nm.push(1);
    cnt.push(0);
    while (!nm.empty())
    {
        int x = nm.front();
        int c = cnt.front();
        nm.pop();
        cnt.pop();

        if (x == N)
        {
            cout << c;
            return 0;
        }
        if (V[x] == true)
            continue ;
        V[x] = true;
        for (int i = 1; i <= A[x]; i++)
        {
            nm.push(x + i);
            cnt.push(c + 1);
        }
    }
    cout << -1;
	return 0;
}
