#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int result;
    cin >> result;

    if (result >= 90) {
        cout << "A" << "\n";
    } else if (result >= 80) {
        cout << "B" << "\n";
    } else if (result >= 70) {
        cout << "C" << "\n";
    } else if (result >= 60) {
        cout << "D" << "\n";
    } else {
        cout << "F" << "\n";
    };
    return 0;
}