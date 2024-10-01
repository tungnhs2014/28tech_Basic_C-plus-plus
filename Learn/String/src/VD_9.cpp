#include <bits/stdc++.h>
using namespace std;


// isdigit(char c): kiem tra chu so
// islower(char c): kiem tra in thuong
// isupper(char c): kiem tra in hoa
// isalpha(char c): kiem tra chu cai
// int tolower(char c): tra ve ki tu in thuong cua c
// int toupper(char c): tra ve ki tu in hoa cua c

bool cmp(string a, string b)
{
    return a > b;
}

int main(int argc, char const *argv[])
{
    string s; getline(cin, s);

    for(char &x : s)
    {
        if(x == '_' || x == '/' || x == '-' || x == '.')
        {
            x = ' ';
        }
    }
    // khai bao 1 bien stringstream
    stringstream ss(s); // khoi tao ss = s
    string word;
    vector<string> v;
    // while(ss >> word)
    // {
    //     v.push_back(word);
    // }

    while(getline(ss, word, ' '))
    {
        v.push_back(word);
    }
    sort(v.begin(), v.end(), cmp);
    for(string x: v)
    {
        cout << x << ' ';
    }
    return 0;
}
