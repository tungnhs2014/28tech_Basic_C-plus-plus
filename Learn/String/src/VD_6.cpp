#include <bits/stdc++.h>
using namespace std;


// isdigit(char c): kiem tra chu so
// islower(char c): kiem tra in thuong
// isupper(char c): kiem tra in hoa
// isalpha(char c): kiem tra chu cai
// int tolower(char c): tra ve ki tu in thuong cua c
// int toupper(char c): tra ve ki tu in hoa cua c

void to_upper(string &s)
{
    for(int i = 0; i < s.size(); i++)
    {
       s[i] = toupper(s[i]);
    }
}


string to_lower(string &s)
{
    for(int i = 0; i < s.size(); i++)
    {
       s[i] = tolower(s[i]);
    }
    return s;
}

int main(int argc, char const *argv[])
{
    string s;
    getline(cin, s);
    to_upper(s);
    cout << s << endl;
    cout << to_lower(s) << endl;
    return 0;
}
