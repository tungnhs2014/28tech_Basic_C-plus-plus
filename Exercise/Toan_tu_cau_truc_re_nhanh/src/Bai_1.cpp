/*
Cho biểu thức A(x) = x^3 + 3x^2 + x + 1 Với giá trị của x được nhập từ bàn phím, tính và in ra giá trị của biểu thức trên

Input Format

Số nguyên x

Constraints

-10^5≤x≤10^5

Output Format

In ra kết quả cùa biểu thức

Sample Input 0

2
Sample Output 0

23
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    long long sum = 0;
    cin >> x;
    sum = 1ll * pow(x, 3) + 1ll*3*pow(x, 2) + x +1;
    cout << "sum = " << sum;

    return 0;
}   