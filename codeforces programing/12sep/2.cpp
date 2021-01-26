#include <bits/stdc++.h>
using namespace std;
long long int a[100010];
int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int i = 0;
        long long int ans[5];
        for (i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        ans[0] = a[n - 1] * a[n - 2] * a[n - 3] * a[n - 4] * a[n - 5];
        ans[1] = a[n - 1] * a[n - 2] * a[n - 3] * a[0] * a[1];
        ans[2] = a[n - 1] * a[1] * a[2] * a[3] * a[0];
        cout << max(max(ans[0], ans[1]), ans[2]) << endl;
    }
}