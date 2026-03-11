#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int num;

    cin >> num;

    for (int i = 1; i <= 9; i++) {
        cout << num << " * " << i << " = " << num * i << "\n";
    }

    return 0;
}

