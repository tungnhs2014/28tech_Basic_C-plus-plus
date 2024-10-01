/*
Cho một xâu là tên người chỉ bao gồm các kí tự là chữ cái và dấu cách, giữa các từ trong câu có thể tồn tại nhiều dấu cách hãy chuẩn hóa tên người theo 2 mẫu được yêu cầu trước. 
Xem output để rõ hơn về cách chuẩn hóa.

Input Format

Dòng duy nhất là tên người.

Constraints

Xâu kí tự tên người có không quá 1000 kí tự;

Output Format

Dòng đầu tiên in ra theo mẫu chuẩn hóa 1. Dòng thứ 2 in ra theo mẫu chuẩn hóa 2.

Sample Input 0

tRAN   van  tECH28
Sample Output 0

Tran Van, TECH28
TECH28, Tran Van
*/


#include <bits/stdc++.h>
using namespace std;

void convert(string &s)
{
    s[0] = toupper(s[0]);
    for(int i = 1; i < s.size(); i++)
    {
        s[i] = tolower(s[i]);
    }
}

void to_upper(string &s)
{
    for(int i = 0; i < s.size(); i++)
    {
         s[i] = toupper(s[i]);
    }
}

int main(int argc, char const *argv[])
{
    string s;
    getline(cin, s);
    vector<string> v;
    stringstream ss(s);
    string tmp;

    while(ss >> tmp)
    {
        v.push_back(tmp);
    }
    for(int i = 0; i < v.size() - 1; i++)
    {
        convert(v[i]);
        cout << v[i];
        if(i != v.size() - 2) cout << ' ';
        else cout << ", ";
    }
    to_upper(v[v.size() -1]);
    cout << v.back() << endl;

    cout << v.back() << ", ";
    for(int i = 0; i < v.size() - 1; i++)
    {
        convert(v[i]);
        cout << v[i];
        if(i != v.size() - 2) cout << ' ';
    }
    return 0;
}