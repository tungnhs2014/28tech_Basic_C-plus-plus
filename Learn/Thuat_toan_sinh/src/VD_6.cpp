#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// brute force
// -- Bài toán sinh nhị phân có độ dài n
// -- Bài toán sinh tổ họp chập k của n phần tử 
// -- Sinh hoán vị: N!
// -- Sinh phân hoạch


// <Khởi tạo cấu hình đầu tiên>

// while(<Chưa phải cấu hình cuối cùng)
//      <Xử lí cầu hình hiện tại>
//      <Sinh ra cấu hình kế tiếp> 

// permutation
// next_permutation: mang, vector, string
// prev_permutation: mang, vector, string


int main(int argc, char const *argv[])
{
    // string s = "12345";
    // do{
    //     cout << s << endl;
    // }while (next_permutation(s.begin(), s.end()));

    // int a[5] = {1, 2, 2, 4, 5}; // 5! : 2! = 60 cau hinh
    // do{
    //     for(int i = 0; i < 5; i++) cout << a[i] << ' ';
    //     cout << endl;
    // }while(next_permutation(a, a + 5));

    int a[5] = {5, 4, 3, 2, 1}; // 5! : 2! = 60 cau hinh
    do{
        for(int i = 0; i < 5; i++) cout << a[i] << ' ';
        cout << endl;
    }while(prev_permutation(a, a + 5));
    return 0;
}