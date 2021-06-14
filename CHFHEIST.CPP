#include <bits/stdc++.h>
#define pb(x) push_back(x);
#define shtf(x) shrink_to_fit(x);
typedef long long ll;

using namespace std;
bool isInt(ll D, ll d)
{
    if (D / float(d) == D / d)
        return true;
    else
        return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll D, d, P, Q;
        cin >> D >> d >> P >> Q;
        if (isInt(D, d))
        {
            ll sum = 0;
            ll prev = P;
            ll i = d;
            for (; i <= D; i += d)
            {
                sum += d * prev;
                prev = prev + Q;
            }
            cout << sum << "\n";
        }
        else
        {
            ll sum = 0;
            ll prev = P;
            ll i = d;
            for (; i < D; i += d)
            {
                sum += d * prev;
                prev = prev + Q;
            }
            ll r = D - (i - d);
            sum += r * prev;
            cout << sum << "\n";
        }
    }
    return 0;
}