#include<bits/stdc++.h>
using namespace std;
int main() {
int n; cin>>n;
n*=3;
while(n--) {
string s;
        cin>>s;

sort(s.begin(),s.end());

                if(s[0]=='?'){
        if(s[1]=='A' && s[2]=='B') {
                cout<<'C'<<endl;
        }
        else if(s[1]=='B' && s[2]=='C') {
                cout<<'A'<<endl;
        }
        else if(s[1]=='A' && s[2]=='C') {
                cout<<'B'<<endl;
        }

}
}
}
