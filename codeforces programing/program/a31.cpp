#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n > 30)
        {
            cout << "YES" << endl;
            if (n - 30 == 6)
            {
                cout << 6 << " " << 5 << " " << 10 << " " << 15 << endl;
            }
            else if (n - 30 == 10)
            {
                cout << 6 << " " << 9 << " " << 10 << " " << 15 << endl;
            }
            else if (n - 30 == 14)
            {
                cout << 6 << " " << 7 << " " << 10 << " " << 21 << endl;
            }
            else
            {
                cout << 6 << " " << 10 << " " << 14 << " " << n - 30 << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
