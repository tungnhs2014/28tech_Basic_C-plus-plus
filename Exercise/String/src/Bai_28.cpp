#include <bits/stdc++.h>
using namespace std;

bool cmp(string a, string b)
{
    if(a.size() != b.size()) return a.size() > b.size();
    else return a > b; 
}

int main(int argc, char const *argv[])
{
    string s; cin >> s;
    vector<string> num;
    string tmp = "";
    s += "@";
    for(char x : s)
    {
        if(isdigit(x))
        {
            tmp += x;
        }
        else{
            while(tmp.size() > 1 && tmp[0] == '0') tmp.erase(0, 1);
            // while(tmp[0] == '0' && tmp.size() > 1 ) tmp.erase(0, 1);
            if(tmp != ""){
                num.push_back(tmp);
            }
            tmp = "";

        }
    }
    sort(begin(num), end(num), cmp);
    cout << num[0] << endl;
    return 0;
}
