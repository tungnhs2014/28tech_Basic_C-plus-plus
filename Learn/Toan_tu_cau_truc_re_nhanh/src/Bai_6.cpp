/*
Cho một số nguyên không âm N.Bạn hãy thực hiện viết câu lệnh để kiểm tra các điều kiện sau :
N có phải là số chẵn? (Kiểm tra số dư của N với 2 và so sánh 0)
N có phải là số vừa chia hết cho 3 vừa chia hết cho 5? (Kết hợp 2 điều kiện sử dụng &&)
N có phải là số chia hết 3 nhưng không chia hết cho 7? (Kết hợp 2 điều kiện sử dụng &&)
N có phải là số chia hết cho 3 hoặc 7? (Kết hợp 2 điều kiện sử dụng ||)
N là số lớn hơn 30 và nhỏ hơn 50? (Kết hợp 2 điều kiện sử dụng &&)
N có phải là số không nhỏ hơn 30 và chia hết cho ít nhất một trong 3 số 2, 3, 5? (Lớn hơn hoặc bằng 30 && (chia hết ....
N có phải là số có 2 chữ số có chữ tận cùng là một số nguyên tố? (>= 10, <= 99, kiểm tra chữ số tận cùng là 2, 3, 5, 7)
N có phải là số không vượt quá 100 và chia hết cho 23?
N không thuộc đoạn [10, 20]?
N có chữ số tận cùng là bội số của 3?

Input Format
Số nguyên dương N
Constraints
1<=N<=10^6
Output Format
In ra 10 dòng, mỗi dòng là "YES" hoặc "NO" tương ứng với 10 điều kiện. 
Nếu N thỏa mãn điều kiện thứ i thì dòng i in ra YES, ngược lại in ra NO.

Sample Input 0
263
Sample Output 0
NO
NO
NO
NO
NO
NO
NO
NO
YES
YES
*/

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n; cin >> n;
    
    if(n % 2 == 0) cout << "YES\n";
    else cout <<"NO\n";

    if(n % 3 == 0 && n % 5 == 0) cout << "YES\n";
    else cout <<"NO\n";

    if(n % 3 == 0 && n % 7 != 0) cout << "YES\n";
    else cout <<"NO\n";

    if(n % 3 == 0 || n % 7 == 0) cout << "YES\n";
    else cout <<"NO\n";

    if(n > 30 && n < 50) cout << "YES\n";
    else cout <<"NO\n";

    if(n >= 30 && (n % 2 == 0 || n % 3 == 0 || n % 5 == 0)) cout << "YES\n";
    else cout <<"NO\n";

    if(n >= 10 && n <= 99 && (n % 10 == 2 || n % 10 == 3 || n % 10 == 5 || n % 10 == 7)) cout << "YES\n";
    else cout <<"NO\n";

    if(n <= 100 && n % 23 == 0) cout << "YES\n";
    else cout <<"NO\n";

    if(n <= 9 || n >= 21) cout << "YES\n";
    else cout <<"NO\n";

    if(n % 10 % 3 == 0) cout << "YES\n";
    else cout <<"NO\n";

    return 0;
}

