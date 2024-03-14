#include<bits/stdc++.h>

using namespace std;

string so(int n){
    if(n==8) return "eight";
    else if(n==7) return "seven";
    else if(n==6) return "six";
    else if(n==5) return "five";
    else if(n==4) return "four";
    else if(n==3) return "three";
    else if(n==2) return "two";
    else if(n==9) return "nine";
    else return "one";
}

int main(){
    int n;
    cin>>n;
    if(n>0&&n<=9){
        cout<<so(n);
    }
    else cout<<"Greater than 9";
    return 0;
}

