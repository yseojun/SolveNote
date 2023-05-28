#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n; 
	int max = 0;
	int all = 0;
	int tmp;
	for (int i = 0; i < n; i++)
	{
		cin >> tmp;
		all += tmp;
		if (max < tmp)
			max = tmp;
	}
	cout << (double)all / max * 100 / n;
}