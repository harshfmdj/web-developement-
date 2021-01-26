#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<string,int> ap;
    string  a[5];
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
        ap[a[i]]++;
    }
    cout<<ap.size()
}