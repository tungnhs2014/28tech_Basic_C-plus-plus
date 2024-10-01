/*
Tính a^b%1000000007 với a,b nguyên không âm.

Input Format

2 số nguyên không âm a và b

Constraints

1≤a,b≤10^12

Output Format

Kết quả của bài toán

Sample Input 0

2 10
Sample Output 0

1024
*/

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll pow(ll a, ll b, ll c)
{
    ll res = 1;
    while( b != 0)
    {
        // bit cuối cùng của b là bit 1
        if(b % 2 == 1)
        {
            res *= a;
            res %= c;
        }
        // a *= a;
        // a %= c;
        a = ((a % c) * (a %c))%c;
        b /= 2;
    }
    return res;
}

int main(int argc, char const *argv[])
{
    ll a, b; cin >> a >> b;
    cout << pow(a, b, 1000000007);
    return 0;
}
