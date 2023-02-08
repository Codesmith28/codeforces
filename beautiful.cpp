#include <bits/stdc++.h>
#define vi vector<int>
#define pii pair<int, int>
#define vii vector<pii>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second
#define ll long long

using namespace std;

bool allSame(int a[], int n)
{
    int x = a[0];
    bool flag = 0;
    rep(i, 1, n)
    {
        if (x == a[i])
        {
            flag = 1;
        }
        else
        {
            flag = 0;
        }
    }

    return flag;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int b[n];
        rep(i, 0, n)
        {
            cin >> a[i];
            b[i] = a[i];
        }

        /*  BEAUTIFUL ARRAY:
        if array beautiful then:
            ~ sum of all elements before it is a[i] */

        int sum = 0;
        bool flag = 0;

        rep(i, 0, n)
        {
            if (sum == a[i])
            {
                flag = 1;
                break;
            }
            sum += a[i];
        }

        // for beautiful array
        if (flag == 0)
        {
            cout << "YES\n";
            rep(i, 0, n)
            {
                cout << a[i] << " ";
            }
            cout << "\n";
        }

        // for non beautiful array

        else
        {
            // if all elements are same then no
            if (allSame(a, n))
            {
                cout << "NO\n";
            }

            // for some variation ( always yes as whole > part)
            else
            {
                cout << "YES\n";
                // print greatest and smallest number alternatively
                sort(a, a + n, greater<int>());

                if (n % 2 == 0)
                {
                    rep(i, 0, n / 2)
                    {
                        cout << a[i] << " " << a[n - i - 1] << " ";
                    }
                    cout << "\n";
                }

                else
                {
                    rep(i, 0, (n + 1) / 2)
                    {
                        if (i < n / 2)
                        {
                            cout << a[i] << " " << a[n - i - 1] << " ";
                        }
                        else
                        {
                            cout << a[i] << " ";
                        }
                    }
                    cout << "\n";
                }
            }
        }
    }
    return 0;
}