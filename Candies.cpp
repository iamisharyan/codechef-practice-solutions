#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        vector<int> A(2 * N);
        unordered_map<int, int> freq;

        // Read the array and count the frequency of each element
        for (int i = 0; i < 2 * N; ++i) {
            cin >> A[i];
            freq[A[i]]++;
        }

        // Check if any element appears more than twice
        bool valid = true;
        for (auto &entry : freq) {
            if (entry.second > 2) {
                valid = false;
                break;
            }
        }

        if (valid) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}