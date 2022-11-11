#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(void)
{
    ll n = 0, m = 0;
    scanf("%lld %lld", &n, &m);
    ll xa = 1, ya = m, xb = llround(ceil(n / 2)), yb = 1, count{};
    while ((xa != xb || ya != yb) && count < 70)
    {
        printf("? %lld %lld %lld %lld\n", xa, ya, xb, yb);
        fflush(stdout);
        int res = 0;
        scanf("%d", &res);
        n = n != 1 ? llround(ceil(n / 2)) : 1;
        if (xa == xb)
        {
            ya = llround(ceil(ya / 2));
        }
        if (res == 0)
        {
            if (xa == xb)
            {
                ya *= 2;
            }
            xa += n;
            xb += n != 1 ? llround(ceil(n / 2)) : 1;
        }
        else if (xa != xb)
        {
            xb = llround(ceil(xb / 2));
        }
        count++;
    }
    printf("? %lld %lld %lld %lld\n", xa, ya, xb, yb);
    fflush(stdout);
    int res = 0;
    scanf("%d", &res);
    if (res == 0)
    {
        ya++;
    }
    printf("! %lld %lld\n", xa, ya);
    fflush(stdout);
    return 0;
}