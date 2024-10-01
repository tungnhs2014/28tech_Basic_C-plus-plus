#include <bits/stdc++.h>
#include <algorithm>
// sort
// stable_sort
using namespace std;
using ll = long long;

// Sắp xếp
// Tìm kiếm

// [x, y] => sort(a + x, a +y + 1)
// [x, y] => sort(a.begin() + x, a.begin() + y + 1)

// --comparator: compare

// intro sort: quick sort + heap sort: non-stable
// stable sort: merge sort: stable

// Cho 1 mảng số nguyên, in ra các phần tử trong mảng theo thứ tự tần suất xuất hiện giảm dần, nếu có nhiều
// số cùng số lần xuất hiện thì số nào nhỏ hơn sẽ in ra trước
// 1 <= N <= 10^6, 1 <= A[i] <= 10^9
// 1. Đếm tần suất (map)
// 2. Chuyển các phần tử trong map ra vector pair
// 3. Viết comparator cho vector pair => sort
// 4. In

bool cmp(pair <int, int> a, pair<int, int> b)
{
    if(a.second != b.second)
    {
        return a.second > b.second;
    }
    else return a.first < b.first;
}

int main(int argc, char const *argv[])
{
    int n; cin >> n;
    int a[n];
    map <int, int > mp;
    for(int i = 0; i < n; i++) 
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    vector<pair<int, int>> v;
    for(auto it : mp)
    {
        v.push_back(it);
    }
    sort(v.begin(), v.end(), cmp);

    for(auto x : v)
    { 
        // x.first: gia tri
        // x.second: tan suat
        for(int j =0; j < x.second; j++)
        {
            cout << x.first << ' ';
        }
    }
    return 0;

}
