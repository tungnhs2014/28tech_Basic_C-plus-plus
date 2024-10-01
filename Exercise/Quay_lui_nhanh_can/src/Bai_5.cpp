/*
Cho ma trận A[M][N]. Nhiệm vụ của bạn là đếm tất cả các đường đi từ phần tử A[0][0] đến phần từ A[M-1][N-1].
Bạn chỉ phép dịch chuyển xuống dưới hoặc sang phải phần tử liền kề với vị trí hiện tại

Intput:
Dòng 1 là 2 số M, N tương ứng với số hàng và số cột của ma trận. Dòng tiếp theo đưa vào các phần tử của ma
trận A[][]; các số được viết cách nhau một vài khoảng trống

Constraints
1 <= M, N <= 10; A[i][j] <= 100

Output:
Đưa ra số cách di chuyển

Sample input 0:
3 5
4 6 8 3 1
9 8 8 9 1
10 6 3 4 5
Sample output 0:
15

*/

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int a[100][100];
int n, m, ans = 0;

void nhap()
{
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++) cin >> a[i][j];
    } 
}

void Try(int i, int j)
{
    if(i == n && j == m)
    {
        ++ans;
    }
    if(i + 1 <= n)
    {
        Try(i + 1, j);
    }
    if(j + 1 <= m)
    {
        Try(i, j + 1);
    }
}

int main(int argc, char const *argv[])
{
    nhap();
    Try(1, 1);
    cout << ans << endl;    
    return 0;
}
