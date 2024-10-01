/*
Cho ma trận vuông A[N][N]. Hãy in ra các số xuất hiện ở mọi hàng theo thứ tự từ bé đến lớn, mỗi giá trị xuất hiện chỉ liệt kê 1 lần.

Input Format

Dòng đầu tiên đưa vào N là cấp của ma trận A[N][N]; N dòng tiếp mỗi dòng gồm N số nguyên.

Constraints

1≤N≤100; 0≤A[i][j]≤100

Output Format

In ra các giá trị xuất hiện trên mọi dòng của ma trận, các số in cách nhau một dấu cách. 
Nếu không tồn tại giá trị nào thỏa mãn in ra "NOT FOUND".

Sample Input 0

4
1 2 2 3
2 1 2 4
2 4 1 2
2 2 3 1
Sample Output 0

1 2
*/

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(int argc, char const *argv[])
{
    int n; cin >> n;
    int a[n+1][n+1];
    map<int, int> mp;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++) 
        {
            cin >> a[i][j];
        }
    }
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(mp[a[i][j]] == i - 1)
            {
                mp[a[i][j]] = i;
            }
        }
    }
    bool check = false;
    for(auto it : mp)
    {
        if(it.second == n) 
        {
            cout << it.first << ' ';
            check = true;
        }
    }
    if(!check) cout <<"NOT FOUND\n";
    return 0;
}
