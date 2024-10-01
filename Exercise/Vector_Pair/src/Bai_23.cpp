/*
Cho 2 dãy số nguyên dương A và B. Hãy trộn 2 dãy với nhau sao cho dãy A được đưa vào các vị trí có chỉ số chắn,
dãy B được đưa vào các vị trí có chỉ sso lẻ. Đồng thời, dãy A được sắp xếp tăng dần, còn dãy B được sắp xếp giảm dần.
(Chú ý: chỉ số tính từ 0)
Input:
Dòng đầu tiên ghi số n là số lượng phàn từ của 2 dãy. Dòng tiếp theo ghi n số nguyên dương của dãy A. Dòng tiếp theo ghi n
số nguyên dương của dãy B
Constraints:
1 <= n <= 10^5; 1 <= A[i], B[i] <= 10^9
Output:
In ra kết quả theo yêu cầu của bài toán
Sample Input
4
4 2 7 1
5 6 2 8
Sample Output:
1 8 2 6 4 5 7 2
*/

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n; cin >> n;
    int a[n], b[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];
    sort(a, a + n);
    sort(b, b + n, greater<int>());

    for(int i = 0; i < n; i++)
    {
        cout << a[i] << ' ' << b[i] << ' ';
    }
    return 0;
}

