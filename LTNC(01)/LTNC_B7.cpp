#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int cnt=0,cnt1=0,cnt2=0;
    for(int i=0;i<n;i++){
        if(a[i]==0) cnt++;
        else if(a[i]<0) cnt1++;
        else cnt2++;
    }
    cout<<fixed<<setprecision(6)<<(float)cnt2/n<<endl<<(float)cnt1/n<<endl<<(float)cnt/n;
    return 0;
}

