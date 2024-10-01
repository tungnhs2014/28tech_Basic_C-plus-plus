// Kiểm tra cặp phần tử trong mảng

#include <bits/stdc++.h>
using namespace std;

// int main(int argc, char const *argv[])
// {
//     int n; cin >> n;
//     int a[n];
//     for(int i = 0; i < n; i++)
//         cin >> a[i];
//     int cnt = 0;
//     // O(n^2)
//     for(int i = 0; i < n -1; i++)
//     {
//         // Xet phan tu co chi so i
//         for(int j = i + 1; j < n; j++)
//         {
//             // lam gi do voi cap a[i] va a[j]
//         }
        
//     }

//     for(int i = 0; i < n -2; i++)
//     {
//         // Xet phan tu co chi so i
//         for(int j = i + 1; j < n-1; j++)
//         {
//             for(int k = j + 1; k < n; k++)
//             {
//                 // lam gi do voi cap a[i] va a[j] va a[k]
//             }
//         }
        
//     }
//     return 0;
// }

int main()
{
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    int res = INT_MAX;
    for(int i = 0; i < n -1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            res = min(res, abs(a[i] - a[j]));
            cout << "Dang xet cap: " << a[i] << ' ' << a[j]<< endl;
        }
    }
    cout << res << endl;
}