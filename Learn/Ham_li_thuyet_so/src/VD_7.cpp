#include <bits/stdc++.h>
using namespace std;

using ll = long long;
// (a + b) % c = ((a % c) + (b % c))%c
// (a - b) % c = ((a % c) - (b % c))%c
// (a * b) % c = ((a % c) * (b % c))%c
// (a / b) % c = ((a % c) * (b^-1 % c))%c
// (a^m)%c = (a % c)^m%c

// tính tổng các số từ 1 đến n chia dư cho 1000 000 007
ll solve(ll n)
{
    ll sum = 0;
    for(int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum % 1000000007;
}

// tính giai thừa của n chia dư cho 1000 000 007
void gt(ll n)
{
    ll res = 1;
    for(int i = 1; i <= n; i++)
    {
        res *= i;
        cout << i << " " << res << endl;
    }
}

ll gt2(ll n)
{
    ll res = 1;
    for(int i = 1; i <= n; i++)
    {
        res *= i;
        // nhân xong phải chia dư luôn
        res %= 1000000007;
    }
    return res % 1000000007;
}

// Tính a^b chia dư cho 10
// 1 <= a <= 1000
// 1 <= b <= 1000000
int pow1(int a, int b)
{
    ll res = 1;
    for(int i = 1; i <=b; i++)
    {
        res *= a;
        res %= 10;
    } 
    return res;
}
// a^b %c = ?
ll pow2(ll a, ll b, ll c)
{
    ll res = 1;
    while(b !=0)
    {
        if(b % 2 == 1)
        {
            // bit cuối cùng của b là bit 1
            res *= a;
            res %= c;
        }
        a *= a;
        a %= c;
        b /= 2;
    }
    return res;
}

int main(int argc, char const *argv[])
{
    cout << solve(1000000) << endl;
    //gt(30);
    cout << gt2(1000000) << endl;
    long long a, b; cin >> a >> b;
    // cout << pow1(a, b) << endl;
    cout << pow2(a, b, 10000007);
    return 0;
}
