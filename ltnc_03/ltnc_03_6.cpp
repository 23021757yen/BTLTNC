#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int so;
    cin>>so;
    int x;
    for(int i=0;i<n;i++)
    {
        if(isalpha(s[i]))
        {
            x=int(s[i])+so%26;
            if(isupper(s[i]))
            {
                if(x>90)
                {
                    s[i]=char(x-26);
                }
                else
                {
                    s[i]=char(x);
                }
            }
            else if( islower(s[i]))
            {
                if(x>122)
                {
                    s[i]=char(x-26);
                }
                else
                {
                    s[i]=char(x);
                }
            }
        }
    }
    cout<<s;
    return 0;
}
