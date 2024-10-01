/*
Cho số tự nhiên N. Nhiệm vụ của bạn là hãy liệt kê tất cả các số có đúng ba ước số không vượt quá n. Ví dụ n=100, ta có các số 4, 9, 25, 49.

Input Format

Số nguyên dương N

Constraints

1≤N≤10^12

Output Format

Đưa ra kết quả trên một dòng

Sample Input 0

100
Sample Output 0

4 9 25 49
*/

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int maxn = (int)1e7;
int prime[maxn + 1];

bool check(ll n)
{
    ll res = 0;
    for(int i = 1; i <= sqrt(n); i++)
    {
        if(n % i == 0)
        {
            ++res;
            if(i != n / i)
                ++res;
        }
    }
    if(res == 3) return true;
    return false;
}

void sang()
{
    for(int i = 0; i <= maxn; i++)
    {
        prime[i] = 1;
    }
    prime[0] = prime[1] = 0;
    for(int i = 2; i <= sqrt(maxn); i++)
    {
        if(prime[i])
        {
            for(int j = i * i; j <= maxn; j += i)
            {
                prime[j] = 0;
            }
        }
    }
}

bool nt(ll n)
{
    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0) return false;
    }
    return n > 1;
}

bool check_1(ll n)
{
    ll can = sqrt(n);
    if(can * can != n)
        return false;
    if(nt(can))  return true;
    else return false;
}

int main(int argc, char const *argv[])
{
    sang();
    ll n; cin >> n;
    for(ll i = 1; i <= sqrt(n); i++)
    {
        if(prime[i]){
            cout << i * i << " ";
        }
    }
    return 0;
}
