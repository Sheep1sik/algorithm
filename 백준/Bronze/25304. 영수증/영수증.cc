#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int x, n, a, b, t;
    t = 0;
    cin >> x  >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        t = t + (a * b);
    }

    if (x == t) {
        cout << "Yes" << "\n";
    } else {
        cout << "No" << "\n";
    }

    return 0;
}