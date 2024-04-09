#include <bits/stdc++.h>

using namespace std;

int pageCount(int n, int p) {
    int flips_from_start = p / 2;
    int flips_from_end = (n / 2) - (p / 2);
    return min(flips_from_start, flips_from_end);
}

int main()
{
    int n,p;
    cin>>n>>p;
    cout<<pageCount(n,p);
    return 0;
}

