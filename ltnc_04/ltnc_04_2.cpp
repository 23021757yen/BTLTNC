#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<int,int>mp;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        mp[a[i]]++;
    }
    int b[n],c[n],cnt=0;
    for(int i=0;i<n;i++)
    {
        if(mp[a[i]]!=0)
        {
            b[cnt]=a[i];
            c[cnt]=mp[a[i]];
            cnt++;
        }
        mp[a[i]]=0;
    }
    for(int i=0;i<cnt;i++)
    {
        for(int j=i+1;j<cnt;j++)
        {
            if(c[i]<c[j]) 
            {
                swap(c[i],c[j]);
                swap(b[i],b[j]);
            }
        }
    }
    cout<<n-c[0];
    return 0;
}
