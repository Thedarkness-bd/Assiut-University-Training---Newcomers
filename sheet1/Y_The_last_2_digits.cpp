#include <bits/stdc++.h>
using ll = long long;
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main()
{
    fast;
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll mul = (a % 100 * b % 100 * c % 100 * d % 100);
    ll r = mul % 100;
    if (r < 10)
        cout << 0 << r << endl;
    else
        cout << r << endl;

    return 0;
}
