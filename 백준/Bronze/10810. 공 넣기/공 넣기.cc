#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin >> N >> M;

    int arr[N];
    for (int i = 0; i < N; i++) {
        arr[i] = 0;
    }
    for (int i = 0; i < M; i++) {
        int I, J, K;
        cin >> I >> J >> K;
        for (int j = I; j <= J; j++) {
            arr[j-1] = K;
        }
    }
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    return 0;
}
