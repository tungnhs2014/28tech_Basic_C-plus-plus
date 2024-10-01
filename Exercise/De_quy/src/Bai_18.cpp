/*
Cho số nguyên không âm N, hãy tính tổng các chữ số chẵn, tổng các chữ số lẻ của N.

Input Format

Số nguyên không âm N.

Constraints

0≤n≤10^18

Output Format

Dòng đầu tiên in ra tổng các chữ số chẵn. Dòng thứ 2 in ra tổng các chữ số lẻ.

Sample Input 0

123456
Sample Output 0

12
9
*/

#include <bits/stdc++.h>
using namespace std;
using ll =  long long;

int int_chan(ll n)
{
    if( n < 10)
    {
        if(n % 2 == 0)
            return n;
        else
            return 0;
    }
    else
    {
        if(n % 10 % 2 == 0)
            return n % 10 + int_chan(n / 10);
        else
            return int_chan(n / 10);
    }
}

int int_le(ll n)
{
    if( n < 10)
    {
        if(n % 2 == 1)
            return n;
        else
            return 0;
    }
    else
    {
        if(n % 10 % 2 == 1)
            return n % 10 + int_le(n / 10);
        else
            return int_le(n / 10);
    }
}

int main(int argc, char const *argv[])
{
    ll n; cin >> n;
    cout << int_chan(n) << endl;
    cout << int_le(n) << endl;
    return 0;
}