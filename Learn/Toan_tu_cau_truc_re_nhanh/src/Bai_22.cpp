/*
Bạn có số lượng xu không giới hạn với các giá trị 1,2,3,……n (từ 1 tới n). 
Bạn muốn chọn một số bộ tiền có tổng giá trị S. Nó được phép có nhiều đồng tiền có cùng giá trị trong tập hợp.
Số lượng đồng xu tối thiểu cần thiết để có được tổng S là bao nhiêu?

Gợi ý : S = 31, 32, 33, 34, n = 5 => Cần 7 đồng

S = 35, n => Cần 7 đồng
Input Format
Dòng duy nhất của đầu vào chứa hai số nguyên n và S

Constraints
1<=n<=10^6; 1<=S<=10^12

Output Format
In chính xác một số nguyên - số lượng xu tối thiểu cần thiết để có được tổng S.

Sample Input 0
5 11
Sample Output 0
3

Submissions: 184
Max Score: 1
Rate This Challenge:
More
*/

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    long long n, S;
    cin >> n >> S;
    if(S % n == 0) cout << S/n;
    else cout << S/n + 1;
    return 0;
}

