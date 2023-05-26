#include <iostream>
using namespace std;
int m = 1;
int a,b,c;
int pow(int cnt)
{
	if (cnt == 1)
		return a % c;
	else
	{
		long long p = pow(cnt / 2) % c;
		if (cnt % 2)
			return p * p % c * a % c;
		else
			return p * p % c;
	}

}
int main()
{
	cin >> a >> b >> c;
	cout << pow(b);
}
