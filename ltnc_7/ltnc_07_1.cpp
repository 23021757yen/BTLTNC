#include <bits/stdc++.h>

using namespace std;

bool binary_(int *a, int left, int right, int x)
{
	if(left>right)
	{
		int mid=(left+right)/2;
		if(a[mid]==x)
		{
			return true;
		}
		else if(a[mid]>x)
		{
			return binary_(a,a[mid]+1,right,x);
		}
		else if(a[mid]<x)
		{
			return binary_(a,left,a[mid]-1,x);
		}
    }
    else 
    {
    	int mid=(left+right)/2;
		if(a[mid]==x)
		{
			return true;
		}
		else if(a[mid]>x)
		{
			return binary_(a,left,a[mid]-1,x);
		}
		else if(a[mid]<x)
		{
			return binary_(a,a[mid]+1,right,x);
		}
	}
}

int main()
{
	int n;
	cin>>n;
	int x;
	cin>>x;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
    }
    if(binary_(a,0,n-1,x))
    {
    	cout<<"yes";
	}
	else cout<<"no";
	return 0;
}
