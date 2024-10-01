#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++)
    {
        // Kiem tra xem a[i] co duoc in hay khong?
        // a[i] da duoc in truoc do hay chua
        bool check = true;
        for(int j = 0; j < i; j++)
        {
            if(a[i] == a[j])
            {
                check = false;
                break;
            }
        }
        if(check)
            cout << a[i] << " ";
    }
    return 0;
}
