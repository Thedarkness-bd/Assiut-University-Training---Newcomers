#include <bits/stdc++.h>
using ll = long long;
#define l "\n";
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
void solve(int T)
{
    string s1,f1,s2,f2;
    cin >> s1 >> f1;
    cin >> s2 >> f2;
    if(f1 == f2) cout << "ARE Brothers" << "\n";
    else cout << "NOT" << "\n";
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
