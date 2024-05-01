#include <bits/stdc++.h>

using namespace std;

int main()
{
    set<int>s;
    int n;
    cin>>n;
    while(n--)
    {
        int type,x;
        cin>>type>>x;
        if(type==1)
        {
            s.insert(x);
        }
        if(type==2)
        {
            s.erase(x);
        }
        if(type==3)
        {
            auto its= s.find(x);
            if(its!=s.end())
            {
                cout<<"Yes"<<endl;
            }
            else cout<<"No"<<endl;
        }
    }
    return 0;
}
