#include<bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;

while(t--) {
        int a,b,c,x,y;
        cin>>a>>b>>c>>x>>y;
        int e;

      if(a>=x && b>=y) {
        cout<<"YES"<<endl;
      }
      else if(a<x && b>=y) {
             if(abs(a-x)<=c) {
                cout<<"YES"<<endl;
             }
             else {
                cout<<"NO"<<endl;
             }
      }
      else if(a>=x && b<y) {
        if(abs(b-y)<=c) {
                cout<<"YES"<<endl;
             }
             else {
                cout<<"NO"<<endl;
             }
      }
      else if(a<x && b<y) {
        e=abs(a-x) + abs(b-y);
        if(e<=c) {
                cout<<"YES"<<endl;
        }
        else {
                cout<<"NO"<<endl;
        }
      }
}

}
