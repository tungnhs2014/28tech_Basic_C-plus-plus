/*
Cho một ma trận nhị phân có N hàng và M cột, một con chuột bắt đầu từ ô có tọa độ [s, t] và tìm đường đi tới ô [u, v], 
biết rằng ở mỗi bước con chuột có thể di chuyển từ ô hiện tại sang các ô chung cạnh với ô hiện tại và số ở ô chung cạnh là số 1.
Bạn chỉ được đi qua 1 ô đúng 1 lần hãy kiểm tra xem con chuột có thể tìm được đường đi tới ô [u, v] hay không ? 
Dữ liệu đảm bảo 2 ô [s, t] và ô [u, v] đều bằng 1.

Input Format

Dòng đầu tiên N và M. Dòng thứ 2 là 4 số s, t, u , v. N dòng tiếp theo mỗi dòng gồm M phần tử.

Constraints

1≤N,M≤100; 1≤s,u≤N;1≤t,v≤M;

Output Format

In YES nếu con chuột có thể tìm được đường đi, ngược lại in NO.

Sample Input 0

3 5
1 1 3 5
1 0 1 0 0 
0 1 1 1 1 
1 0 0 0 1 
Sample Output 0

NO
*/

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int dx[4] = {-1, 0, 0 ,1};
int dy[4] = {0, -1, 1 ,0};

ll a[500][500];
ll n, m;

void Try(int i, int j)
{
    a[i][j] = 0;
    for(int k = 0; k < 4; k++)
    {
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m && a[i1][j1] == 1)
        {
            Try(i1, j1);
        }
    }
}

int main(int argc, char const *argv[])
{
    cin >> n >> m;
    int s, t, u, v;
    cin >> s >> t >> u >> v;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++) cin >> a[i][j];
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
