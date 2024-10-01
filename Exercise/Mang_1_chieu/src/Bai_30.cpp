/*
Cho Cho dãy số A[] gồm N số nguyên không âm và số K, Nhiệm vụ của bạn là hãy chia mảng A[] thành 2 mảng con có kích cỡ K và N-K
sao cho hiệu giữa tổng 2 mảng con là lớn nhất. Ví dụ với mảng A[] = {8, 4, 5, 2, 10}, K = 2 ta có kết quả là 17 vì mảng A[] được
chia thành 2 mảng {4, 2} và {8, 5 ,10} có hiệu 2 mảng con là 23 - 6 = 17 lớn nhất
Input:  
Dòng đầu tiên là 2 số N và K. Dòng thứ 2 là số N trong mảng A
Constraints
1 <= K < N <= 10^5; 0 <= A[i] <= 10^7
Output:
In ra hiệu lớn nhất có thể
Sameple Input 0
8 3
1 1 1 1 1 1 1 1
Sameple Output 0
2

Sameple Input 1
5 2
8 4 5 2 10
Sameple Output 1
17
*/
 
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(int argc, char const *argv[])
{
    int n, k; cin >> n >> k;
    int a[n];
    for(int i = 0; i <n; i++)  cin >> a[i];
    k = max(k, n- k);
    ll sum1 = 0, sum2 = 0;
    sort(a, a + n, greater<int>());
    for(int i = 0; i < n; i++)
    {
        if(i < k) sum1 += a[i];
        else sum2 += a[i];
    }
    cout << sum1 - sum2 << endl;
    return 0;
}
