#include <bits/stdc++.h>
#define vi vector<int>
#define pii pair<int, int>
#define vii vector<pii>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second

using namespace std;

void solve(string s, int n)
{
    int x = n;
    rep(i, 0, n / 2)
    {
        if (s[i] == '0' && s[n - i - 1] == '1')
        {
            x -= 2;
        }
        else if (s[i] == '1' && s[n - i - 1] == '0')
        {
            x -= 2;
        }
        else
        {
            break;
        }
    }

    cout << x << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        solve(s, n);
    }
    return 0;
}