/*
Cho mảng số nguyên A[] có N phần tử đã được sắp xếp theo thứ tự tăng dần. Hãy viết các hàm sau với độ phức tạp O(logN) :
Tìm vị trí xuất hiện đầu tiên của phần tử X trong mảng, nếu không tồn tại X in ra -1.
Tìm vị trí xuất hiện cuối cùng của phần tử X trong mảng, nếu không tồn tại X in ra -1.
Tìm vị trí xuất hiện đầu tiên của phần tử >= X trong mảng, nếu không tồn tại phần tử >=X in ra -1.
Tìm vị trí xuất hiện đầu tiên của phần tử > X trong mảng, nếu không tồn tại phần tử >X in ra -1.
Tìm số lần xuất hiện của phần tử X trong mảng sử dụng kết quả của hàm 1 và 2.

Input Format
Dòng đầu tiên là số nguyên dương N và X Dòng thứ 2 là N phần tử trong mảng, các phần tử viết cách nhau một dấu cách.

Constraints
1<=N<=10^6; 0<=A[i],X<=10^6;

Output Format
In ra 5 dòng tương ứng với 5 kết quả của 5 hàm đề bài yêu cầu.

Sample Input 0
10 1160
19 1600 2172 2921 3409 4185 4639 6098 6744 9192

Sample Output 0
-1
-1
1
1
0
*/

#include <bits/stdc++.h>
using namespace std;

// lower_bound(): tìm vị trí đầu tiên của phần tử >= x trong mảng, vector tăng dần
// -- Nếu mà không tìm thấy phân tử >= x, thì nó trả về a + n, e.end()
// upper_bound(): tìm vị trí đầu tiên của phần tử > x trong mảng, vector tăng dần
// -- Nếu mà không tìm thấy phân tử > x, thì nó trả về a + n, e.end()

int main(int argc, char const *argv[])
{
    int n, x; cin >> n >> x;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    auto it = upper_bound(a, a + n, x);
    int chiso = it -a ;
    cout << *it << endl;
    cout << chiso << endl;
    return 0;
}
