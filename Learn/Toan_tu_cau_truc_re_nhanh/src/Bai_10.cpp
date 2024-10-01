/*
Cho 3 cạnh a, b, c là độ dài 3 cạnh của tam giác, kiểm tra xem a, b, c có thể tạo thành một tam giác hợp lệ hay không?
Gợi ý : Tam giác hợp lệ là tam giác có 3 cạnh đều dương, và tổng hai cạnh luôn lớn hơn cạnh còn lại 
=> Cần 6 điều kiện và kết hợp toán tử &&

Input Format
1 dòng chứa 3 số a, b, c.

Constraints
-10^6<=a,b,c<=10^6

Output Format
In ra YES nếu a, b, c là 3 cạnh của 1 tam giác hợp lệ, ngược lại in ra NO.

Sample Input 0
3 4 5
Sample Output 0
YES
*/

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int a, b, c;
    cin >> a >> b >> c;
    if(a > 0 && b > 0 && c > 0 && (a +b > c) && (a +c > b) && (b + c > a))
        cout << "YES\n";
    else cout << "NO\n";
    
    return 0;
}
