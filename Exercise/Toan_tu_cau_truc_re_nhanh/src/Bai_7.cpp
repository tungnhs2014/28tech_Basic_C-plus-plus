/*
Cho 2 số nguyên a và b. Bạn hãy tìm 2 số sau, số thứ 1 là số lớn nhất <= a mà chia hết cho b, 
số thứ 2 là số nhỏ nhất >=a mà chia hết cho b. Chú ý các bạn không được dùng vòng lặp.
Gọi ý : Số thứ 1 : a / b * b
Số thứ 2 : (a + b - 1) / b * b
Hoặc các bạn có thể if else cũng được, ko dùng vòng lặp.
Số thứ 2 nếu dùng if else thì check a chia hết cho b đáp án là a, còn ko thì là (a / b + 1) * b.
Các phép chia đều là chia nguyên
Input Format
1 dòng chứa 2 số a, b.
Constraints
1<=a,b<=10^6
Output Format
Dòng đầu tiên in ra số thứ 1 cần tìm. Dòng thứ 2 in ra số thứ 2 cần tìm.
Sample Input 0
717 689
Sample Output 0
689
1378
*/

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int a, b; cin >> a >> b;
    cout << a / b * b << endl;
    if(a % b == 0) cout << a;
    else cout << (a/b + 1)*b;
    return 0;
}

