#include <bits/stdc++.h>
using ll = long long;
#define l "\n";
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
void solve(int T)
{
    float x, y;
    cin >> x >> y;
    if (x > 0 && y > 0)
        cout << "Q1" << endl;
    else if (x < 0 && y > 0)
        cout << "Q2" << endl;
    else if (x < 0 && y < 0)
        cout << "Q3" << endl;
    else if (x > 0 && y < 0)
        cout << "Q4" << endl;
    else if (x == 0 && y == 0)
        cout << "Origem" << endl;
    else if (x == 0 && y)
        cout << "Eixo Y" << endl;
    else if (x && y == 0)
        cout << "Eixo X" << endl;
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
