#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        int x1, x2, y1, y2, n;
        cin >> x1 >> y1 >> x2 >> y2;
        cin >> n;

        int count = 0;

        for (int j = 0; j < n; j++) {
            int cx, cy, r;
            cin >> cx >> cy >> r;

            // 출발점과 행성 중심 간 거리2
            int d1 = (x1 - cx) * (x1 - cx) + (y1 - cy) * (y1 - cy);

            // 도착점과 행성 중심 간 거리2
            int d2 = (x2 - cx) * (x2 - cx) + (y2 - cy) * (y2 - cy);

            int rr = r * r;

            bool startInside = (d1 < rr);
            bool endInside = (d2 < rr);
            
            if (startInside != endInside) {
                count++;
            }
        }
        cout << count << "\n";
    }

    return 0;
}
