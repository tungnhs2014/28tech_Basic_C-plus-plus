/*
Cho một số nguyên không âm N, hãy in ra chữ số đầu tiên của N.

Input Format

Số nguyên không âm N

Constraints

0≤n≤10^18

Output Format

In ra chữ số đầu tiên của N.

Sample Input 0

56721
Sample Output 0

5
*/

#include <bits/stdc++.h>
using namespace std;
using ll =  long long;

int solve(ll n)
{
    if(n < 10)
    {
        return n;
    }
    else
    {
        return solve(n / 10);
    }
}

int main(int argc, char const *argv[])
{
    ll n; cin >> n;
    cout << solve(n) << endl;
    return 0;
}