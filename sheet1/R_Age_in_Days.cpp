#include <bits/stdc++.h>
using ll = long long;
#define l "\n";
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
void solve(int T)
{
    int days;
    cin >> days;
    cout << (days / 365) << " years"
         << "\n";
    days = days % 365;
    cout << days / 30 << " months"
         << "\n";
    days = days % 30;
    cout << days << " days"
         << "\n";
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
