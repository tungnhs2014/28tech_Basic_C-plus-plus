#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(int argc, char const *argv[])
{
    string s; cin >> s;
    int k; cin >> k;
    int cnt =0;
    for(int i = s.size() - 1; i >= 0; i--)
    {
        if(s[i] == '0') ++cnt;
        else break;
    }
    if(cnt >= k) cout <<"YES\n";
    else cout <<"NO\n";
    return 0;
}
