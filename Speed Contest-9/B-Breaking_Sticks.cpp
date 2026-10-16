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
    int count=0;
    while(n--) {
        int x;
        cin>>x;
        count += (x-1);
    }
    cout<<count<<nl;
   }
   return 0;
}