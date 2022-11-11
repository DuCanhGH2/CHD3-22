#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = llround(1e9 + 7);

int main(void)
{
    ll n;
    cin >> n;
    ll r = 0, count = 0;
    for (ll i = 60; i > 0; i--)
    {
        if (powl(2, i) <= n)
        {
            r = i;
            break;
        }
    }
    for (ll i = r; i > 0; i--)
    {
        count += llround(floorl(static_cast<long double>(n) / powl(2, i)));
        count %= MOD;
    }
    cout << count % MOD << '\n';
    return 0;
}