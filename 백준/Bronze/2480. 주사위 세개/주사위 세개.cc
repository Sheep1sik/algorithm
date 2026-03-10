#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c;
    
    cin >> a >> b >> c;

    // 규칙 1
    if ((a == b) && (b == c)) {
        cout << 10000 + (a * 1000);
    }

    // 규칙 2
    else if ((a == b) || (a == c)) {
        cout << 1000 + a * 100;
    } else if (b == c) {
        cout << 1000 + b * 100;
    }

    // 규칙 3
    else {
        cout << max({a, b, c}) * 100;
    }

    return 0;
}
