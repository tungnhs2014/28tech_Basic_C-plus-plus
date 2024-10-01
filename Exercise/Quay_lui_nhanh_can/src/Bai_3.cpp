/*
Cho 1 mê cung được mô tả dưới dạng ma trận nhị phân có N hàng và N cột. Một con chuột bát đầu từ ô (1, 1) và muốn di chuyển tới ô (N, N).
Con chuột chỉ được di chuyển sang trái, sang phải, lên trên và xuống dưới và chỉ được di chuyển tới ô nào đó nếu ô đó có giá trị là 1. 
Bạn hãy in ra các cách hợp lệ của con chuột, trong đó nếu con chuột đi sang phải thì nước đi được mô tả là chữ R, và nếu con chuột đi xuống 
dưới thì nước đi mô tả là chứ D, nếu đi sang trái thì nước di mô tả là chứ L, nếu đi lên trên thì nước đi được mô tả là chữ U. 
Nếu con chuột không thể đi xuống ô (N, N) thì in ra -1. Chú ý trên mỗi đường đi con chuột chỉ có thể đi qua 1 ô nào đó đúng 1 lần.

Intput:
Dòng thứ nhất đưa vào N; N dong tiếp theo mỗi dòng gồm N số

Constraints
1 <= N <= 8; Dữ liệu đảm bảo ô (1, 1) là só 1

Output:
Đưa ra các đường đi hợp lệ theo thứ tự từ điển tăng đần trên từng dòng

Sample input 0:
4
1 1 1 1
1 1 0 1
1 1 1 1
0 1 1 1

Sample output 0:
DDRDRR
DDRDRURD
DDRRDR
DDRRRD
DDRUURRDDD
DDRUURRDDLDR
DRDDRR
DRDDRURD
DRDRDR
DRDRRD
DRURRDDD
DRURRDDLDR
DRURRDDLLDRR
RDDDRR
RDDDRURD
RDDRDR
RDDRRD
RDLDRDRR
RDLDRDRURD
RDLDRRDR
RDLDRRRD
RRRDDD
RRRDDLDR
RRRDDLLDRR

*/

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, a[100][100], res = 0;

string s = "";

void Try(int i, int j)
{
    if(i == n && j == n)
    {
        res = 1;
        cout << s << endl;
    }   
    // Xet cai nuoc di tiep theo
    if(i + 1 <= n && a[i + 1][j] == 1)
    {
        s += "D";
        a[i + 1][j] = 0; // danh dau o nay da qua
        Try(i + 1, j);
        a[i + 1][j] = 1; // backtrack
        s.pop_back(); // xoa di cai nuoc vua them vao
    }

    if(j - 1 >= 1 && a[i][j - 1] == 1)
    {
        s += "L";
        a[i][j - 1] = 0; // danh dau o nay da qua
        Try(i, j - 1);
        a[i][j - 1] = 1; // backtrack
        s.pop_back(); // xoa di cai nuoc vua them vao
    }
    
    if(j + 1 <= n && a[i][j + 1] == 1)
    {
        s += "R";
        a[i][j + 1] = 0;
        Try(i, j + 1);
        a[i][j + 1] = 1; // backtrack
        s.pop_back(); // xoa di cai nuoc vua them vao
    }

    if(i - 1 >= 1 && a[i - 1][j] == 1)
    {
        s += "U";
        a[i - 1][j] = 0;
        Try(i - 1, j);
        a[i - 1][j] = 1; // backtrack
        s.pop_back(); // xoa di cai nuoc vua them vao
    }
}

int main(int argc, char const *argv[])
{
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++) cin >> a[i][j];
    }
    if(a[1][1])
    {
        a[1][1] = 0;
        Try(1, 1);
    }

    if(res == 0) cout << "-1\n";   
    return 0;
}
