#include <bits/stdc++.h>
#define ll long long;
#define l "\n";
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
void solve(int T)
{
    long long x, y, x1, y1;
    cin >> x >> y >> x1 >> y1;
    long long f = (x * y) - (x1 * y1);
    cout << "Difference = " << f << l;
}

int main()
{
    fast;
    int T;
    // cin >> T;
    T = 1;
    for (int i = 1; i <= T; i++)
    {
        solve(i);
    }

    return 0;
}

