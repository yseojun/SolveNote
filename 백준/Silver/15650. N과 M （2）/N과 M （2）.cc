#include <iostream>
using namespace std;
int n,m;
void	prt(int *o)
{
	for (int i=1;i<=m;i++)
		cout << o[i] << " ";
	cout << endl;
	if (o[1] == n - m + 1)
		return ;
	if (o[m] != n)
	{
		o[m]++;
		prt(o);
	}
	else
	{
		int j = m;
		int k = n;
		while (o[j] == k)
		{
			j--;
			k--;
		}
		o[j++]++;
		while (j <= m)
		{
			o[j] = o[j - 1] + 1;
			j++;
		}
		prt(o);
	}
}
int main()
{
	cin >> n >> m;
	int o[9];
	for (int i=1;i<9;i++)
		o[i] = i;
	prt(o);
}