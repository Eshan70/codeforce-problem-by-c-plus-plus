#include<bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
int w,m,ans;

while(t--) {
        int n;
        cin>>n;
        if(n<=4) {
                cout<<1<<endl;
        }
        else {
            w=n/4;
            m=(n%4)/2;
            ans=w+m;
            cout<<ans<<endl;
        }

}
}
