/*
Cho 2 xâu kí tự S1 và S2, hãy in ra các kí tự xuất hiện ở cả 2 xâu theo thứ tự từ điển, chú ý mỗi kí tự chỉ liệt kê một lần. Sau đó tiếp tục liệt kê các kí tự xuất hiện ở 1 trong 2 xâu theo thứ tự từ điển.

Input Format

Dòng đầu tiên là xâu S1. Dòng thứ 2 là xâu S2. Các ký tự trong 2 xâu chỉ bao gồm chữ cái in hoa hoặc in thường.

Constraints

1≤len(S1)≤100000; 1≤len(S2)≤100000.

Output Format

Dòng 1 in ra các ký tự xuất hiện ở cả 2 xâu theo thứ tự từ điển tăng dần. Dòng 2 in ra các ký tự xuất hiện ở 1 trong 2 xâu theo thứ tự từ điển tăng dần.

Sample Input 0

nTOhOGvRBk
bUJtZSoONh
Sample Output 0

Oh
BGJNORSTUZbhknotv
*/

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    string s, t; cin >> s >> t;
    int cnt[256] = {0};

    for(char x : s)
    {
        cnt[x] = 1;
    }

    for(char x : t)
    {
        if(cnt[x] == 1) cnt[x] = 2;
        else if (cnt[x] == 0) cnt[x] = -1;
    }

    for(int i = 0; i < 256; i++)
    {
        if(cnt[i] == 2)
        {
            cout << (char)i;
        }
    }
    cout << endl;
    for(int i = 0; i < 256; i++)
    {
        if(cnt[i] != 0)
        {
            cout << (char)i;
        }
    }
    cout << endl;
    return 0;
}
