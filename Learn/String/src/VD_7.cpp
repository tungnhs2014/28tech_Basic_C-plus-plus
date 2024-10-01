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
    set <string> se;
    se.insert("abcd");
    se.insert("php");
    se.insert("bbb");
    se.insert("zwwsz");
    for (string x : se) cout << x << endl;

    string a = "abcde";
    string b = "bcdte";
    if(a < b) cout << "YES\n";
    else cout << "NO\n"; 
    cout << a.compare(b) << endl;
    string c = a + b; // concate
    cout << c << endl;

    // stoi: strint to integer;
    // stoll: string to long long
    // to_string: integer to string
    string d = "1234";
    int t = stoi(d);
    cout << t << endl;
    return 0;
}
