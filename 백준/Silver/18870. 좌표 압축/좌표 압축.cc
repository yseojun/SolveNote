#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N;
	cin >> N;
	vector<int> v(N);
	for (int i = 0; i < N; i++)
		cin >> v[i];
	vector<int> cp(v);
	sort(cp.begin(), cp.end());
	cp.erase(unique(cp.begin(), cp.end()), cp.end());
	for (int i = 0; i < N; i++)
	{
		vector<int>::iterator it = lower_bound(cp.begin(), cp.end(), v[i]);
		cout << it - cp.begin() << ' ';
	}
}
