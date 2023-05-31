#include <iostream>
using namespace std;
int n;
int mn[3];
int mx[3];
int main()
{
	cin >> n;
	int tmp[3];
	cin >> mn[0] >> mn[1] >> mn[2];
	mx[0] = mn[0];
	mx[1] = mn[1];
	mx[2] = mn[2];
	for (int i = 1; i < n; i++)
	{
		int mns;
		int mxs;
		cin >> tmp[0] >> tmp[1] >> tmp[2];
		int tmp0 = mx[0];
		int tmp2 = mx[2];
		mx[0] = max(mx[0], mx[1]) + tmp[0];
		mx[2] = max(mx[1], mx[2]) + tmp[2];
		mx[1] = max(max(tmp0, mx[1]), tmp2) + tmp[1];
		tmp0 = mn[0];
		tmp2 = mn[2];
		mn[0] = min(mn[0], mn[1]) + tmp[0];
		mn[2] = min(mn[1], mn[2]) + tmp[2];
		mn[1] = min(min(tmp0, mn[1]), tmp2) + tmp[1];
	}
	int mxo = max(max(mx[0], mx[1]), mx[2]);
	int mno = min(min(mn[0], mn[1]), mn[2]);
	cout << mxo << " " << mno;
}
