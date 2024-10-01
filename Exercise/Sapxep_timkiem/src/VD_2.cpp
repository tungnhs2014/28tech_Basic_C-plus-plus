#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// lower_bound(): tìm vị trí đầu tiên của phần tử >= x trong mảng, vector tăng dần
// -- Nếu mà không tìm thấy phân tử >= x, thì nó trả về a + n, e.end()
// upper_bound(): tìm vị trí đầu tiên của phần tử > x trong mảng, vector tăng dần
// -- Nếu mà không tìm thấy phân tử > x, thì nó trả về a + n, e.end()

int main(int argc, char const *argv[])
{
    set <int> se;
    for(int i = 1; i <= 10; i += 2)
    {
        se.insert(i);
    }
    // Tìm được giá trị của phần tử x >= 3
    auto it = se.upper_bound(20);
    cout  << *it << endl;
    //cout  << it - se.begin() << endl; // áp dụng cho vector
    int dis = distance(se.begin(), it);
    cout << dis << endl;
    return 0;
}
