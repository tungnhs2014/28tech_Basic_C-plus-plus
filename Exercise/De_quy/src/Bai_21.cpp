/*
Cho một mảng số nguyên A gồm N phần tử, hãy kiểm tra xem mảng có đối xứng hay không bằng cách sử dụng hàm đệ quy.

Input Format
Dòng đầu tiên là số nguyên dương N; Dòng thứ 2 là N số nguyên trong mảng được viết cách nhau một dấu cách.

Constraints
1≤n≤1000; 1≤A[i]≤10^6

Output Format
In ra YES nếu mảng A là mảng đối xứng, ngược lại in ra NO.

Sample Input 0
5
1 2 3 2 1
Sample Output 0

YES
*/

#include <bits/stdc++.h>
using namespace std;
using ll =  long long;

bool dx(int a[], int l, int r)
{
    if(l >= r) return true;
    if(a[l] != a[r]) return false;
    return dx(a, l + 1, r-1);
}


bool dx2(int a[], int n)
{
    int l = 0, r = n - 1;
    while(l < r)
    {
        if(a[l] != a[r])
        {
            if(a[l] != a[r]) return false;
        }
        ++l, --r;
    }
    return true;
}

int main(int argc, char const *argv[])
{
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if(dx(a, 0, n - 1))
    {
        cout <<"YES\n";
    }
    else
    {
        cout <<"NO\n";
    }
    return 0;
}