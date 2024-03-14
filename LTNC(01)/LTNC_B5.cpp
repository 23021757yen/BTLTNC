#include <iostream>
#include <cstdio>
#include<bits/stdc++.h>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int main() {
    int a[100];
    for(int i=0;i<4;i++){
        cin>>a[i];
    }
    sort(a,a+4);
    cout<<a[3];
    return 0;
}

