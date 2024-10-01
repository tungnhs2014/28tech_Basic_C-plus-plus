/*
Cho dãy số A[] gồm có N phần tử, nhiệm vụ của bạn là đếm số lượng cặp số bằng nhau trong mảng
Input:
Dòng đầu tiên là số nguyên N. Dòng tiếp thoe gồm N số nguyên A[i]
Constraints
1 <= N <= 10^6; 1 <= A[i] <= 10^6
Ouput:
In ra số lượng cặp số bằng nhau trong mảng, không xét đến thứ tự
Sample Input 0:
6
2 2 1 3 2 3
Sample Output 0:
4
*/

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int dem[1000001];

int main(int argc, char const *argv[])
{
    int n; cin >> n;
    for(int i = 0; i < n; i++)
    {
        int x; cin >> x;
        dem[x]++;
    }
    ll ans = 0;
    for(int i = 0; i <= 1000000; i++)
    {
        if(dem[i])
        {
            ans += 1ll * dem[i] *(dem[i] - 1)/2;
        }
    }
    cout << ans << endl;
    return 0;
}
