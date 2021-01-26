#include <bits/stdc++.h>
using namespace std;
int check(vector<int> &arr, int a)
{
    while (a)
    {
        int x = a % 10;
        if (arr[x])
        {
            return 0;
        }
        a = a / 10;
    }
    return 1;
}
int main()
{
    int st, la;
    cin >> st;
    cin >> la;
    vector<int> arr(la + 1, 0);
    arr[0] = 1;
    arr[1] = 1;
    for (int i = 2; i <= la; i++)
    {
        if (arr[i] == 0)
        {
            int j;
            int x = 2;
            j = i * x;
            while (j <= la)
            {
                arr[j] = 1;
                x++;
                j = i * x;
            }
        }
    }
    int sum = 0;
    for (int i = st; i < la; i++)
    {
        if (arr[i] == 0)
        {
            if (check(arr, i))
            {
                sum += i;
            }
        }
    }
    cout << sum;
}