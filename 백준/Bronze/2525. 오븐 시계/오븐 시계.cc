#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int h, m, t;
    cin >> h >> m >> t;

    int total = h * 60 + m + t;

    h = (total / 60) % 24;
    m = total % 60;

    cout << h << " " << m << "\n";
}