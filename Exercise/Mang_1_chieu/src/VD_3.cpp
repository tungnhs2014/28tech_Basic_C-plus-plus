#include <bits/stdc++.h>
using namespace std;

// Dem va liet ke cac chu so toan le trong mang
bool check(int n)
{
    int res = 1;
    while(n !=0)
    {
        res = n % 10;
        if(res % 2 == 0) return false;
        n /= 10;        
    }
    return true;
}

int main(int argc, char const *argv[])
{
    int n; cin >> n;
    int a[n];
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++)
    {   
        if(check(a[i]))
        {
            count++;
        }
    }
    cout << count << endl;
    for(int i = 0; i < n; i++)
    {
        if(check(a[i]))
            cout << a[i] << " ";
    }
    return 0;
}