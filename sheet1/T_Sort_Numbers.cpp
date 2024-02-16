#include <bits/stdc++.h>
using ll = long long;
#define l "\n";
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
void solve(int T)
{
    int a, b, c;
    cin >> a >> b >> c;
    int arr[] = {a, b, c};
    sort(arr, arr + 3);
    cout << arr[0] << endl
         << arr[1] << endl
         << arr[2] << endl;
    cout << l;
    cout << a << endl
         << b << endl
         << c << endl;
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
