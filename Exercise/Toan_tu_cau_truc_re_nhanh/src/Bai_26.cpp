/*
Cho 4 số nguyên a, b, c, d. Hãy tìm số lớn nhất và nhỏ nhất trong 4 số này.

Input Format

4 số a, b, c, d viết trên 1 dòng và cách nhau một dấu cách.

Constraints

1<=a,b,c,d<=10^18

Output Format

In ra số lớn nhất và nhỏ nhất.

Sample Input 0

546 272 839 508
Sample Output 0

839 272
*/

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    long long a,b,c,d;
    cin >> a >> b >> c >> d;

    cout << max({a, b, c, d}) << " " << min({a, b, c, d});

    return 0;
}