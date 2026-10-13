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
    int n;
    cin>>n;
    int ans=INT_MAX;
    while(n--) {
        int a,b;
        cin>>a>>b;
        if(a >= 7) {
            ans = min (ans,b);
        } else {
            continue;
        }
    }
    if(ans==INT_MAX) {
        cout<<-1<<nl;
    } else {
        cout<<ans<<nl;
    }
   }
   return 0;
}