#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = roundl(1e9 + 7);

int main(void)
{
    size_t n;
    cin >> n;
    vector<ll> a(n);
    for (size_t i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll st = 1, x = 0, ans{};
    for (ll i = 0; i < 30; i++)
    {
        if (i != 0)
        {
            st = st << 1;
        }
        ll one = 0, zero = 0;
        for (size_t j = 0; j < n; j++)
        {
            if ((a[j] & st) == 0)
            {
                zero++;
            }
            else
            {
                one++;
            }
        }
        if (one > zero)
        {
            x += (1 << (i));
        }
    }
    for (size_t i = 0; i < n; i++)
    {
        ans += a[i] ^ x;
        ans %= MOD;
    }
    cout << ans << '\n';
    return 0;
}