/*
Cho một số nguyên không âm N, hãy in ra chữ số lớn nhất và chữ số nhỏ nhất của N. Viết 2 hàm đệ quy

Input Format

Số nguyên dương N

Constraints

10≤n≤10^18

Output Format

Chữ số lớn nhất và nhỏ nhất của N.

Sample Input 0

1256782
Sample Output 0

8 1
*/

#include <bits/stdc++.h>
using namespace std;
using ll =  long long;

int fmax(ll n)
{
    if(n < 10)
    {
        return n;
    }
    else
    {
        return max(n % 10, 1ll * fmax(n / 10));
    }
}

int fmin(ll n)
{
    if(n < 10)
    {
        return n;
    }
    else
    {
        return min(n % 10, 1ll * fmin(n / 10));
    }
}

int main(int argc, char const *argv[])
{
    ll n; cin >> n;
    cout << fmax(n) << ' ' << fmin(n) << endl;
    return 0;
}