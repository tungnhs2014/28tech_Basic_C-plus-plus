/*
Cho một xâu kí tự S chỉ bao gồm các chữ cái in thường, hãy tìm xâu con liên tiếp chứa các kí tự giống nhau dài nhất, 
nếu có nhiều xâu con thỏa mãn thì chọn xâu con có thứ tự từ điển lớn nhất.

Input Format

Một dòng duy nhất chứa xâu S.

Constraints

1≤len(S)≤100000;

Output Format

In ra xâu con tìm được.

Sample Input 0

zzaabc
Sample Output 0

zz
*/

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    string s; cin >> s;
    cin.ignore();
    int cnt = 1;
    int res = 1;
    char ans = s[0];
    s += "0";
    for(int i = 1; i < s.size(); i++)
    {
        if(s[i] == s[i - 1])
        {
            ++cnt;
        }
        else{
            if(cnt > res)
            {
                res = cnt;
                ans = s[i-1];
            }
            else if(cnt == res)
            {
                ans = max(ans, s[i - 1]);
            }
            cnt = 1;
        }
    }
    string kq = string(res, ans);
    cout << kq << endl;
    return 0;
}
