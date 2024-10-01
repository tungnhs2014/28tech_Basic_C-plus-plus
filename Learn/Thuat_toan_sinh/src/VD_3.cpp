/*
Cho xâu nhị phân S, hãy in ra xâu nhị phân kế tiếp của S. Trong trường hợp S là xâu nhị phân cuối cùng thì in ra xâu nhị phân đầu tiên.

Intput:
1 dòng duy nhất chưa xâu nhị phân S

Constraints
1 <= len(S) <= 1000

Output:
In ra xâu nhị phân kế tiếp

Sample input 0:
1110010

Sample output 0:
1110011

Sample input 1:
11111

Sample output 1:
00000


*/

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    string s; cin >> s;
    int i = s.size() -1;
    while(i >= 0 && s[i] == '1')
    {
        s[i] = '0';
        --i;
    }
    if(i != -1) s[i] = '1' ;
    cout << s;
    return 0;
}