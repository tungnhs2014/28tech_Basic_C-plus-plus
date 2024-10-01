/*
Cho 2 xâu S và T chỉ bao gồm các chữ cái in hoa, in thường và dấu cách. Hãy kiểm tra xem xâu T có phải là xâu con của xâu S hay không?

Input Format

Dòng đầu tiên là xâu S. Dòng thứ 2 là xâu T.

Constraints

1≤len(S)≤100000; 1≤len(T)≤100000;

Output Format

In ra YES nếu xâu T xuất hiện trong xâu S, ngược lại in ra NO.

Sample Input 0

aabcacbdaa
cacb
Sample Output 0

YES
*/

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    string s, t;
    getline(cin, s);
    getline(cin, t);
    if(s.find(t) != string::npos)
    {
        cout <<"YES\n";
    }
    else cout <<"NO\n";
    return 0;
}

