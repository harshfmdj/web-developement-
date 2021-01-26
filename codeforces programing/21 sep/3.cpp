#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int sum = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        if (sum == 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            sort(a, a + n);
            int p = -1;
            sum = 0;
            int neg = 0;
            for (int i = 0; i < n; i++)
            {
                if (a[i] > 0)
                {
                    if (p == -1)
                    {
                        p = i;
                    }
                    sum += a[i];
                }
                else
                {
                    neg += a[i];
                }
            }
            if (p == -1)
            {
                sort(a, a + n, greater<int>());
                cout << "YES" << endl;
                for (int i = 0; i < n; i++)
                {
                    cout << a[i];
                }
            }
            else
            {
                cout << "YES" << endl;
                if ((neg * -1) > sum)
                {
                    for (int i = 0; i < p; i++)
                    {
                        cout << a[i] << " ";
                    }
                    for (int i = n - 1; i >= p; i--)
                    {
                        cout << a[i] << " ";
                    }
                }
                else
                {
                    for (int i = n - 1; i >= p; i--)
                    {
                        cout << a[i] << " ";
                    }
                    for (int i = 0; i < p; i++)
                    {
                        cout << a[i] << " ";
                    }
                }
            }
        }
    }
}