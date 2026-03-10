#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c;
    cin >> a >> b >> c;

    vector<int> v = {a, b, c};
    sort(v.begin(), v.end());

    if (v[0] == v[2])
        cout << 10000 + v[0] * 1000;
    else if (v[0] == v[1] || v[1] == v[2])
        cout << 1000 + v[1] * 100;
    else
        cout << v[2] * 100;

    // // 규칙 1
    // if ((a == b) && (b == c)) {
    //     cout << 10000 + (a * 1000);
    // }

    // // 규칙 2
    // else if ((a == b) || (a == c)) {
    //     cout << 1000 + a * 100;
    // } else if (b == c) {
    //     cout << 1000 + b * 100;
    // }

    // // 규칙 3
    // else {
    //     cout << max({a, b, c}) * 100;
    // }

    return 0;
}
