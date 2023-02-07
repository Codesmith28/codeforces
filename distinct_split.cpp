#include <bits/stdc++.h>
#define vi vector<int>
#define pii pair<int, int>
#define vii vector<pii>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second

using namespace std;

int dischars(string s)
{
    int n = s.length();
    set<char> dis;
    rep(i, 0, n)
    {
        char x = s[i];
        dis.insert(x);
    }
    return dis.size();
}

void solve(string s)
{
    int n = s.length();
    int ans = INT_MIN;
    // make a for loop which works on the splitting part
    rep(i, 0, n - 1)
    {
        string a = s.substr(0, i + 1);
        string b = s.substr(i + 1, n - 1 - i);

        int x = dischars(a);
        int y = dischars(b);

        ans = max(ans, (x + y));
    }
    cout << ans << endl;
}

int main()
{
    // we have string and a function that gives us the total distinct characters of the string

    // we have to split the string such that we have max(f(x)+f(y))
    // the 2 split strings should concatenate to give the og string

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        solve(s);
    }
    return 0;
}