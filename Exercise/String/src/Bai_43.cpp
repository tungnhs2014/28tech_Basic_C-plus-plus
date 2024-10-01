#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

// Giai thuat Eculid
ll gcd(ll a, ll b)
{
    ll r;
    while(b)
    {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main(int argc, char const *argv[])
{
    string s; cin >> s;
    ll m; cin >> m;
    ll res = 0;
    for(int i = 0; i < s.size(); i++)
    {
        res = res * 10 + (s[i] - '0');
        res %= m;
    }
    cout << gcd(m, res) << endl;
    return 0;
}
