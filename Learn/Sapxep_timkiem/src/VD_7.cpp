#include <bits/stdc++.h>
#include <algorithm>
// sort
// stable_sort
using namespace std;
using ll = long long;

// Sắp xếp
// Tìm kiếm

// -- Tìm kiếm tuyến tính: Linear search: O(n)
bool search(int a[], int n, int x)
{
    for(int i = 0; i < n; i++)
    {
        if(a[i] == x) return true;
    }
    return false;
}

// -- Tìm kiếm nhị phân: Binary search : O: logN
// Điều kiện: các phần tử trong mảng sắp xếp tăng dần hoặc giảm dần
bool search2(int a[], int n, int x)
{
    int left = 0, right = n - 1;
    while(left <= right)
    {
        int mid = (left + right)/ 2;
        if(a[mid] == x)
        {
            return true; // Tìm thấy
        }
        else if(a[mid] < x)
        {
            // Tìm ở bên phải mid
            left = mid + 1;
        }
        else
        {
            // Tìm ở bên trái mid
            right = mid - 1;
        }
    }
    return false;
}

// binary_search(a, a + n, x);
// binary_search(a.begin(), a.end(), x)
// binary_search(a + u, a + v + 1, x): a[u : v]
// binary_search(a.begin() + u, a.end() + v  + 1, x)

int main(int argc, char const *argv[])
{
    int n, x; cin >> n >> x;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    // if(search2(a, n, x))
    // {
    //     cout << "FOUND\n";
    // }
    // else 
    // {
    //     cout << "NOT FOUND\n";
    // }
    if(binary_search(a, a + n, x))
    {
        cout << "FOUND\n";
    }
    else 
    {
        cout << "NOT FOUND\n";
    }
    return 0;
}
