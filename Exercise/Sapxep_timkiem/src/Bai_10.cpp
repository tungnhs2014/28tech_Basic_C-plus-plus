/*
Cho mảng số nguyên A[] có N phần tử đã được sắp xếp theo thứ tự tăng dần. Hãy viết các hàm sau với độ phức tạp O(logN) :
Tìm vị trí xuất hiện đầu tiên của phần tử X trong mảng, nếu không tồn tại X in ra -1.
Tìm vị trí xuất hiện cuối cùng của phần tử X trong mảng, nếu không tồn tại X in ra -1.
Tìm vị trí xuất hiện đầu tiên của phần tử >= X trong mảng, nếu không tồn tại phần tử >=X in ra -1.
Tìm vị trí xuất hiện đầu tiên của phần tử > X trong mảng, nếu không tồn tại phần tử >X in ra -1.
Tìm số lần xuất hiện của phần tử X trong mảng sử dụng kết quả của hàm 1 và 2.

Input Format
Dòng đầu tiên là số nguyên dương N và X Dòng thứ 2 là N phần tử trong mảng, các phần tử viết cách nhau một dấu cách.

Constraints
1<=N<=10^6; 0<=A[i],X<=10^6;

Output Format
In ra 5 dòng tương ứng với 5 kết quả của 5 hàm đề bài yêu cầu.

Sample Input 0
10 1160
19 1600 2172 2921 3409 4185 4639 6098 6744 9192

Sample Output 0
-1
-1
1
1
0
*/

#include <bits/stdc++.h>
using namespace std;

int firstPos(int a[], int n, int x)
{
    int res = -1;
    int left = 0, right = n - 1;
    while(left <= right)
    {
        int mid = (left + right)/2;
        if(a[mid] == x)
        {
            res = mid;
            // tìm kiếm bên trái của mid xem còn x nữa hay không
            right = mid -1;
        }
        else if(a[mid] < x)
        {
            left = mid + 1; 
        }
        else{
            right = mid - 1;
        }
    }
    return res;
}

int lower(int a[], int n, int x)
{
    int res = -1;
    int left = 0, right = n - 1;
    while(left <= right)
    {
        int mid = (left + right)/2;
        if(a[mid] >= x)
        {
            res = mid;
            // tìm kiếm bên trái của mid xem còn x nữa hay không
            right = mid -1;
        }
        else
        {
            left = mid + 1; 
        }
    }
    return res;
}

int upper(int a[], int n, int x)
{
    int res = -1;
    int left = 0, right = n - 1;
    while(left <= right)
    {
        int mid = (left + right)/2;
        if(a[mid] > x)
        {
            res = mid;
            // tìm kiếm bên trái của mid xem còn x nữa hay không
            right = mid -1;
        }
        else
        {
            left = mid + 1; 
        }
    }
    return res;
}

int lastPos(int a[], int n, int x)
{
    int res = -1;
    int left = 0, right = n - 1;
    while(left <= right)
    {
        int mid = (left + right)/2;
        if(a[mid] == x)
        {
            res = mid;
            // tìm kiếm bên phải của mid xem còn x nữa hay không
            left = mid + 1;
        }
        else if(a[mid] < x)
        {
            left = mid + 1; 
        }
        else{
            right = mid - 1;
        }
    }
    return res;
}


int main(int argc, char const *argv[])
{
    int n, x; cin >> n >> x;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    cout << firstPos(a, n , x) << endl;
    cout << lastPos(a, n , x) << endl;
    cout << lower(a, n , x) << endl;
    cout << upper(a, n , x) << endl;

    int l = firstPos(a, n, x);
    int r = lastPos(a, n, x);
    if(l != -1)
    {
        cout << r - l + 1 << endl;
    }
    else
    {
        cout << 0 << endl;
    }
    return 0;
}
