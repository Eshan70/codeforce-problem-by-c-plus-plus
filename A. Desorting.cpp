#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }


        int already_unsorted = 0;
        for (int i = 1; i < n; i++) {
            if (a[i] < a[i - 1]) {
                already_unsorted = 1;
                break;
            }
        }

        if (already_unsorted == 1) {
            cout << 0 << endl;
            continue;
        }


        int answer = INT_MAX;

        for (int i = 1; i < n; i++) {
            int low = 1;
            int high = 1000000000;
            int min_k = -1;

            while (low <= high) {
                int mid = (low + high) / 2;


                vector<int> b(n);
                for (int j = 0; j < n; j++) {
                    if (j < i) {
                        b[j] = a[j] + mid;
                    } else {
                        b[j] = a[j] - mid;
                    }
                }


                int sorted = 1;
                for (int j = 1; j < n; j++) {
                    if (b[j] < b[j - 1]) {
                        sorted = 0;
                        break;
                    }
                }

                if (sorted == 0) {
                    min_k = mid;
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            }

            if (min_k != -1 && min_k < answer) {
                answer = min_k;
            }
        }

        cout << answer << endl;
    }

    return 0;
}
