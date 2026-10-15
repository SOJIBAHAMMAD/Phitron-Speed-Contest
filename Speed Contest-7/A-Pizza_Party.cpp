#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main () {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int a,b;
   cin>>a>>b;
   a++;
   double ans = ((a*4.0)+(b*3.0))/8.0;
   cout<<ceil(ans)<<nl;
   return 0;
}
