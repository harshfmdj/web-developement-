#include <bits/stdc++.h>
using namespace std;
void quick(int low, int high, vector<int> &A)
{
    if (low < high)
    {
        srand(time(0));
        int i = low - 1;
        int pivot = A[rand() % (high - low + 1) + low];
        for (int j = low; j <= high; j++)
        {
            if (pivot > A[j])
            {
                i++;
                swap(A[i], A[j]);
            }
        }
        swap(A[i + 1], A[high]);
        quick(low, i, A);
        quick(i + 2, high, A);
    }
}
int main()
{
    vector<int> vect(8);
    for (int i = 0; i < 8; i++)
    {
        cin >> vect[i];
    }
    quick(0, vect.size() - 1, vect);
    cout << vect[0];
    for (int i = 0; i < vect.size(); i++)
    {
        cout << vect[i];
    }
}