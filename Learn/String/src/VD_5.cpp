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
    string s;
    getline(cin, s);
    int chuso = 0, chucai = 0, dacbiet = 0;
    for(char x : s)
    {
        if(isdigit(x)) ++chuso;
        else if(isalpha(x)) ++chucai;
        else dacbiet++;
    }
    cout << chuso << ' ' << chucai << ' ' << dacbiet << endl;

    return 0;
}
