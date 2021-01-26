#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        if (x == y || y == z || x == z)
        {
            if (x == y && x >= z)
            {
                cout << "YES" << endl;
                cout << x << " " << 1 << " " << z << endl;
            }
            else if (y == z && y >= x)
            {
                cout << "YES" << endl;
                cout << y << " " << 1 << " " << x << endl;
            }
            else if (x == z && x >= y)
            {
                cout << "YES" << endl;
                cout << x << " " << y << " " << 1 << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}