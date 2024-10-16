#include<bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;

while(t--) {
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++) {
                cin>>a[i];
        }
        sort(a,a+n);
        int l=0,r=n-1;
        int ans=0;
        while(l<r) {
                ans+=abs(a[l]-a[r]);
                l++,r--;

        }
        cout<<ans<<endl;
}
}
