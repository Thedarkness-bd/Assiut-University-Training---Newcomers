#include <bits/stdc++.h>
#define ll long long;
#define l "\n";
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
void solve(int T)
{
    int a1, b1, a2, b2;
    cin >> a1 >> b1 >> a2 >> b2;
    int ma = max(a1, a2);
    int mi = min(b1, b2);
    if (ma > mi) cout << "-1";
    else cout << ma << " " << mi << endl;
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
