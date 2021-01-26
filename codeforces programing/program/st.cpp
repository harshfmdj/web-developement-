#include <bits/stdc++.h>
using namespace std;
vector<int> lcs(string b)
{
    int i = 0;
    vector<int> ans(b.size(), 0);
    for (int c = 1; c < b.size(); c++)
    {
        if (b[c] == b[i])
        {
            i++;
            ans[c] = i;
        }
        else
        {
            if (i != 0)
            {
                i = ans[i - 1];
                c--;
            }
            else
            {
                ans[c] = 0;
            }
        }
    }
    return ans;
}
void check(string a, string b, vector<int> lcs)
{
    int i = 0, j = 0;
    int n = a.size(), m = b.size();
    while (i < n)
    {
        if (a[i] == b[j])
        {
            i++;
            j++;
        }
        if (j == m)
        {
            cout << i - j << endl;
            j = lcs[j - 1];
        }
        else if (i < n && a[i] != b[j])
        {
            if (j != 0)
            {
                j = lcs[j - 1];
            }
            else
            {
                i = i + 1;
            }
        }
    }
    return;
}
int main()
{
    string a, b;
    cout << "enter the string" << endl;
    cin >> a;
    cout << "enter the pattern " << endl;
    cin >> b;
    vector<int> ans = lcs(b);
    check(a, b, ans);
}
