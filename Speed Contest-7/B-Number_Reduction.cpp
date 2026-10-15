#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        while(x!=3 && x!=1) {
            if (x > 3)
        {
            x -= 3;
        }
        if (x % 2 == 0)
        {
            x /= 2;
        }
        }
        cout << x << nl;
    }
    return 0;
}