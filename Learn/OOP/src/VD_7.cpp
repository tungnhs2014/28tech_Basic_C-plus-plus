#include <bits/stdc++.h>
using namespace std;

class Person
{
private:
    string ten, diachi;
public:
    Person()
    {
        cout <<"Ham khoi tao cua lop Person\n";
    }
    string getTen()
    {
        return this->ten;
    }
    string getDiaChi()
    {
        return this->diachi;
    }
    void setTen(string ten)
    {
        this->ten = ten;
    }
    void setDiaChi(string diachi)
    {
        this->diachi = diachi;
    }
    void inthongtin()
    {
        cout << ten << " " << diachi << " ";
    }    
    ~Person()
    {
        cout <<"Ham huy cua lop Person\n";
    }
};

class Student : public Person
{
private:
    double gpa;
public:
    Student()
    {
        cout <<"Ham khoi tao cua lop Student\n";
    }
    // function override
    void inthongtin()
    {
        Person::inthongtin();
        cout << fixed << setprecision(1) << gpa << endl;
    }
    double getGpa()
    {
        return this->gpa;
    }
    void setGpa(double gpa)
    {
        this->gpa = gpa;
    }
    ~Student()
    {
        cout <<"Ham huy cua lop Student\n";
    }
};

class Employee : public Person
{
private:
    double salary;
public:
    double getSalary()
    {
        return this->salary;
    }
    void setSalary(double salary)
    {
        this->salary = salary;
    }
};

int main(int argc, char const *argv[])
{
    Student st;
    st.setTen("Nguyen Huu Son Tung");
    st.setDiaChi("Dong Nai");
    st.setGpa(9.5);
    // cout << st.getTen() << " " << st.getDiaChi() << " " << fixed << setprecision(1) << st.getGpa() << endl;
    st.inthongtin();
    return 0;
}
