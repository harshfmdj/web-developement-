#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int x, y, k;
        cin >> x >> y >> k;
        long long int a = (y + 1) * k;
        long long int c = ((a + x - 3) / (x - 1));
        long long int z = c + k;
        cout << z << endl;
    }
}