/*
Cho ma trận vuông cỡ NxN gồm N hàng, mỗi hàng N cột. Hãy đếm các số thuận nghịch thuộc tam giác dưới của ma trận trên.

Input Format

Dòng đầu tiên là số N. N dòng tiếp theo mỗi dòng có N số.

Constraints

1≤n≤205; Các phần tử trong ma trận là số dương không quá 10^9.

Output Format

In ra số lượng số thuận nghịch trong ma trận.

Sample Input 0

3
1 2 3
22 14 56
76 5 4
Sample Output 0

4
Explanation 0

4 số là số thuận nghịch thuộc tam giác dưới là : 1, 22, 4, 5
*/

#include <bits/stdc++.h>
using namespace std;

bool tn(int n)
{
    int temp = 1, n1 = n;
    int ng = 0;
    while(n)
    {
        temp = n % 10;
        ng = ng * 10 + temp;
        n /= 10;
    }
    if(n1 == ng) return true;
    else return false;
}

int main(int argc, char const *argv[])
{
    int n; cin >> n;
    int a[n][n];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    int cnt = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            if(tn(a[i][j])) cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
