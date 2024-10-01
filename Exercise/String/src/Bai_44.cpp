#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll powMod(ll a, ll b, ll c)
{
    ll res = 1;
    while(b)
    {
        if(b % 2)
        {
            res *= a;
            res %= c;
        }
        a *= a;
        a %= c;
        b /= 2;
    }
    return res;
}

int mod = 1e9 + 7;

int main(int argc, char const *argv[])
{
    string s; cin >> s;
    ll m; cin >> m;
    ll res = 0;
    for(int i = 0; i < s.size(); i++)
    {
        res = res * 10 + (s[i] - '0');
        res %= mod;
    }
    cout << powMod(res, m, mod) << endl;
    return 0;
}
