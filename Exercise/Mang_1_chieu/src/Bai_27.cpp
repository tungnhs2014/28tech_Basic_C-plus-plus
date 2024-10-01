/*
Cho dãy số A[] gồm N phần tử. Ở mỗi thao tác bạn có thể tăng các phần tử trong mảng lên 1 vài đơn vị,
hãy xác định số dơn vị tối thiểu cân thêm vào các phân tử trong mảng sao cho mảng trở thành 1 đãy tăng 
chặt. Ví dụ: dãy 1 2 3 7 8 là một dãy tăng chặt. nhưng dãy 1 2 2 7 8 không phải lã 1 dãy tăng chặt. 
Ví dụ với mảng ban đầu là 1 3 3 2 và d = 2, ta cần thực hiện thao tác thứ nhất thêm d vào phần tử thứ 3 
trong mảng, mảng trở thành 1 3 5 2, ta tiếp tục thực hiện 2 thao tác thêm d vào phần tử thứ 4, mảng trở
thành dãy tăng chặt 1 3 5 6
Input:
Dòng đầu tiên là số nguyên N và X. Dòng tiếp theo gồm N só nguyên A[i]
Constraints
1 <= N <= 10^4; 0 <= A[i] <= 10^6
Output:
In ra số thao tác tối thiểu cần thực hiện để biến mảng thành dãy tăng chặt
Sameple Input 0
3 3
15 17 9
Sameple Output 0
3
*/

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(int argc, char const *argv[])
{
    int n, d; cin >> n >> d;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    ll ans = 0;
    for(int i = 1; i < n; i++)
    {
        if(a[i] <= a[i -1])
        {
            int tmp = a[i-1] - a[i] + 1;
            int ope;
            if(tmp % d == 0) ope = tmp /d;
            else ope = tmp/d + 1;
            ans += ope;
            a[i] += ope*d;
        }
    }
    cout << ans << endl;
    return 0;
}
