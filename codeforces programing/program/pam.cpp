#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "enter number of elements" << endl;
    cin >> n;
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++)
    {
        cout << "enter the element" << endl;
        cin >> a[i];
    }
    int x = unique(a.begin(), a.end()) - a.begin();
    cout << "Elements after performing unique function" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i];
    }
    cout << "number of different elements" << x;
}
