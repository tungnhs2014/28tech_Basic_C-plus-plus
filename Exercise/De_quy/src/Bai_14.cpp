/*
Cho một số nguyên không âm N, hãy đếm số lượng chữ số của N.

Input Format

Số nguyên không âm N

Constraints

0≤n≤10^18

Output Format

Số lượng chữ số của N.

Sample Input 0

123452
Sample Output 0

6
*/

#include <bits/stdc++.h>
using namespace std;
using ll =  long long;

int solve(ll n)
{
    if(n < 10)
    {
        return 1;
    }
    else
    {
        return 1 + solve(n / 10);
    }
}

int main(int argc, char const *argv[])
{
    ll n; cin >> n;
    cout << solve(n) << endl;
    return 0;
}