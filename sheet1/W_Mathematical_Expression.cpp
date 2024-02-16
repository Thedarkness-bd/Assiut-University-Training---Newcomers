#include <bits/stdc++.h>
#define ll long long;
#define l "\n";
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
void solve(int T)
{
    int a, b, d;
    char c, e;
    cin >> a >> c >> b >> e >> d;
    if (c == '+')
    {
        if (a + b == d)
        {
            cout << "Yes"
                 << "\n";
        }
        else
        {
            cout << a + b << "\n";
        }
    }
    else if (c == '-')
    {
        if (a - b == d)
        {
            cout << "Yes"
                 << "\n";
        }
        else
        {
            cout << a - b << "\n";
        }
    }

    else if (c == '*')
    {
        if (a * b == d)
        {
            cout << "Yes"
                 << "\n";
        }
        else
        {
            cout << a * b << "\n";
        }
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
