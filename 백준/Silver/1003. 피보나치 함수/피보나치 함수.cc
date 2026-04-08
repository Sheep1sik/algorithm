#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int zero[41], one[41];
    zero[0] = 1;
    zero[1] = 0;
    one[0] = 0;
    one[1] = 1;

    for (int i = 2; i < 41; i++) {
        zero[i] = zero[i-1] + zero[i-2];
        one[i] = one[i-1] + one[i-2];
    }

    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        int n;
        cin >> n;
        cout << zero[n] << " " << one[n] << endl;
    }

    return 0;
}