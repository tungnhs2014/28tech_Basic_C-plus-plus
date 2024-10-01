#include <bits/stdc++.h>
using namespace std;

int sum(long long n)
{
    int res = 0;
    while(n)
    {
        res += n % 10;
        n /= 10;
    }
    return res;
}

int main(int argc, char const *argv[])
{   
    string s; cin >> s;
    int res = 0;
    for(auto x : s) res += x  - '0';
    while(res > 9)
    {
        res = sum(res);
    }
    if(res == 9) cout << "YES\n";
    else cout <<"NO\n";
    return 0;
}
