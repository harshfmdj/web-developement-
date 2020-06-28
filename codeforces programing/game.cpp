#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int x = 0, y = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '0')
            {
                x += 1;
            }
            else
            {
                y += 1;
            }
        }
        x = min(x, y);
        if (x % 2 == 0)
        {
            cout << "NET" << endl;
        }
        else
        {
            cout << "DA" << endl;
        }
    }
    return 0;
}