#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
typedef long long ll;
const int MAX = 1000100;

ll c = 1e9 + 7;

ll  fastPow(ll  a, ll b)
{
    ll ans = 1;
    a %= c;
    while (b)
    {
        if (b & 1)
        {
            ans = (ans * a) % c;
        }
        b >>= 1;
        a = (a * a) % c;
    }
    return ans;
}
ll  ef(ll x)
{
    ll euler = x;
    for (ll i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            euler = euler / i * (i - 1);
            while (x % i == 0)
            {
                x /= i;
            }
        }
    }
    if (x > 1)
    {
        euler = euler / x * (x - 1);
    }
    return euler;
}
ll edp(ll a, char b[])
{
    ll euler = ef(c);
    ll dep = 0;
    for (ll i = 0, len = strlen(b); i < len; ++i)
    {
        dep = (dep * 10 + b[i] - '0') % euler;
    }
    dep += euler;
    return fastPow(a, dep);
}
int main()
{
    ll a, c;
    char b[MAX];
    while (~scanf("%lld%s", &a, b))
    {
        printf("%lld\n", edp(a, b));
    }
    return 0;
}
