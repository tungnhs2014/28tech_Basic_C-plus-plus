/*
Thành phố X có N thị trấn trên trục đường chính. Tọa độ của các thị trấn lần lượt là a[1], a[2]...a[N]. các tọa độ này phân biệt, 
không có 2 tọa độ trùng nhau. Chính quyền thành phố muốn xây dựng một tuyến xe buýt BRT để kết nối 2 thị trấn gần nhau nhất với nhau.
Bạn hãy tính thử xem chiều dài của tuyến xe buýt này bằng bao nhiêu? Và có bao nhiêu cặp thị trấn có tiềm năng giống nhau để xây dụng
tuyến BRT này
Input:
Dòng đầu tiên là số nguyên tố N(N <= 1000000). Dòng tiếp theo gồm N số nguyên A[i]
Constraints
N <= 1000 000; -10^9 <= 10^9
Output:
Với mỗi test in ra 2 số nguyên C và D, lần lượt là khoảng cách ngắn nhất giữa 2 thị trấn, và số lượng cặp thị trấn có cùng khoảng cách
gần ngắn nhất gần đây.
Sample input
4
6 -3 0 4
Sample Ouput
2 1
*/

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    int ans = 2e9 + 5, dem = 0;
    for(int i = 1; i < n; i++)
    {
        if(a[i] - a[i - 1] < ans)
        {
            ans = a[i] - a[i - 1];
            dem = 1;
        }
        else if(a[i] - a[i - 1] == ans)
        {
            ++dem;
        }
    }
    cout << ans << ' ' << dem << endl;
    return 0;
}


