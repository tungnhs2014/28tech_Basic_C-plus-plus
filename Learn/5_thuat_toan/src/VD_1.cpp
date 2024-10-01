#include <bits/stdc++.h>
using namespace std;

// selection sort: O(n^2): sắp xếp chọn
// interchange sort O(n^2): sắp xếp đổi chỗ trực tiếp
// bubble_sort O(n^2): Sắp xếp nổi bọt
// insertion_sort O(n^2): Sắp xếp chèn
// counting_sort: O(n + k): Sắp xếp đếm phân phối 
// - Note: không sắp xếp được số âm
//         không quá 10^7 vì vượt quá giới hạn mảng đánh dấu

// sort(): O(nlogn)

void selection_sort(int a[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        int min = i;
        for(int j = i + 1; j < n; j++)
        {   
            if(a[j] < a[min])
                min = j;
        }
        swap(a[min], a[i]);
    }
    for(int x  = 0; x < n; x++)
    {
        cout << a[x] << ' ';
    }
}

void interchange_sort(int a[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {   
            if(a[j] < a[i])
                swap(a[j], a[i]);
        }
    }
    for(int x  = 0; x < n; x++)
    {
        cout << a[x] << ' ';
    }
}

void bubble_sort(int a[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n -i - 1; j++)
        {
            if(a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
            }
        }
    }
    for(int x  = 0; x < n; x++)
    {
        cout << a[x] << ' ';
    }
}

void insertion_sort(int a[], int n)
{
    for(int i = 1; i < n; i++)
    {
        int x = a[i], pos = i - 1;
        while(pos >= 0 && a[pos] > x) // tang dan => giam dan a[pos] < x
        {
            a[pos + 1] = a[pos];
            pos--;
        }
        a[pos + 1] = x; // chen vao
    }
    for(int x  = 0; x < n; x++)
    {
        cout << a[x] << ' ';
    }
}

int cnt[10000001] = {0};

void counting_sort(int a[], int n)
{
    int max = -1e9-1;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        cnt[a[i]]++;
        if(a[i] > max)
        {
            max = a[i]; // tim gia tri max trong mang
        }
    }
    for(int x  = 0; x <= max; x++)
    {
        if(cnt[x] != 0)
        {
            while(cnt[x]--)
                cout << x << ' ';
        }
    }
}

int main(int argc, char const *argv[])
{
    int n; cin >> n;
    int a[n];
    counting_sort(a, n);
    return 0;
}
