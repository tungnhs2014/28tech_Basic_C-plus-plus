#include <bits/stdc++.h>
using namespace std;

// polymorphism

class Hinh{
    protected:
        int cao, rong;
    public:
        void set_value(int a, int b)
        {
            cao = a;
            rong = b;
        }
        virtual int getArea() // Ham ao co the dinh gnhia lai o trong lop con, goi ham ay thong qua tham chieu con tro lop cha
        {
            return 0;
        }
};

class HinhChuNhat : public Hinh
{
    public:
        int getArea()
        {
            return cao * rong;
        }
};

class TamGiac : public Hinh
{
    public:
        int getArea()
        {
            return cao * rong /2;
        }
};

int main(int argc, char const *argv[])
{
    HinhChuNhat a;
    TamGiac b;
    Hinh *ptr1 = &a;
    Hinh *ptr2 = &b;

    ptr1->set_value(100, 200);
    ptr2->set_value(50, 100);
    
    cout << a.getArea() << endl;
    cout << b.getArea() << endl;

    cout << ptr1->getArea() << endl;
    cout << ptr2->getArea() << endl;

    return 0;
}
