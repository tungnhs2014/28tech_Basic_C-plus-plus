/*
Cho dãy số a[] có n phần tử là các số nguyên dương khác nhau từng đôi một. Hãy liệt kê tất cả dãy con có từ 2 phần tử trở lên của dãy a[]
thỏa mãn tính chất tăng dần. Dãy con tạo được bằng cách lấy ra các phần tử trong dãy nhưng vẫn giữ nguyên các thử tự ban đầu. Coi mỗi dãy
con như một xâu ký tự với các phần tử cách nhau một khoảng trống, hẫy liệt kê theo thứ tự từ điển.

Intput:
Dòng đầu ghi số n (không quá 20); Dòng thứ 2 ghi n số của dãy a[]. Các số khác nhau từng đôi một và có giá trị không quá 100.

Constraints
2 <= n <= 20; 1 <= a[i] <= 100

Output:
Đưa ra các dãy con hợp lệ theo thứ tự điển tăng dần

Sample input 0:
7
4 8 6 7 3 5 2

Sample output 0:
3 5
4 5
4 6
4 6 7
4 7
4 8
6 7

*/

#include <bits/stdc++.h>
using namespace std;

int a[102], x[102], n;
vector <string> v;

void backtrack(int cnt, int pos)
{
    if(cnt >= 2)
    {
        string res ="";
        for(int i = 0; i < cnt; i++)
        {
            res += to_string(x[i]) + " ";
        }
        v.push_back(res);
    }
    for(int j = pos; j <= n; j++)
    {
        if(a[j] > x[cnt - 1])
        {
            x[cnt] = a[j];
            backtrack(cnt + 1, j + 1);
        }
    }
}

int main(int argc, char const *argv[])
{
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> a[i];
    backtrack(0, 1);
    sort(v.begin(), v.end());
    for(string x : v)
    {
        cout << x << endl;
    }
    return 0;
}
