/*
Quảng trường Nhà hát ở thủ đô Berland có hình chữ nhật với kích thước n × m mét. 
Nhân dịp kỷ niệm thành phố, một quyết định đã được đưa ra để lát Quảng trường bằng những viên bằng đá granit vuông.
Mỗi viên đá hình vuông có kích thước a × a.Số lượng viên đá ít nhất cần thiết để lát Quảng trường là bao nhiêu?
 Nó được phép che phủ bề mặt lớn hơn Quảng trường Nhà hát. Nó không được phép phá vỡ các viên đá. 
 Các cạnh của viên đá phải song song với các cạnh của Quảng trường.

Gợi ý : Tính xem cần bao nhiêu viên đã để phủ kín chiều rộng, chiều dài của HCN rồi đem nhân vs nhau sẽ ra số viên đá cần, 
chú ý trường hợp n và m chia hết cho a hoặc ko chia hết.

Input Format
3 số nguyên dương n, m, a.
Constraints

1<=n,m,a<=10^9
Output Format

Viết số lượng viên đá cần thiết để lát kín quảng trường.
Sample Input 0

6 6 4
Sample Output 0
4

*/

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int a;
    int n, m;
    cin >> n >> m >> a;
    int x, y;
    if(n % a == 0)
        x = n / a;
    else
        x = n /a + 1;
    if(m % a == 0)
        y = m / a;
    else 
        y = m / a + 1;
    cout << 1ll * x * y;
    
    return 0;
}
