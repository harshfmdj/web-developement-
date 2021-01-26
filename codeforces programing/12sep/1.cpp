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
        vector<int> a(n);
        vector<int> dp(101, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            dp[a[i]]++;
        }
        int x = 0;
        int ans = 0;
        for (int i = 0; i <= 100; i++)
        {
            if (dp[i] == 0)
            {
                ans += dp[i];
                x++;
                if (x == 2)
                {
                    break;
                }
            }
        }
        cout << ans << endl;
    }
}