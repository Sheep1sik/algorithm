#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int h,m;
    cin >> h >> m;
    if (m < 45) {
        h--;
        m = 60 - (45-m);
    } else {
        m -= 45;
    }
    if (h < 0) {
        h = 23;
    }
    cout << h << " " << m << "\n";

    return 0;
}
