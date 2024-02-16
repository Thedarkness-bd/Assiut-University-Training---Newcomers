#include <bits/stdc++.h>
#define ll long long;
#define l "\n";
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
void solve(int T)
{
    int a, b;
    char c;
    cin >> a >> c >> b;
    switch (c)
    {
    case '>':
        if (a > b) cout << "Right" << "\n";
        else cout << "Wrong"<< "\n";
        break;
    case '<':
        if (a < b) cout << "Right"<< "\n";
        else cout << "Wrong" << "\n";
        break;
    case '=':
        if (a == b) cout << "Right"<< "\n";
        else cout << "Wrong"<< "\n";
        break;
    default:
        break;
    }
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
