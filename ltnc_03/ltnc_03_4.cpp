#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int cnt=1;
    int len=s.length();
    for(int i=0;i<len;i++)
    {
        if(isupper(s[i]))
        {
         cnt++;
        }
    }
    cout<<cnt;
    return 0;
}
