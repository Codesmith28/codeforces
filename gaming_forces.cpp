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
        // n monsters
        int n;
        cin >> n;

        // a[i] HP for ith monster
        vi a(n);
        rep(i, 0, n)
        {
            cin >> a[i];
        }

        // count the number of demons with HP = 1
        /*
        then we split them into groups of 2
        if count%2==0 => count/2
        else => count+1/2  */

        // double damage move
        int count = 0;
        rep(i, 0, n)
        {
            a[i] == 1 ? count++ : count = count;
        }

        int kill_1;
        count % 2 == 0 ? kill_1 = count / 2 : kill_1 = (count + 1) / 2;

        // instant kill
        int remaining = n - count;

        cout << remaining + kill_1 << endl;
    }

    return 0;
}