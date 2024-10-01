/*
Cho 1 mê cung được mô tả dưới dạng ma trận nhị phân có N hàng và N cột. Một con chuột bát đầu từ ô (1, 1) và muốn di chuyển tới ô (N, N).
Con chuột chỉ được di chuyển xuống dưới hoặc sang phải và chỉ được di chuyển tới ô nào đó nếu ô đó có giá trị là 1. Bạn hãy in ra các cách
hợp lệ của con chuột, trong đó nếu con chuột đi sang phải thì nước đi được mô tả là chữ R, và nếu con chuột đi xuống dưới thì nước đi mô tả
là chứ D. Nếu con chuột không thể đi xuống ô (N, N) thì in ra -1. Chú ý trên mỗi đường đi con chuột chỉ có thể đi qua 1 ô nào đó đúng 1 lần.

Intput:
Dòng thứ nhất đưa vào N; N dong tiếp theo mỗi dòng gồm N số

Constraints
1 <= N <= 12; Dữ liệu đảm bảo ô (1, 1) là só 1

Output:
Đưa ra các đường đi hợp lệ theo thứ tự từ điển tăng đần trên từng dòng

Sample input 0:
4
1 1 0 1
1 1 1 1
1 0 1 1
1 1 1 1
Sample output 0:
DDDRRR
DRRDDR
DRRDRD
DRRRDDs
RDRDDR
RDRDRD
RDRRDD

*/

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, a[100][100], res = 0;

char kq[1000]; // 1 => cnt

void Try(int i, int j, int cnt)
{
    if(i == n && j == n)
    {
        res = 1;
        for(int x = 1; x < cnt; x++)
        {
            cout << kq[x];
        }
        cout << endl;
    }   
    // Xet cai nuoc di tiep theo
    if(i + 1 <= n && a[i + 1][j] == 1)
    {
        kq[cnt] = 'D';
        a[i + 1][j] = 0; // danh dau o nay da qua
        Try(i + 1, j, cnt + 1);
        a[i + 1][j] = 1; // backtrack
    }
    if(j + 1 <= n && a[i][j + 1] == 1)
    {
        kq[cnt] = 'R';
        a[i][j + 1] = 0;
        Try(i, j + 1, cnt + 1);
        a[i][j + 1] = 1; // backtrack
    }
}

int main(int argc, char const *argv[])
{
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++) cin >> a[i][j];
    }
    Try(1, 1, 1);
    if(res == 0) cout << "-1\n";   
    return 0;
}
