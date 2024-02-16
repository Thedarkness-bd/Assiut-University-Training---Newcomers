#include <bits/stdc++.h>
#define ll long long;
#define l "\n";
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
void solve(int T)
{
    double num1;
    cin >> num1;
    int n = num1;
    double s = num1 - n;
    if (s > 0) cout << "float " << n  << " " << s << endl;
    else cout << "int " << n << endl;
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
