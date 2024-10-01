/*
Cho mảng số nguyên A[] có N phần tử đã được sắp xếp theo thứ tự giảm dần. Có Q truy vấn, mỗi truy vấn yêu cầu bạn kiểm tra xem phần tử X có xuất hiện trong mảng hay không?
Cách 1 : Sắp xếp mảng tăng dần rồi dùng binary_search để tìm kiếm nhanh
Cách 2 : Đưa các phần tử trong mảng vào set để tìm kiếm nhanh

Mỗi truy vấn chỉ mất O(logN)

Input Format
Dòng đầu tiên là số nguyên dương N. Dòng thứ 2 là N phần tử trong mảng, các phần tử viết cách nhau một dấu cách. Dòng thứ 3 là số lượng truy vấn Q. 
Q dòng tiếp theo mỗi dòng là một số nguyên dương X.

Constraints
1<=N<=10^6; 1<=Q<=10^3; 0<=A[i],X<=10^9

Output Format
Đối với truy vấn in ra YES trên 1 dòng nếu X xuất hiện trong mảng, ngược lại in ra NO.

Sample Input 0
5
5 4 3 2 1
2
2
8
Sample Output 0
YES
NO
*/

#include <bits/stdc++.h>
using namespace std;

bool linearsearch(int a[], int n, int x)
{
    for(int i = 0; i <n; i++)
    {
        if(a[i] == x) return true;
    }
    return false;
}

// int main(int argc, char const *argv[])
// {
//     int n; cin >> n;
//     int a[n];
//     for(int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     sort(a, a + n);
//     int q; cin >> q;
//     while(q--)
//     {
//         int x; cin >> x;
//         if(binary_search(a, a + n, x)) cout <<"YES\n";
//         else cout << "NO\n";
//     }
//     return 0;
// }

// int main()
// {
//     int n; cin >> n;
//     set<int> se;
//     for(int i = 0; i < n; i++)
//     {
//         int x; cin >> x;
//         se.insert(x);
//     }
//     int q; cin >> q;
//     while(q--)
//     {
//         int x; cin >> x;
//         if(se.count(x)) cout << "YES\n";
//         else cout <<"NO\n";
//     
//     }
// }

int main()
{
    int n; cin >> n;
    map<int, int> mp;
    for(int i = 0; i < n; i++)
    {
        int x; cin >> x;
        mp[x] = 1;
    }
    int q; cin >> q;
    while(q--)
    {
        int x; cin >> x;
        if(mp.count(x)) cout << "YES\n";
        else cout <<"NO\n";
    }
}