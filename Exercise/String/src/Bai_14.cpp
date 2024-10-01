/*
Cho một xâu kí tự S bao gồm các chữ cái và dấu cách, một từ được định nghĩa là các kí tự liên tiếp không chứa dấu cách. 
Hãy tìm từ có số lần xuất hiện nhiều nhất và ít nhất trong xâu, nếu có nhiều từ có cùng số lần xuất hiện nhiều nhất 
hoặc ít nhất thì chọn từ có thứ tự từ điển lớn nhất làm kết quả.

Input Format

Dòng duy nhất chứa xâu S.

Constraints

1≤len(S)≤100000;

Output Format

Dòng đầu tiên in ra từ có số lần xuất hiện nhiều nhất. Dòng thứ 2 in ra từ có số lần xuất hiện ít nhất.

Sample Input 0

aa bb cc aa bb aa aa cc
Sample Output 0

aa 4
cc 2
*/

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    string s;
    getline(cin, s);
    map <string, int > mp;
    stringstream ss(s);
    string tmp;
    while(ss >> tmp)
    {
        mp[tmp]++;
    }
    string res1, res2;
    int fre1 = 0, fre2 = 1e9;

    for(auto it : mp)
    {
        if(it.second >= fre1)
        {
            fre1 = it.second;
            res1 = it.first;
        }
        if(it.second <= fre2)
        {
            fre2 = it.second;
            res2 = it.first;
        }
    }
    cout << res1 << ' ' << fre1 << endl;
    cout << res2 << ' ' << fre2 << endl;
    return 0;
}
