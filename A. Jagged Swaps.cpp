#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
bool eshan=true;


        for (int i = 0; i < n; i++) {
            cin >> a[i];

            if(a[0]==1) {
                eshan = false;
            }
        }
        if(eshan) {
                 cout << "NO" << endl;
            }
            else {
            cout << "YES" << endl;
        }




    }
}



