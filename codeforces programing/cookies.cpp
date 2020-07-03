#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long int a, b, n, m;
        cin >> a >> b >> n >> m;
        if ((a + b) < (n + m))
        {
            cout << "NO" << endl;
        }
        else
        {
            if ((a >= m) && (b >= m))
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}