#include <bits/stdc++.h>
using namespace std;
using ll = long long;
// FIFO: fist in frist out

int main(int argc, char const *argv[])
{
    queue <ll> q;
    q.push(6); q.push(8);
    vector <ll> lp;
    int cnt = 0;
    while(1)
    {  
        ++cnt;
        ll dinh = q.front();
        q.pop();
        lp.push_back(dinh);
        if(lp.size() == 1000)
        {
            break;
        }
        q.push(dinh *10 + 6);
        q.push(dinh *10 + 8);
    }
    cout << cnt << endl;
    for(int i = 0; i <lp.size(); i++)
    {
        cout << lp[i] << ' ';
    }
    
    return 0;
}
