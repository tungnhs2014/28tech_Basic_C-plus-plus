/*
Hãy phân tích một số nguyên dương N thành thừa số nguyên tố

Input Format

Số nguyên dương N

Constraints

2≤N≤10^16

Output Format

Phân tích thừa số nguyên tố của N, xem ví dụ để rõ hơn format.

Sample Input 0

60
Sample Output 0

2^2 * 3^1 * 5^1
*/

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(ll n)
{
    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0)
        {
            int count = 0;
            while(n % i == 0)
            {
                ++count;
                n /= i;
            }
            cout << i << "^" << count;
            if(n > 1)
                cout << " * ";
        }
    }
    if(n > 1)
        cout << n << "^"<<1;
}

int main(int argc, char const *argv[])
{
    ll n; cin >> n;
    solve(n);
    return 0;
}
