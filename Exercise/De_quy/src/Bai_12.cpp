/*
Cho một số nguyên không âm N, hãy in ra dạng biểu diễn của N dưới hệ 16.
Input Format
Số nguyên không âm N

Constraints
0≤n≤10^18

Output Format
Biểu diễn hệ 16 của số nguyên N.

Sample Input 0
995

Sample Output 0
3E3
*/

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void covert(ll n)
{
    if(n == 0) return; // ket thuc de quy
    covert(n/16);
    int r = n % 16;
    if( r < 10) cout << r;
    else
    {
        cout << (char)(r + 55);
    }
}

int main(int argc, char const *argv[])
{
    ll n; cin >> n;
    if( n == 0) cout << 0 << endl;
    else
        covert(n);
    return 0;
}