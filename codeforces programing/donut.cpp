#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int ans1, ans2;
        if (a >= c)
        {
            ans1 = -1;
        }
        else
        {
            ans1 = (c - 1) / a;
        }
        if ((c / b) >= a)
        {
            ans2 = -1;
        }
        else
        {
            ans2 = b;
        }

        cout << ans1 << " " << ans2 << endl;
    }
    return 0;
}