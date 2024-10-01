/*
Cho dãy A[] gồm N phần tử, nhiệm vụ của bạn là tính tổng các số trong dãy từ chỉ số l đến r
Input:
Dòng đầu tiên là số nguyên N, dòng tiếp theo gồm N phần tử số nguyên A[i]. Dòng tiếp theo là số lượng truy vấn Q Q
dòng tiếp theo mỗi dòng là 2 chỉ số l,r
Constraints
1 <= N <= 10^6; 1 <= A[i] <= 10^9; 1 <= Q <= 1000; 1 <= l <=r <= N
Output:
In ra tổng các phần tử trong đoạn [l, r] của từng truy vấn trên 1 dòng
Smaple Input:
5
1 2 3 4 5
1
1 3
Sample Ouput:
6
*/

// mảng cộng dồn, tổng tiền tố.
// prefix sum

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// int main(int argc, char const *argv[])
// {
//     int n; cin >> n;
//     int a[n];
//     for(int i = 0; i < n; i++) cin >> a[i];

//     int q; cin >> q;
//     while(q--)
//     {
//         int l, r; cin >> l >> r;
//         ll sum = 0;
//         --l; --r;
//         for(int i = l; i <= r; i++)
//         {
//             sum += a[i];
//         }
//         cout << sum << endl;
//     }
//     return 0;
// }

int main(int argc, char const *argv[])
{
    int n; cin >> n;
    int a[n];
    ll dp[n];
    for(int i = 0; i < n; i++) 
    {
        cin >> a[i];
        if(i == 0) dp[i] = a[i];
        else dp[i] = dp[i - 1] + a[i];
    }
    int q; cin >> q;
    while(q--)
    {
        int l, r; cin >> l >> r;
        --l; --r;
        // dp[r] - dp[l - 1]
        if(l == 0) cout <<dp[r] << endl;
        else cout << dp[r] - dp[l - 1] << endl;
    }
    return 0;
}

