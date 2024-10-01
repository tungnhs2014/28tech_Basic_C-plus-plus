/*
Cho bàn cờ vua cỡ N * N, các ô trên bàn cờ có giá trị là 0 hoặc 1. Một con mã xuất phát từ ô (s, t) và muốn di chuyển tới ô (u, v), 
con mã chỉ có thể di chuyển ở các ô mà tại ô đó có giá trị là 1 và nó có thể di chuyển qua lại 1 ô nhiều lần. 
Hãy xác định xem con mã có thể tìm được đường đi hay không, dữ liệu đảm bảo ô (s, t) và ô (u, v) đều có giá trị là 1.

Input Format

Dòng đầu tiên N. Dòng thứ 2 là 4 số s, t, u , v. N dòng tiếp theo mỗi dòng gồm N phần tử.

Constraints

1≤N,M≤100; 1≤s,t,u,v≤N; 0≤A[i][j]≤1;

Output Format

In YES nếu con mã có thể tìm được đường đi, ngược lại in NO.

Sample Input 0

9
7 5 4 3
1 0 1 0 1 0 1 1 1 
1 1 1 1 0 0 0 0 1 
1 0 1 1 1 0 1 1 1 
1 0 1 0 1 0 0 0 0 
0 1 1 0 1 1 0 1 1 
1 0 0 0 0 1 1 0 1 
1 0 1 0 1 0 1 1 0 
0 1 1 0 0 0 0 1 1 
0 0 1 1 0 0 0 0 1 
Sample Output 0

YES
Explanation 0

Con Mã có thể di chuyển từ ô (7, 5) -> (6, 7) -> (5, 5) -> (4, 3)
*/

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int dx[8] = {-2, -2, -1 ,-1, +1, +1, +2, +2};
int dy[8] = {-1, +1, -2, +2, -2, +2, -1, +1};

ll a[500][500];
ll n;

void Try(int i, int j)
{
    a[i][j] = 0;
    for(int k = 0; k < 8; k++)
    {
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= n && a[i1][j1] == 1)
        {
            Try(i1, j1);
        }
    }
}

int main(int argc, char const *argv[])
{
    cin >> n;
    int s, t, u, v;
    cin >> s >> t >> u >> v;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++) cin >> a[i][j];
    }
    Try(s, t);
    if(a[u][v] == 1)
    {
        cout <<"NO\n";
    }
    else
    {
        cout <<"YES\n";
    }
    return 0;
}
