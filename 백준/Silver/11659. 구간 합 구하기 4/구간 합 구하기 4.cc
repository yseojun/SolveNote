#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int N, M, i, j;
	int	arr[100001];
	cin >> N >> M;
	arr[0] = 0;
	for (int k = 1; k <= N; k++)
	{
		int tmp;
		cin >> tmp;
		arr[k] = tmp + arr[k - 1];
	}
	for (int k = 0; k < M; k++)
	{
		cin >> i >> j;
		cout << arr[j] - arr[i - 1] << '\n';
	}
}
