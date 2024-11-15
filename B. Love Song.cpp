#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;


    vector<int> prefix(n + 1, 0);

    // Fill the prefix sum array
    for (int i = 1; i <= n; ++i) {
        int repeat_count = s[i - 1] - 'a' + 1;
        prefix[i] = prefix[i - 1] + repeat_count;
    }

    // Process each query
    while (q--) {
        int l, r;
        cin >> l >> r;
        // Calculate the result for the range [l, r] using prefix sums
        cout << prefix[r] - prefix[l - 1] << endl;
    }

    return 0;
}
