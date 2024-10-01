#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

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
    cout << res << endl;
    return 0;
}
