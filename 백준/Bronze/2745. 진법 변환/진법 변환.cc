#include <iostream>
using namespace std;
int main()
{
	string	s;
	int	n;
	cin >> s >> n;
	int ans = 0;
	int d = 1;
	for (int i = s.length() - 1; i >= 0; i--)
	{
		int tmp;
		if ('0' <= s[i] && s[i] <= '9')
			tmp = s[i] - '0';
		else if ('A' <= s[i] && s[i] <= 'Z')
			tmp = s[i] - 'A' + 10;
		ans = ans + tmp * d;
		d *= n;
	}
	cout << ans;
}