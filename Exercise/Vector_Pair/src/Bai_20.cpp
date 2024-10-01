/*
Cho dãy số A[] gồm N phần tử và số nguyên dương K. Hãy tìm dãy con liên tiếp có K phần tử sao cho dãy con đó có tổng các
phẩn tử lớn nhất
Input:
Đòng đầu tiên là số nguyên N và K. Dòng tiếp theo là gồm N số nguyên A[i]
Constraints
1 <= K <= N <= 10^7; 1 <= A[i] <= 10^9
Ouput:
Dòng 1 in ra tổng lớn nhất của dãy con K phần tử liền kề. Dòng 2 in ra dãy con đó, nếu có nhiều dãy con có cùng tổng lớn nhất
thì in ra dãy con xuất hiện đầu tiên 
*/

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(int argc, char const *argv[])
{
    int n, k; cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    ll sum = 0;
    for(int i = 0; i < k; i++) sum += a[i];
    ll res = sum, pos = 0;
    for(int i = 1; i <= n-k; i++)
    {
        sum = sum - a[i -1] + a[i + k -1];
        if(sum > res)
        {
            res = sum;
            pos = i;
        }
    }
    cout << res << endl;
    for(int i = 0; i < k; i++)
    {
        cout << a[pos + i] << ' ';
    }
    return 0;
}
