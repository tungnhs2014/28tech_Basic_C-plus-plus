/*
Cho một xâu kí tự S bao gồm các chữ cái và dấu cách, một từ được định nghĩa là các kí tự liên tiếp không chứa dấu cách, 
hãy đếm xem mỗi từ trong xâu xuất hiện bao nhiêu lần, đầu tiên hãy liệt kê các từ trong xâu kèm theo tần suất của mỗi từ theo thứ tự từ điển, 
sau đó liệt kê các từ trong xâu theo thứ tự xuất hiện.

Input Format

Dòng duy nhất chứa xâu S.

Constraints

1≤len(S)≤100000;

Output Format

Đầu tiên in ra các từ trong xâu và tần suất của nó theo thứ tự từ điển.
Sau đó bỏ trống 1 dòng và in ra các từ trong xâu và tần suất của nó theo thứ tự xuất hiện trong xâu.

Sample Input 0

bb aa bb cc aa bb cc
Sample Output 0

aa 2
bb 3
cc 2

bb 3
aa 2
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
    vector <string> v;
    while(ss >> tmp)
    {
        v.push_back(tmp);
        mp[tmp]++;
    }
    for(auto it : mp)
    {
        cout << it.first << ' '<< it.second << endl;
    }
    cout << endl;
    for(string x : v)
    {
        if(mp[x] != 0)
        {
            cout << x << ' ' << mp[x] << endl;
            mp[x] = 0;
        }
    }
    return 0;
}
