#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    int n;
    cin >> n;
    while (i <= n)
    {
        for (int j = 0;j < i; j++)
            cout << '*';
        cout << '\n';
        i++;
    }
}