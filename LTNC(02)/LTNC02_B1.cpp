#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        vector<int>a;
        int cnt=0;
        int x;
        cin>>x;
        while(x!=0){
            int tmp=x%10;
            a.push_back(tmp);
            cnt++;
            tmp=tmp/10;
        }
        int cnt1=0;
        for(int i=0;i<cnt;i++){
            if(a[i]!=0&&x%a[i]==0) cnt1++;
        }
        cout<<cnt1<<endl;
    }
    return 0;
}

