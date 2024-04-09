#include <bits/stdc++.h>

using namespace std;

bool xau_doi_xung(string s)
{
    int len=s.length();
    for(int i=0;i<len;i++)
    {
        if(s[i]!=s[len-i-1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
   int n;
   cin>>n;
   while(n--)
   {
    string s;
   cin>>s;
   string s1=s;
   int len=s.length();
   if(xau_doi_xung(s)==true)
   {
       cout<<"-1"<<endl;
   } 
   else 
   {
       for(int i=0;i<len;i++)
       {
           s1=s1.erase(i,1);
           if(xau_doi_xung(s1)==true) {
               cout<<i<<endl;
                break;
           }
           s1=s;
       }
   }
   }
   return 0;
}

