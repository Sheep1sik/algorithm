#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> scores;
    int max_score = 0;
    int N;  // 과목의 개수
    cin >> N;
    for (int i = 0; i < N; i++) {
        int score;
        cin >> score;
        scores.push_back(score);
        if (score > max_score) {
            max_score = score;
        }
    }

    double sum_of_scores = 0;
    for (int i = 0; i < N; i++) {
        sum_of_scores += (double)scores[i] / max_score * 100;
    }

    double average_score = sum_of_scores / N;

    cout << fixed << setprecision(2) << average_score << endl;

    return 0;
}