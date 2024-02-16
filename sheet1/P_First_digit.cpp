#include <bits/stdc++.h>
using ll = long long;
#define l "\n";
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
void solve(int T)
{
    int a; cin >> a;
    string s = to_string(a);
    int first = s.front() - '0';
    if(first % 2 == 0 ) cout << "EVEN" << "\n";
    else cout << "ODD" << "\n";
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
