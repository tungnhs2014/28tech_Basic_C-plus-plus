/*
Cho một số nguyên không âm N, hãy tính tổng chữ số của N sử dụng kỹ thuật đệ quy.

Input Format

Số nguyên không âm N

Constraints

0≤n≤10^18

Output Format

Tổng các chữ số của N

Sample Input 0

123456789
Sample Output 0

45
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
        return n % 10 + solve(n / 10);
    }
}

int main(int argc, char const *argv[])
{
    ll n; cin >> n;
    cout << solve(n) << endl;
    return 0;
}

