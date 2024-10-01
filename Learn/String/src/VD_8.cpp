#include <bits/stdc++.h>
using namespace std;


// isdigit(char c): kiem tra chu so
// islower(char c): kiem tra in thuong
// isupper(char c): kiem tra in hoa
// isalpha(char c): kiem tra chu cai
// int tolower(char c): tra ve ki tu in thuong cua c
// int toupper(char c): tra ve ki tu in hoa cua c


int main(int argc, char const *argv[])
{
    string s; getline(cin, s);
    // int sum = 0;
    // for(char x : s)
    // {
    //     sum += x - '0';
    //     // cout << (int)x << endl;
    // }
    // cout << sum << endl;

    map <char, int > mp;
    for(char x : s)
    {
        mp[x]++;
    }
    for(auto it : mp)
    {
        cout << it.first << ' ' << it.second << endl;
    }

    int dem[256] = {0};
    for(char x : s)
    {
        dem[x]++;
    }
    for(int i = 0; i < 255; i++)
    {
        if(dem[i] != 0)
        {
            cout << (char)i << ' ' << dem[i] << endl;
        }
    }
    return 0;
}
