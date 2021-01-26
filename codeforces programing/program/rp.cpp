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
        vector<int> A(2 * n);
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> A[i];
        }
        vector<int> p;
        map<int, int> map;
        for (int i = 0; i < 2 * n; i++)
        {
            if (map.find(A[i]) == map.end())
            {
                p.push_back(A[i]);
                map[A[i]]++;
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << p[i] << " ";
        }
    }
    return 0;
}