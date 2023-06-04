#include <iostream>
using namespace std;
int n;
int a[51];
int b[51];
int main()
{
	cin >> n;
	for (int i = 0;i < n;i++)
		cin >> a[i];
	for (int i = 0;i < n;i++)
		cin >> b[i];
	for (int i = 0;i < n;i++)
	{
		int val = a[i];
        int swap = i;
        while (swap > 0 && a[swap - 1] > val)
		{
            a[swap] = a[swap - 1];
            swap--;
		}
        a[swap] = val;
	}
	for (int i = 0;i < n;i++)
	{
		int val = b[i];
		int swap = i;
		while (swap > 0 && b[swap - 1] < val)
		{
			b[swap] = b[swap - 1];
			swap--;
		}
		b[swap] = val;
	}
	int ans = 0;
	for (int i = 0;i < n;i++)
		ans += a[i] * b[i];
	cout << ans << endl;
}