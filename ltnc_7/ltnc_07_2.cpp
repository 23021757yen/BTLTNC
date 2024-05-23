#include <bits/stdc++.h>

using namespace std;
string mix(int x)
{
	if(x==0) return "a";
	else if(x==1) return "b";
	else if(x==2) return "c";
	else return "d";
}
int main()
{
	string res="";
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			for(int k=0;k<4;k++)
			{
				res=mix(i)+mix(j)+mix(k);
				cout<<res<<" ";
				res="";
			}
		}
	}
	return 0;
}
