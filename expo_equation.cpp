#include <bits/stdc++.h>
#define vi vector<int>
#define pii pair<int, int>
#define vii vector<pii>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        /*
        x and y such that:
        y(x^y) + x(y^x) = n */

        /* OBSERVATION:
        n has to be even number for this to be possible
         */

        n % 2 == 0 ? cout << 1 << " " << (n / 2) << endl : cout << -1 << endl;
    }
    return 0;
}