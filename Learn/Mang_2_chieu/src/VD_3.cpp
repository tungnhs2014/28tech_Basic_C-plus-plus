/*
Cho ma trận cỡ NxM gồm N hàng, mỗi hàng M cột. Hãy tìm số nhỏ nhất trong ma trận và số lớn nhất trong ma trận, 
sau đó liệt kê các vị trí xuất hiện của các phần tử này trong ma trận.

Input Format
Dòng đầu tiên là 2 số N và M. N dòng tiếp theo mỗi dòng có M số.

Constraints
1≤n,m≤205; Các phần tử trong ma trận là số dương không quá 10^9.

Output Format
Dòng đầu tiên in ra số nhỏ nhất trong ma trận, các dòng tiếp theo liệt kê các vị trí của số này trong ma trận. 
Dòng tiếp theo in ra số lớn nhất trong ma trận, các dòng tiếp theo liệt kê các vị trí của số này trong ma trận. 
Xem test case mẫu để rõ hơn.

Sample Input 0
3 3
1 2 1
4 5 6
7 8 9
Sample Output 0
1
1 1
1 3
9
3 3
*/

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, m; cin >> n >> m;
    int a[n][m];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    int min_val = INT_MAX, max_val = INT_MIN;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            min_val = min(min_val, a[i][j]);
            max_val = max(max_val, a[i][j]);
        }
    }
    cout << min_val << endl;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(min_val == a[i][j])
            {
                cout << i + 1 << ' ' << j + 1 << endl;
            }
        }
    }
    cout << max_val << endl;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(max_val == a[i][j])
            {
                cout << i + 1 << ' ' << j + 1 << endl;
            }
        }
    }
    return 0;
}
