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
    vector<int>a(5);
    int total_sum=0;
    for(int i=0;i<5;i++) {
        cin>>a[i];
        total_sum += a[i];
    }

    if(total_sum >= 35) {
        cout<<0<<nl;
        continue;
    }

    sort(a.begin(),a.end());
    int count=0;
    for(int i=0;i<5;i++) {
        if(total_sum < 35) {
            total_sum += (10 - a[i]);
            count++;
        } 
    }
    cout<<count*100<<nl;
    
   }
   return 0;
}