/*
Cho một số nguyên không âm N, hãy in ra dạng biểu diễn nhị phân của số N.
Input Format
Số nguyên không âm N

Constraints
0≤n≤10^18

Output Format
Biểu diễn nhị phân của số nguyên N.

Sample Input 0
8
Sample Output 0
1000
*/

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void covert(ll n)
{
    if(n == 0) return; // ket thuc de quy
    covert(n/2);
    cout << n % 2;
}

int main(int argc, char const *argv[])
{
    ll n; cin >> n;
    if( n == 0) cout << 0 << endl;
    else
        covert(n);
    return 0;
}
