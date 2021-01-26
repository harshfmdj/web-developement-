#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
    cout << "enter the text:-";
    cin >> a;
    cout << "enter the pattern to be found:-";
    cin >> b;
    //now i going to implement the rabin karp algorithm of string matching best of luck for me
    int sum = 0;
    int n = a.size(), m = b.size();
    for (int i = 0; i < b.size(); i++)
    {
        sum = sum * 10 + (int(b[i]) - 96);
    }
    if (m > n)
    {
        cout << "patter length greater than text" << endl;
    }
    int var = 0;
    for (int i = 0; i < m; i++)
    {
        var = var * 10 + (int(a[i]) - 96);
    }
    if (var == sum)
    {
        cout << "patter found at index"
             << " " << 0 << endl;
    }
    for (int i = m; i < n; i++)
    {
        var = (var - (int(a[i - m] - 96) * pow(10, m - 1))) * 10 + (int(a[i]) - 96);
        if (var == sum)
        {
            cout << "pattern found at index"
                 << " " << i - m + 1 << endl;
        }
    }
}