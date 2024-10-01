#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// lower_bound(): tìm vị trí đầu tiên của phần tử >= x trong mảng, vector tăng dần
// -- Nếu mà không tìm thấy phân tử >= x, thì nó trả về a + n, e.end()
// upper_bound(): tìm vị trí đầu tiên của phần tử > x trong mảng, vector tăng dần
// -- Nếu mà không tìm thấy phân tử > x, thì nó trả về a + n, e.end()

int main(int argc, char const *argv[])
{
    map <int, int> mp;
    for(int i = 1; i <= 5; i ++)
    {
        mp[i] = 1;
    }
    // Tìm được giá trị của phần tử x >= 3
    auto it = mp.lower_bound(2);
    cout  << (*it).first << " " << (*it).second << endl;
    return 0;
}
