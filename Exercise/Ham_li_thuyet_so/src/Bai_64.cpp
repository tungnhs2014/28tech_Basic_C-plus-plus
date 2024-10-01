/*
Nhập vào một số và kiểm tra xem số vừa nhập có phải là số trong dãy fibonacci hay không? Biết rằng số fibonacci bắt đầu bằng 0 và 1.

Input Format
Số nguyên không âm n

Constraints
0≤n≤9*10^18

Output Format
In ra YES nếu n là số Fibonacci, ngược lại in NO

Sample Input 0
0
Sample Output 0
YES
Sample Input 1

18636
Sample Output 1
NO
*/

#include <bits/stdc++.h>
using namespace std;

using ll = long long;


bool check1(ll n)
{
    if(n == 0 || n == 1)
        return true;
    ll f1 = 1, f2 = 0;
    for(int i = 2; i <= 92; i++)
    {
        ll fn = f1 + f2;
        if(fn == n) return true;
        f1 = f2;
        f2 = fn;
    }
    return false;
}

bool check2(ll n)
{
    ll f[100];
    f[0] = 0; f[1] = 1;
    for(int i = 2; i <= 92; ++i)
    {
        f[i] = f[i-1] + f[i -2];
    }
    for(int i = 0; i <=92; ++i)
    {
        if(n == f[i]) return true;
    }
    return false;
}

int main(int argc, char const *argv[])
{
    ll n; cin >> n;
    if(check2(n))
        cout <<"YES";
    else
        cout <<"NO";
    return 0;
}
