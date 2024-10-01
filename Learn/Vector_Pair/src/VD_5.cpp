#include <bits/stdc++.h>
using namespace std;

int mark[1000001];

int main(int argc, char const *argv[])
{
    int n; cin >> n;
    int a[n], b[n] = {0};
    for(int i = 0; i < n; i++) cin >> a[i];
    // for(int i = 0; i < n; i++)
    // {
    //     if(b[i] == 0)
    //     {
    //         cout << a[i] << " ";
    //         // danh dau cac phan tu dung sau chi so i
    //         for(int j = i + 1; j < n; j++)
    //         {
    //             if(a[i] == a[j]) b[j] = 1; 
    //         }
    //     }
    // }
    for(int i = 0; i < n; i++)
    {
        if(mark[a[i]] == 0)
        {
            cout << a[i] << " ";
            mark[a[i]] = 1;
        }
    }
    return 0;
}
