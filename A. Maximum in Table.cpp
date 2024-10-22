#include<bits/stdc++.h>
using namespace std;
int main() {
 int s; cin>>s;
    int t[s][s];
    for(int i=0; i<s; i++)
    {
        t[0][i]=1;
        t[i][0]=1;
    }
    for(int i=1; i<s; i++)
    {
        for(int j=1; j<s; j++)
        {
            t[i][j]=t[i][j-1]+t[i-1][j];
        }
    }
    cout<< t[s-1][s-1];
}
