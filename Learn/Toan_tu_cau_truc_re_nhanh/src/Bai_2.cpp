/*
Yêu cầu: Cho ba số nguyên a , b và c, hãy tính S = a*(b+c)+b*(a+c).

Input Format

3 số a, b, c trên 1 dòng.

Constraints

-10^8≤a,b,c≤10^8

Output Format

In ra giá trị của biểu thức.

Sample Input 0

1 2 3
Sample Output 0

13s
*/

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    long long a, b, c, sum = 0;
    cin >> a >> b >> c;
    sum = a*(b +c) + b*(a + c);
    cout << sum;
    return 0;
}
