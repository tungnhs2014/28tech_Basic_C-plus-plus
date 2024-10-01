#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(int argc, char const *argv[])
{
    string s; cin >> s;
    int num = 0;
    if(s.size() == 1)
    {
        num = s[0] - '0';
    }
    else{
        num = (s[s.size() -2] - '0') * 10 + (s[s.size() - 1] - '0');
    }
    if(num % 25 == 0) cout <<"YES\n";
    else cout <<"NO\n";
    return 0;
}
