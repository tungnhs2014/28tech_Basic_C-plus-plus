/*Bizon the Champion gần đây đã có một món quà - một tủ kính mới với n kệ và anh quyết định đặt tất cả những món quà của mình ở đó. 
Tất cả các món quà có thể được chia thành hai loại: huy chương và cúp. Bizon the Champion có a1 cúp giải nhất,
a2 cúp giải nhì và a3 cúp giải ba. Bên cạnh đó, anh có b1 huy chương giải nhất, 
b2 huy chương giải nhì và b3 huy chương giải ba. Đương nhiên, phần thưởng trong tủ phải sắp xếp cho thật đẹp,
đó là lý do Bizon the Champion quyết định tuân theo các quy tắc: bất kỳ kệ nào cũng không thể chứa cả cúp và huy chương cùng một lúc;
không có kệ có thể chứa nhiều hơn 5 cúp; không có kệ có thể có hơn 10 huy chương. 
Giúp Bizon the Champion tìm hiểu xem có thể đặt tất cả các phần thưởng để tất cả các điều kiện được đáp ứng hay không.

Gợi ý : Tính tổng số cúp => tìm số kệ đựng cúp (chia hết cho 5 hay ko), ví dụ 12 cúp => 3 kệ, 10 cúp => 2 kệ

Tính tổng số huy chương => tìm kệ đựng huy chương (chia hết cho 10 hay ko)

Nếu tổng kệ <= n thì in YES

Input Format

Dòng đầu tiên chứa các số nguyên a1, a2 và a3. Dòng thứ hai chứa các số nguyên b1, b2 và b3 (0 ≤ b1, b2, b3<= 100). 
Dòng thứ ba chứa số nguyên n. Các số trong các dòng được phân tách bằng khoảng trắng đơn.

Constraints
0 ≤ a1, a2, a3<= 100; 1 <=n <=100;

Output Format

In "YES" (không có dấu ngoặc kép) nếu tất cả các phần thưởng có thể được đưa lên kệ theo cách được mô tả. 
Nếu không, hãy in "NO" (không có dấu ngoặc kép).

Sample Input 0

46 76 52 40 60 67 
11
Sample Output 0

NO
*/

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    long long a1, a2, a3, b1, b2, b3, n;
    long long tong_1 = 0, tong_2 = 0, cach_1 = 0, cach_2 = 0;
    cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;
    cin >> n;
    tong_1 = a1 + a2 + a3;
    tong_2 = b1 + b2 + b3;

    if(tong_1 % 5 == 0) 
        cach_1 = tong_1/5;
    else
        cach_1 = (tong_1/5) + 1; 

    if(tong_2 % 10 == 0) 
        cach_2 = tong_2/10;
    else
        cach_2 = (tong_2/10) + 1; 

    if((cach_1 + cach_2) < n)
        cout << "YES";

    return 0;
}
