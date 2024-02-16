#include <bits/stdc++.h>
using ll = long long;
#define l "\n";
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int lastDigit_x(int n)
{

    return (n % 10);
}

int lastDigit_y(int n)
{
    return (n % 10);
}
int main()
{
    fast;
    // int T;
    // // cin >> T;
    // T = 1;
    // for (int i = 1; i <= T; i++)
    // {
    //     solve(i);
    // }
    ll x, y;
    cin >> x >> y;
    string s1 = to_string(x);
    string s2 = to_string(y);
    int first = s1.back() - '0';
    int second = s2.back() - '0';
    cout << first + second << l;
    return 0;
}
