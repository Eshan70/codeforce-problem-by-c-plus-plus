#include<bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;

while(t--) {
        int l,r;
        cin>>l>>r;
        int count=1;
        int inc=1;
       if(l==r) {
        cout<<'1'<<endl;
       }
       else {
        for(int i=l+1; i<=r; i++) {

                 count++;
                i=i+inc;
                inc++;
               // count++;


        }
        cout<<count<<endl;
}
}
}
