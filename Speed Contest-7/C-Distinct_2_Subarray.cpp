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
    vector<int>a(n);
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    int min_len=INT_MAX;
    for(int i=0;i<n;i++) {
       unordered_map<int,int>freq;
       for(int j=i;j<n;j++) {
        freq[a[j]]++;
        if(freq.size() == 2) {
            min_len=min(min_len,j-i+1);
            break;
        }
       }
    }
    if(min_len==INT_MAX) {
        cout<<-1<<nl;
    } else {
        cout<<min_len<<nl;
    }

   }
   return 0;
}