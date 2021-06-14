#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
using ll = long long int;

ll fst_expo(ll a, ll b)
{
    ll ans = 1;
    while (b > 0)
    {
        if (b % 2 == 1)
        {
            ans = (ans * a) % mod;
        }
        a = (a * a) % mod;
        b = b / 2;
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t, m, n;
    cin >> t;

    while (t--)
    {
        cin >> n >> m;
        ll a = fst_expo(2, n) - 1;
        ll result = fst_expo(a, m);
        cout << result << endl;
    }
    return 0;
}