#include <bits/stdc++.h>
using ll = long long;
#define l "\n";
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
void solve(int T)
{
    ll x, y;
    cin >> x >> y;
    if (x % y == 0 || y % x == 0)cout << "Multiples"<< "\n";
    else cout << "No Multiples" << "\n";
}

int main()
{
    fast;
    int T;
    // cin >> T;
    T = 1;
    for (int i = 1; i <= T; i++) solve(i);
    return 0;
}
