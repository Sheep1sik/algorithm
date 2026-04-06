#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++ ) {
        int x1, y1, x2, y2, r1, r2;
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

        int d = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);

        int sum = (r1 + r2) * (r1 + r2);
        int diff = (r1 - r2) * (r1 - r2);

        // 위치의 개수가 같을경우 -1 
        if (d == 0 && r1 == r2) {
            cout << -1 << endl;
        }
        // 위치의 개수가 0개
        else if (d == 0 && r1 != r2) {
            cout << 0 << endl;
        }
        else if (d > sum || d < diff) {
            cout << 0 << endl;
        }
        // 위치의 개수가 1개
        else if (d == sum || d == diff) {
            cout << 1 << endl;
        }
        // 위치의 개수가 2개
        else {
            cout << 2 << endl;
        }
    }

    return 0;
}
