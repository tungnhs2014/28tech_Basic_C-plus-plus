/*
Cho xâu S chỉ bao gồm các kí tự in thường, hãy đếm số lượng xâu con (xâu ký tự chứa các chữ cái liên tiếp) mà có kí tự đầu và kí tự cuối giống nhau.

Input Format

Một dòng duy nhất chứa xâu S chỉ bao gồm chữ cái in thường.

Constraints

1≤len(S)≤100000;

Output Format

In ra đáp án của bài toán.

Sample Input 0

abcda
Sample Output 0

6
Explanation 0

Các xâu con có kí tự đầu cuối giống nhau : a, b, c, d, a, abcda
*/

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(int argc, char const *argv[])
{
    string s; cin >> s;
    int cnt[256] = {0};
    for(char x : s) cnt[x]++;
    ll ans = s.size();
    for(int i = 0; i < 256; i++)
    {
        if(cnt[i] != 0)
        {
            ans += 1ll *cnt[i] *(cnt[i] - 1)/2;
        }
    }
    cout << ans << endl;
    return 0;
}
