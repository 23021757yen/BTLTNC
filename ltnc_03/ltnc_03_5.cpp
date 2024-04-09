#include <bits/stdc++.h>

using namespace std;

bool ktr ( string s)
{
    string goc= "hackerrank";
    int index=0;
    int len_goc=goc.length();
    int len= s.length();
    for(int i=0;i<len;i++)
    {
        if(s[i]==goc[index])
        {
            index++;
        }
    }
    if(index==len_goc) return true;
    else return false;
}

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string x;
        cin>>x;
        if(ktr(x)==true)
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
   }
   return 0;
}
