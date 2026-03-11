#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,t;
    t = 0;
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        t = t + i;
    }

    cout << t << "\n";


    return 0;
}
