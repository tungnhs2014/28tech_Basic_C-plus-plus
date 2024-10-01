#include <bits/stdc++.h>
using namespace std;

// pass by reference: truyen tham chieu
// void tang(int &n)
// {
//     ++n;
// }

void tang2(int *n)
{
    ++(*n);
}

int main(int argc, char const *argv[])
{
    // int a = 100;
    // int *ptr = &a; // gan dia chia cua bien a cho con tro ptr
    // cout << "Dia chi cua bien a: " << &a << endl;
    // cout << "Gia tri cua con tro ptr: " << ptr << endl;
    // cout << "Gia tri cua bien ma con tro ptr dang tro toi: " << *ptr << endl;
    // *ptr = 50;
    // cout << a << endl;

    // int n = 100;
    // tang2(&n);
    // cout << n << endl;

    int a[] = {1, 2, 3, 4, 5};
    for(int i = 0; i < 5; i++)
    {
        // cout << &a[i] << endl;
        // cin >> a[i];
        cin >> *(a + i);
    }

    for(int i = 0; i < 5; i++)
    {
        // cout << a[i] << endl;
        cout << *(a + i) << endl;
    }

    int *b = &a[0];
    for(int i = 0; i < 5; i++)
    {
        cout << *(b + i) << endl;
    }

    return 0;
}
