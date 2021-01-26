#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        if (n <= 2)
        {
            cout << 1 << endl;
            continue;
        }
        long double c = double(n - 3) / double(x);
        cout << floor(c) + 2 << endl;
    }
    return 0;
}