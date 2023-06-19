#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;
    for (int i = 666; i < 100000000; i++)
    {
        int streak = 0;
        int tmp = i;
        while (tmp)
        {
            if (tmp % 10 == 6)
                streak++;
            else
                streak = 0;
            if (streak == 3)
            {
                count++;
                break;
            }
            tmp /= 10;
        }
        if (count == n)
        {
            cout << i << endl;
            break;
        }
    }
}
