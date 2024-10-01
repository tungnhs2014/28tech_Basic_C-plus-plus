/*
Cho Cho dãy số A[] gồm N phần tử, Nhiệm vụ của bạn là tìm giá trị lớn nhất của tổng bên dưới bằng cách sắp đặt lại các phần tử
trong mảng. Chú ý, kết quả của bài toán có thể rất lớn vì vậy bạn hãy đưa ra kết quả lấy modulo với 10^9 + 7
Input:  
Dòng đầu tiên là số nguyên N. Dòng thứ 2 là gồm N và số nguyên A[i]
Constraints
1 <= N <= 10^5; 0 <= A[i] <= 10^7
Output:
In ra kết quả của bài toán lấy dư với (10^9 + 7)
Sameple Input 0
5 
5 3 2 4 1
Sameple Output 0
40

*/

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;

int main(int argc, char const *argv[])
{
    int n; cin >> n;
    int a[n];
    for(int i = 0; i <n; i++)  cin >> a[i];
    sort(a, a + n);
    ll ans = 0;
    for(int i = 0; i < n; i++)
    {
        ans += 1ll * i* a[i];
        ans %= MOD;
    }
    cout << ans << endl;
    return 0;
}
