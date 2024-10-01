/*
Bạn được cung cấp một bảng hình chữ nhật có kích thước M × N hình vuông đơn vị. 
Ngoài ra, bạn được cung cấp một số lượng không giới hạn các mảnh domino tiêu chuẩn kích thước 2 × 1. 
Bạn được phép xoay các mảnh domino. Bạn được yêu cầu đặt càng nhiều domino càng tốt trên bảng để đáp ứng các điều kiện sau:

Mỗi domino hoàn toàn bao gồm hai hình vuông đơn vị.

Không có hai domino trùng nhau.

Mỗi domino nằm hoàn toàn bên trong bảng. Nó được phép chạm vào các cạnh

của bảng. Tìm số lượng domino tối đa thỏa mãn điều kiện trên.

Gợi ý : Tính xem mỗi cột cần đặt bao nhiêu thanh domino (đặt dọc) => nhân với số cột là ra số thanh domino. 
Trong trường hợp số hàng của HCN là số chẵn thì số domino trên 1 cột sẽ là m / 2, còn trong trường hợp hàng lẻ thì 
bạn tính số domino của HCN (m - 1) * n trước rồi xét hàng cuối cùng (đặt ngang)

Input Format

2 số nguyên dương M và N.

Constraints

1<=M,N<=10^9

Output Format

In ra số thanh domino cần thiết.

Sample Input 0

3 3
Sample Output 0

4
Sample Input 1

2 4
Sample Output 1

4
*/

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    long long n, m; cin >> n >> m; // n la so hang, m la so cot
    if(n % 2 == 0)
        cout << n/2 * m;
    else
        cout << (n/2 *m) + m/2;
    return 0;
}
