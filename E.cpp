#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
const ll MOD = llround(1e9 + 7);
 
int main(void)
{
    ll a, b;
    std::cin >> a >> b;
    ll mod = 20060815;
    std::cout << a % mod * b % mod << '\n';
    return 0;
}