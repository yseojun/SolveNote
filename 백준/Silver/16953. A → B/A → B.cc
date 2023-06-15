#include <iostream>
#include <queue>
using namespace std;

long long A,B;
int bfs()
{
	queue<long long> que;
	queue<long long> que2;
	que.push(A);
	que2.push(1);
	while(!que.empty())
	{
		long long tmp = que.front();
        long long cnt = que2.front();
		que.pop();
		que2.pop();
        if (tmp == B)
            return cnt;
        else if (tmp > B)
            continue ;
        que2.push(cnt + 1);
        que2.push(cnt + 1);
        que.push(tmp * 2);
        que.push(tmp * 10 + 1);
	}
	return -1;
}
int main()
{
    cin >> A >> B;
    cout << bfs();
}
