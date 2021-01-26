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
        vector<int> mat(n, 0);
        int ze = 0, on = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> mat[i];
            if (mat[i] == 0)
            {
                ze++;
            }
        }
        on = n - ze;
        if (ze >= n / 2)
        {
            cout << ze << endl;
            for (int i = 0; i < ze; i++)
            {
                cout << 0 << " ";
            }
        }
        else
        {
            cout << on - on % 2 << endl;
            for (int i = 0; i < on - on % 2; i++)
            {
                cout << 1 << " ";
            }
        }
    }
}