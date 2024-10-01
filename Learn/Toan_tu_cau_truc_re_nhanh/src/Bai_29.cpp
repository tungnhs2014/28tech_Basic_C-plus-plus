/*
Cho 4 số a, b, c, d. Hãy kiểm tra xem 4 số này có thể theo thứ tự tạo thành 1 cấp số nhân với công bội nguyên 
theo đúng thứ tự a, b, c, d hay không?

Gợi ý : Tìm công bội (b / a) nếu b chia hết cho a, sau đó lấy b nhân công bội và so sánh vs c, c nhân công bội và so sánh vs d.

Input Format

1 dòng chứa 4 số a, b, c, d.

Constraints

1<=a,b,c,d<=10^6

Output Format

In ra YES nếu 4 số a, b, c, d tạo thành 1 câp số nhân, ngược lại in ra NO.

Sample Input 0

92 92 92 92
Sample Output 0

YES
*/

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    long long a,b,c,d;
    cin >> a >> b >> c >> d;

    long long q = b/a;

    if(b*q == c && c*q == d) 
        cout << "YES";
    else
        cout <<"NO";

    return 0;
}
