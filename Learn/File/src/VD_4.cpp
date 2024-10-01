#include <bits/stdc++.h>
using namespace std;

using ll = long long;

// ifstream: Đọc file
// ofstream: Ghi file
// fstream: Cả đọc và ghi file

// ios::in: Đọc file
// ios::out: Ghi file
// ios::binary: Mở kiểu nhị phân
// ios::app: Mở file lên để ghi nhưng mà ghi vào cuối file
// ios::ate: Đặt vị trí của con trỏ file vào cuối fil, nếu mà mode không được bật
// thì vị trí con trỏ sẽ là đầu file
// ios::trunc: Mở file để đọc, nhưng nội dung trước đó trong file sẽ bị mất hết
// trước ghi nội dung mới


string taoEmail(string ten)
{
    stringstream ss(ten);
    string token;
    vector<string> v;
    string res = "";
    while(ss >> token)
    {
        v.push_back(token);
    }
    for(char c : v.back())
    {
        res += tolower(c);
    }
    for(int i = 0; i < v.size() - 1; i++)
    {
        res += tolower(v[i][0]);
    }
    res += "@xyz.edu.vn";
    return res;
}

string taoPassword(string ten, string ngaysinh)
{
    string res = "";
    for(char x : ten)
    {
        res += toupper(x);
    }
    for(char c : ngaysinh)
    {
        if(c != '/')
        {
            res += c;
        }
    }
    return res;
}

int main(int argc, char const *argv[])
{
    ifstream in;
    ofstream out;
    in.open("File/src/SinhVien.txt", ios::in);
    out.open("File/src/Email.txt", ios::out | ios::app);
    vector <string> v;
    string s;
    while(getline(in, s))
    {
        v.push_back(s);
    }
    for(auto x : v)
    {
        stringstream ss(x);
        string token;
        string ten = "", ns = "";
        while(ss >> token)
        {
            if(token[0]>= '0' && token[0] <= '9') // isdigit(token[0] = true)
            //if(isdigit(token[0]))
            {
                ns = token;
            }
            else{
                ten += token;
            }
        }
        out << taoEmail(ten) << ' ' << taoPassword(ten, ns) << endl; 
    }
    in.close();
    out.close();
    return 0;
}
