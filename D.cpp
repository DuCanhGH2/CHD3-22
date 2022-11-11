#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = llround(1e9 + 7);

int main(void)
{
    ll N;
    cin >> N;
    ll x = llround(floorl(static_cast<long double>(N) / static_cast<long double>(MOD * 10)));
    ll count = x * 10, a = N % (MOD * 10);
    if (a <= 9)
    {
        count += a + 1;
    }
    else
    {
        count += 10;
    }
    cout << count << '\n';
    return 0;
}