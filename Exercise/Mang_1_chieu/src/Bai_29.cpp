/*
Cho Cho dãy số A[] gồm các số từ 0 đến 9, Nhiệm vụ của bạn là tìm tổng nhỏ nhất của hai số được tạo bởi các số trong mảng A[].
Chú ý tất cả các số trong mảng A[] đều được sử dụng để tạo nên 2 số. Chú ý nếu tạo thành các số có số 0 đứng đầu thì bạn có thể 
loại bỏ các số 0 vô nghĩa đó.
Input:
Dòng đầu tiên là số nguyên N. Dòng tiếp theo gồm N số nguyên A[]
Constraints
1 <= N <= 30; 0 <= A[i] <= 9
Output:
In kết quả của bài toán trên 1 dòng
Sameple Input 0
6
6 8 4 5 2 3
Sameple Output 0
604
*/


#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(int argc, char const *argv[])
{
    int n; cin >> n;
    int a[n];
    for(int i = 0; i <n; i++)  cin >> a[i];
    sort(a, a + n);
    ll first = 0, second = 0;
    for(int i = 0; i < n; i++)
    {
        if(i % 2 == 0) first = first * 10 + a[i];
        else second = second * 10 + a[i];
    }
    cout << first + second << endl;
    return 0;
}
