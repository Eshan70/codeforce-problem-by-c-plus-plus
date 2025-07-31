#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
                cin >> a[i];

        int mn = a[0], mx = a[0];
        bool ok = true;

        for (int i = 1; i < n; i++) {
            int seat = a[i];

            if (seat == mn - 1) {

            } else if (seat == mx + 1) {
                mx++;
            } else {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES\n" : "NO\n");
    }
}
