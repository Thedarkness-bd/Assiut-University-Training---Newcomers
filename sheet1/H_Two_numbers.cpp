#include <bits/stdc++.h>
using ll = long long;
#define l "\n";
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
void solve(int T)
{
    float a, b;
    cin >> a >> b;
    cout << "floor " << a << " / " << b << " = " << floor((a / b)) << l;
    cout << "ceil " << a << " / " << b << " = " << ceil((a / b)) << l;
    cout << "round " << a << " / " << b << " = " << llround((a / b)) << l;
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
