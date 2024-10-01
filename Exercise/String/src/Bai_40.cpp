#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(int argc, char const *argv[])
{
    string s; cin >> s;
    int n = s.size();
    ll so = 0, lt = 1;
    for(int i = n - 1; i >= 0; i--)
    {
        so += (s[i] - '0') *lt;
        lt *= 2;
        so %= 5;
        lt %= 5;
    }
    if(so == 0) cout <<"YES\n";
    else cout <<"NO\n";
    return 0;
}
