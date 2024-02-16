#include <bits/stdc++.h>
using ll = long long;
#define l "\n";
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
void solve(int T)
{
    double a;
    cin >> a;
    if (a >= 0 && a <= 25)
    {
        cout << "Interval [0,25]"
             << "\n";
    }
    else if (a >= 25 && a <= 50)
    {
        cout << "Interval (25,50]"
             << "\n";
    }
    else if (a >= 50 && a <= 75)
    {
        cout << "Interval (50,75]"
             << "\n";
    }
    else if (a >= 75 && a <= 100)
    {
        cout << "Interval (75,100]"
             << "\n";
    }
    else
    {
        cout << "Out of Intervals"
             << "\n";
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
