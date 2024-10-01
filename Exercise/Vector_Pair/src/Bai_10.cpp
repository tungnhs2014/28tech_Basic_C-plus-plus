/*
Cho 2 mảng số nguyên a và b gồm n và m phần tử. Gọi mảng c và d lần lượt là mảng chỉ bao gồm các phần tử khác nhau của a và b.
Hãy tìm mảng giao và hợp của mảng c và d và liệt ke theo thứ tự tăng dần
Input:
Dòng đầu tiên là số lượng phần tử của 2 dãy n và m. Dòng thứ 2 là n phần tử trong dãy số 1. Dòng thứ 3 là m phần tử trong dãy thứ 2
Constraints
1 <= n, m <= 10^6; 0 <= a[i] <= 10^7
Output:
Dòng đầu tiên in ra giao của 2 mảng c và d. Dòng thứ 2 in ra hợp 2 mảng c và d

Sample input
5 6
1 2 1 2 7
1 2 3 4 5 6

Sample Output
1 2 
1 2 3 4 5 6 7
*/

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int giao[10000001];
int hop[10000001];

int main(int argc, char const *argv[])
{
    int n, m; cin >> n >> m;
    for(int i = 0; i < n; i++)
    {
        int x; cin >> x;
        giao[x] = 1;
        hop[x] = 1;
    }
    for(int i = 0; i < m; i++)
    {
        int x; cin >> x;
        hop[x] = 1;
        if(giao[x] == 1)
        {
            giao[x] = 2; 
        }
    }
    for(int i = 0; i <= 10000000; i++)
    {
        if(giao[i] == 2) cout << i << ' ';
    }
    cout << endl;
    for(int i = 0; i <= 10000000; i++)
    {
        if(hop[i] == 1) cout << i << ' ';
    }
    return 0;
}




