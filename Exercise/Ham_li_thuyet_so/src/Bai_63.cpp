/*
Dãy số Fibonacci được định nghĩa như sau: F1 = 0, F2 = 1; Fi = Fi-1 + Fi-2. Hãy viết chương trình in ra số Fibonacci thứ n.

Input Format

Số nguyên dương n

Constraints

1≤n≤10^6

Output Format

Số fibonacci thứ n lấy dư với 1000000007

Sample Input 0

5
Sample Output 0

3
Explanation 0

Các số fibonacci đầu tiên : 0 1 1 2 3 5 8. Vậy số fibonacci thứ 5 là 3
*/

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void check(ll n)
{
    ll f[100];
    f[0] = 0; f[1] = 1;
    for(int i = 2; i <= 92; ++i)
    {
        f[i] = f[i-1] + f[i -2];
    }
    for(int i = 2; i <=92; ++i)
    {
        if(n == i)
            cout << f[i] << " ";
    }
}

int main(int argc, char const *argv[])
{
    ll n; cin >> n;
    check(n);
    return 0;
}