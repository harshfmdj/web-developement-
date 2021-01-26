#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int cn[n][m];
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>cn[i][j];
            mp[cn[i][j]]=1;
        }
    }
    


}