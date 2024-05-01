#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    map<string,int>mp;
    while(n--)
    {
        int type;
        string name;
        cin>>type>>name;
        if(type==1)
        {
            int mark;
            cin>>mark;
            mp[name]+=mark;
        }
        if(type==2)
        {
            mp[name]=0;
        }
        if(type==3)
        {
            cout<<mp[name]<<endl;
        }
    }
    return 0;
}
