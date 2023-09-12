#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int ch[4];
    cin >> ch[1] >> ch[2] >> ch[3];
    ch[0] = 0;
    int arr[102] = {0,};

    for (int i = 0; i < 3; i++)
    {
        int ar, de;
        cin >> ar >> de;
        for (int k = ar; k < de; k++)
        {
            arr[k]++;
        }
    }
    
    int sum = 0;
    for (int i = 1; i <= 100; i++)
    {
        sum += ch[arr[i]] * arr[i];
    }
    cout << sum;
}
