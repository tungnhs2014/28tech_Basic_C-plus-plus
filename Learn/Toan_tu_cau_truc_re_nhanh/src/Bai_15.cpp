/*
28tech muốn nấu một món súp. Để làm điều đó, anh ta cần mua chính xác n lít nước. 
Chỉ có hai loại chai nước trong cửa hàng gần đó - chai 1 lít và chai 2 lít. 
Có vô số chai của hai loại này trong cửa hàng. 
Chai loại thứ nhất có gía a burles và chai loại thứ hai có giá tương ứng b burles. 
28tech muốn chi càng ít tiền càng tốt. Nhiệm vụ của bạn là tìm ra số tiền tối thiểu (bằng burles)
28tech cần mua chính xác n lít nước ở cửa hàng gần đó nếu chai loại thứ nhất có giá a burles và chai loại thứ hai có giá b burles.

Gợi ý : Kiểm tra xem chai nào rẻ hơn (giá tiền 1Lit) thì sẽ ưu tiên mua chai đó, 
nếu chai 1l rẻ hơn thì mua toàn bộ n chai 1l, còn chai 2lit rẻ hơn thì chia làm 2 trường hợp. 
N chẵn thì mua n / 2 chai 2l, n lẻ thì phải mua thêm 1 chai 1l vì không được mua thừa.

Input Format
3 số n,a,b là số nguyên

Constraints
1<=n<=10^12; 1<=a,b<=1000

Output Format
Số tiền ít nhất để mua được n lit nước. Chú ý bạn phải mua chính xác n lít nước, 
không mua thiếu cũng không mua thừa.

Sample Input 0
10 1 3
Sample Output 0
10
*/

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{   
    long long n;
    int a, b;
    cin >> n >> a >> b;
    if(b < 2*a)
    {
        cout << (n/2)*b + (n % 2)*a << endl;
    }
    else
    {
        cout << n*a << endl;
    }
    return 0;
}
