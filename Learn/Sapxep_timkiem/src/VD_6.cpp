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

// -- Sắp xếp theo trị tuyệt đối tăng dần, nếu 2 số có cùng trị tuyệt đối thì 
// số nào xuất hiện trước in ra trước
// 8
// 10 7 3 -3 -3 5 -5 -10

bool cmp(pair <int, int> a, pair<int, int> b)
{
    if(abs(a.first) != abs(b.first))
        return abs(a.first) < abs(b.first);
    else return a.second < b.second;
}

int main(int argc, char const *argv[])
{
    int n; cin >> n;
    pair <int, int > a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i;
    }
    sort(a, a + n, cmp);
    for(int i = 0; i < n; i++)
    {
        cout << a[i].first << ' ';
    }
    return 0;

}
