/*
Cho một xâu là tên người chỉ bao gồm các kí tự là chữ cái và dấu cách, 
giữa các từ trong câu có thể tồn tại nhiều dấu cách hãy chuẩn hóa tên người bằng cách viết hoa chữ cái đầu tiên của từng từ và viết thường các chữ cái còn lại. 
Xâu tiếp theo là ngày sinh của người này, bao gồm ngày tháng năm phân cách nhau bằng dấu '/', hãy chuẩn hóa ngày sinh của người này về đúng dạng dd/mm/yyyy.

Input Format

Dòng đầu tiên là tên người; Dòng thứ 2 là ngày sinh;

Constraints

Xâu kí tự tên người có không quá 2000 kí tự; Xâu ngày sinh có không quá 10 kí tự. Dữ liệu đảm bảo có dấu '/' giữa ngày, tháng, năm.

Output Format

Dòng đầu tiên in ra tên người sau khi chuẩn hóa. Dòng thứ 2 in ra ngày sinh sau khi đưa về dạng chuẩn dd/mm/yyyy.

Sample Input 0

NgUYEN   Van  TECH28
1/1/2022
Sample Output 0

Nguyen Van Tech28
01/01/2022
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

    for(int i = 0; i < v.size(); i++)
    {
        convert(v[i]);
        cout << v[i];
        if(i != v.size() - 1) cout << ' ';
    }
    cout << endl;

    string date;
    getline(cin, date);
    
    if(date[2] != '/')
    {
        date = '0' + date;
    }
    if(date[5] != '/')
    {
        date.insert(3, "0");
    }
    cout << date << endl;
    return 0;
}
