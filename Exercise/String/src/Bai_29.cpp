#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(int argc, char const *argv[])
{
    string s; cin >> s;
    ll sum = 0;
    ll tmp = 0;
    s += "@";
    for(char x : s)
    {
        if(isdigit(x))
        {
            tmp = tmp * 10 + (x - '0'); 
        }
        else{
            sum += tmp;
            tmp = 0;
        }
    }
    cout << sum << endl;
    return 0;
}
