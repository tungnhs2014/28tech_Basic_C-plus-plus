/*
Cho số nguyên không âm N, hãy kiểm tra xem tất cả các chữ số của N có phải đều là số chẵn hay không?

Input Format

Số nguyên không âm N.

Constraints

0≤n≤10^18

Output Format

In ra YES nếu n toàn chữ số chẵn, ngược lại in ra NO.

Sample Input 0

2280820
Sample Output 0

YES
*/

#include <bits/stdc++.h>
using namespace std;
using ll =  long long;

bool check_chan(ll n)
{
    if( n < 10)
    {
        if(n % 2 == 0)
            return true;
        else
            return false;
    }
    else
    {
        if(n % 10 % 2 == 0)
            return check_chan(n / 10);
        else
            return false;
    }
}


int main(int argc, char const *argv[])
{
    ll n; cin >> n;
    if(check_chan(n))
        cout << "YES\n";
    else
        cout <<"NO\n";
    return 0;
}