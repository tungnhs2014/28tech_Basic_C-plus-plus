/*
Cho 2 mảng số nguyên a và b gồm n và m phần tử, các phần tử trong mảng là đôi một khác nhau, các phần tử trong 2 mảng đã được sắp xếp 
theo thứ tự tăng dần. Hãy tìm giao và mảng hợp của 2 mảng. Độ phức tạp mong muốn là O(n+m)
Input:
Dòng đầu tiên là số lượng phần tử của 2 dãy n và m. Dòng thứ 2 là n phần tử trong dãy số 1. Dòng thư 3 là m phần tử trong dãy thứ 2.
Constraints:
1 <=n, m <= 10^7, -10^7 <= a[i] <= 10^7
Output: 
Dòng dầu tiên in ra mảng hợp của 2 mảng, Dòng thứ 2 in ra mảng giao của 2 mảng
Sample input
4 5
1 2 3 4
2 3 5 6 7
Sample Output:
1 2 3 4 5 6 7
2 3
*/

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(int argc, char const *argv[])
{
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < m; i++){
        cin >> b[i];
    }
    int i = 0, j = 0;
    vector<int> hop, giao;
    while(i < n && j < m)
    {
        if(a[i] == b[j])
        {
            giao.push_back(a[i]);
            hop.push_back(a[i]);
            ++i;
            ++j;
        }
        else if(a[i] < b[j])
        {
            hop.push_back(a[i]);
            ++i;
        }
        else
        {
            hop.push_back(b[j]);
            ++j;
        }
    }
    while(i < n)
    {
        hop.push_back(a[i++]);
    }
    while(j < m)
    {
        hop.push_back(b[j++]);
    }
    for(int x : hop) cout << x << ' ';
    cout << endl;
    for(int x : giao) cout << x << ' ';
    return 0;
}