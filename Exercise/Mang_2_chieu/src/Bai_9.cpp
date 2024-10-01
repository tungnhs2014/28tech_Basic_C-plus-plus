/*
Cho ma trận vuông cỡ NxN gồm N hàng, mỗi hàng N cột. Hãy đếm các số nguyên tố trên đường chéo chính và đường chéo phụ,
mỗi phần tử là số nguyên tố thỏa mãn chỉ đếm 1 lần.

Input Format

Dòng đầu tiên là số N. N dòng tiếp theo mỗi dòng có N số.

Constraints

1≤n≤200; Các phần tử trong ma trận là số dương không quá 10^9;

Output Format

In ra số lượng số nguyên tố trên đường chéo chính và phụ.

Sample Input 0

4
1 2 3 4
5 6 7 8
9 10 1 2
2 3 5 7
Sample Output 0

3
Explanation 0

Các phần tử là số nguyên tố trên đường chéo chính là : 7. Các phần tử là số nguyên tố trên đường chéo phụ là : 2, 7
*/

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool nt(int n)
{
    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0) return false;
    }
    return n > 1;
}

int main(int argc, char const *argv[])
{
    int n; cin >> n;
    int a[n][n];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++) cin >> a[i][j];
    }
    int cnt = 0;
    for(int i = 0; i < n; i++)
    {
        if(nt(a[i][i])) ++cnt;
        if(nt(a[i][n-i-1])) ++cnt;
    }
    if(n % 2 == 1)
    {
        if(nt(a[n/2][n/2])) --cnt;
    }
    cout << cnt << endl;
    return 0;
}
