#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < pow(2, n); i++)
    {
        //i: Dựa vào biểu diễn nhị phân của i để suy ra 1 cấu hình
        // tập con tương ứng
        // 000: {}
        // 001: {9}
        // 010: {8}
        // 111: {7, 8, 9}
        for(int j = 0; j < n; j++)
        {
            // duyet cac bit tu 0 -> n - 1
            if(i & (1 << j)) // 1*2^j
            {
                // bit thu j cua so i no duoc bat la 1
                cout << a[j] << ' ';
            }
        }
        cout << endl;
    }

    return 0;
}
