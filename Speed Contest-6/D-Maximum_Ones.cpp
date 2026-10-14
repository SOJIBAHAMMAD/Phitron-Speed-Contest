#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main () {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t;
   cin>>t;
   while(t--) {
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    while(k--) {
        string ans=s;
        for(int i=0;i<n-1;i++) {
            if(s[i]=='0' && s[i+1]=='1') {
                ans[i]='1';
                continue;
            }
        }
        s=ans;
    }

    //cout<<s<<nl;
    int count=0;
    for(int i=0;i<n;i++) {
        if(s[i]=='1') {
            count++;
        }
    }
    cout<<count<<nl;
    
   }
   return 0;
}