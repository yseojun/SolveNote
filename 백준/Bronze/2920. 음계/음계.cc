#include <iostream>
using namespace std;
int main() 
{
	int n[8], a = 0;
	for (int i = 0; i < 8; i++)
		cin >> n[i];
	for (int i = 0; i < 8; i++) 
	{
		if (i + 1 == n[i])
			a = 1;
		else
		{
			for (int i = 8; i > 0; i--)
			{
				if (i == n[8-i])
					a = 2;
				else
				{
					printf("mixed");
					return 0;
				}
			}
		}
	}
	if (a == 1)
		printf("ascending");
	else
		printf("descending");
}