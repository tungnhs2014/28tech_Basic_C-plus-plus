/*
Cho mảng các số nguyên không âm gồm n phần tử. thực hiện đếm tần suất xuất hiện của các phần tử và in theo mấu
Input:
Dòng đầu tiên là số lượng phần tử trong mảng. Dòng thứ 2 là N phần tử trong mảng.
Constraints:
2 <= n < 10^6; 0 <a[i] < 10^7
Output:
In ra tần suất xuất hiện của các phần tử theo thứ tự từ nhỏ tới lớn sao đó bỏ trống 1 dòng và in ra tần suất xuất
hiện của các phần tử theo thứ tự xuất hiện trong mảng(mỗi giá trị chỉ liệt kê 1 lần)
Sample Input 0
8
2 1 2 3 4 8 2 3
Sameple Output 0
1 1 
2 3
4 1
8 1

2 3
1 1
3 2
4 1
8 1
*/

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int cnt[1000001];

int main(int argc, char const *argv[])
{
    int n; cin >> n;
    int a[n];
    int min_val = INT_MAX, max_val = INT_MIN;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        cnt[a[i]]++;
        min_val = min(min_val, a[i]);
        max_val = max(max_val, a[i]);
    }
    for(int i = min_val; i <= max_val; ++i)
    {
        if(cnt[i] != 0)
        {
            cout << i << ' ' << cnt[i] << endl;
        }
    }
    cout << endl;
    for(int i = 0; i < n; ++i)
    {
        if(cnt[a[i]] != 0)
        {
            cout << a[i] << ' ' << cnt[a[i]] << endl;
            cnt[a[i]] = 0;
        }
    }
    return 0;
}

