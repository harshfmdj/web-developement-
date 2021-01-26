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
        int x;
        cin >> x;
        int o1 = 0, e1 = 0, o2 = 0, e2 = 0;
        int i = 0;
        int c = n / 2, d = n / 2;
        if (n % 2 == 0)
        {
            d = d - 1;
        }
        while (x)
        {
            int rem = x % 10;
            x = x / 10;
            if (i == 0)
            {
                if (rem % 2 == 0)
                {
                    e1++;
                }
                else
                {
                    o1++;
                }
                i = 1;
            }
            else
            {
                if (rem % 2 == 0)
                {
                    e2++;
                }
                else
                {
                    o2++;
                }
                i = 0;
            }
        }
        i = e1;
        e1 = e1 - c;
        c = c - i;
        if (c > 0)
        {
            o1 = o1 - c;
        }
        i = o2;
        o2 = o2 - d;
        d = d - i;
        if (d > 0)
        {
            e2 = e2 - d;
        }

        if ((o1 > 0) || (o2 > 0))
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 2 << endl;
        }
    }
}