/*
Ca sĩ nổi tiếng Lê Ro vừa nhận được các lời mời lưu diễn của n đoàn ca nhạc. Đoàn thứ i mời lưu diễn từ ngày ai đến ngày bi (ai, bi là các số nguyên, ai ≤ bi). Tuy nhiên tại một thời điểm, Lê Ro chỉ có thể tham gia hát cho một đoàn duy nhất mà thôi. Với mong muốn đem lời ca tiếng hát của mình đến nhiều khán giả nhất, Lê Ro quyết định sẽ chọn tham gia nhiều đoàn nhất có thể. Bạn hãy tính thử xem Lê Ro nên chọn tham gia những đoàn nào để số lượng đoàn là nhiều nhất mà không bị trùng nhau về mặt thời gian.

Input Format

Dòng thứ nhất là số nguyên n là số đoàn ca nhạc.
Trong n dòng tiếp theo, dòng thứ i gồm hai số ai, bi cách nhau một khoảng trắng 
là ngày bắt đầu và ngày kết thúc lưu diễn của đoàn thứ i.

Constraints
1<=n<=10^5; 1<=ai<=bi<=10^6

Output Format
Số nguyên xác định số lượng đoàn nhiều nhất mà Lê Ro có thể tham gia.

Sample Input 0
c
Sample Output 0

3
*/

#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair <int, int > b)
{
    return a.second < b.second;
}

int main(int argc, char const *argv[])
{
    int n; cin >> n;
    pair<int, int> a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i].first >> a[i].second;
    sort(a, a + n, cmp);
    int ans = 1, end_time = a[0].second;
    for(int i = 1; i < n; i++)
    {
        if(a[i].first > end_time)
        {
            ++ans;
            end_time = a[i].second;
        }
    }
    cout << ans <<endl;
    return 0;
}
