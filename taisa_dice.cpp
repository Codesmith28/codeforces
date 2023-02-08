#include <bits/stdc++.h>
#define vi vector<int>
#define pii pair<int, int>
#define vii vector<pii>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s, r;
        cin >> n >> s >> r;

        int last = s - r;
        n--;

        vi ans(n);
        int quo = r / n;
        int rem = r % n;
        rep(i, 0, n)
        {
            ans[i] = quo;
        }
        int j = 0;
        while (rem--)
        {
            ans[j]++;
            j++;
        }

        ans.push_back(last);

        rep(i, 0, ans.size())
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}