#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[100] = {0,};
    string  s;
    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        arr[s[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        cout << arr[i] << " ";
    }
}
