#include <iostream>
using namespace std;
int main() 
{
	int n;
	cin >> n;
	int a;
	for (int i = 0; i < n; i++)
	{
		a = 0;
		string s;
		cin >> s;
		int c = 1;
		for (int idx = 0; idx < s.length(); idx++)
		{
			if (s[idx] == 'O')
				a += c++;
			else
				c = 1;
		}
		cout << a << endl;
	}
}