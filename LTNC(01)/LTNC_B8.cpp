#include <bits/stdc++.h>
using namespace std;

bool ktra(const vector<int>& a) {
    int sumtr = 0;
    int sump = accumulate(a.begin(), a.end(), 0);

    for (int i = 0; i < a.size(); i++) {
        sump -= a[i];
        if (sumtr == sump)
            return true;
        sumtr += a[i];
    }
    return false;
}

int main() {
    int n;
    cin >> n;
    while (n--) {
        int x;
        cin >> x;
        vector<int> a(x);
        for (int& val : a) {
            cin >> val;
        }
        cout << (ktra(a) ? "YES" : "NO") << endl;
    }
    return 0;
}

