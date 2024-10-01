#include <bits/stdc++.h>
using namespace std;

// max_element: tra ve phan tu lon nhat
// min_element: tra ve phan tu nho nhat

int main(int argc, char const *argv[])
{
    int n; cin >> n;
    int a[n];
    
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // coi phan tu dau tien trong mang la lon nhat
    int res = INT_MIN;
    for(int i = 1; i < n; i++)
    {
        if(a[i] > res)
            // cap nhat
            res = a[i];
    }
    cout << res << endl;

    cout << *max_element(a, a + n) << endl;
    cout << *min_element(a, a + n) << endl;

    return 0;
}
