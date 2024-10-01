/*
Cho số tự nhiên N. Nhiệm vụ của bạn là hãy đếm tất cả các số có đúng ba ước số không vượt quá n. Ví dụ n=100, ta có các số 4.

Input Format

Số nguyên dương N

Constraints

1≤N≤10^12

Output Format

Đưa ra kết quả mỗi theo từng dòng.

Sample Input 0

838000000000
Sample Output 0

72397
*/

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int maxn = (int)1e7;
int prime[maxn + 1];

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


int main(int argc, char const *argv[])
{
    sang();
    ll n; cin >> n;
    int dem = 0;
    for(ll i = 1; i <= sqrt(n); i++)
    {
        if(prime[i]){
            ++dem;
        }
    }
    cout << dem;
    return 0;
}