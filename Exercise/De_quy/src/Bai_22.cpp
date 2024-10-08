/*
Cho một mảng số nguyên A gồm N phần tử, hãy in ra mảng theo thứ tự từ trái qua phải và từ phải qua trái bằng đệ quy.

Input Format
Dòng đầu tiên là số nguyên dương N; Dòng thứ 2 là N số nguyên trong mảng được viết cách nhau một dấu cách.

Constraints
1≤n≤1000; 1≤A[i]≤10^6

Output Format
Dòng đầu tiên in ra các phần tử trong mảng theo chiều từ trái qua phải. Dòng thứ 2 in ra các phần tử trong mảng theo chiều từ phải qua trái.

Sample Input 0
5
1 2 3 4 5

Sample Output 0
1 2 3 4 5
5 4 3 2 1
*/

#include <bits/stdc++.h>
using namespace std;

void int1(int a[], int n)
{
    if( n == 0) return;
    int1(a, n - 1);
    cout << a[n - 1] << ' ';
}

void int2(int a[], int n)
{
    if( n == 0) return;
    cout << a[n - 1] << ' ';
    int2(a, n - 1);
}

int main(int argc, char const *argv[])
{
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    int1(a, n);
    cout << endl;
    int2(a, n);
    return 0;
}
