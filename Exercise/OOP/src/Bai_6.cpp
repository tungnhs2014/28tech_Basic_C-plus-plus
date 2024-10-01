/*
Viết chương trình khai báo lớp Rectange với các thuộc tính và phương thức như sau:
- width: double
- height: double
- color: string (static)

+ Rectange()
+ Rectange(width: double, heigt: double, color: string)
+ getWidth(): double
+ setWidth(width: double): void
+ getHeight(): double
+ setHeight(height: double): void
+ getColor(): string (static)
+ setColor(color): void (static)
+ findArea(): double
+ findPerimeter(): double

Viết chương trình nhập vào giá trị dộ dài 2 cạnh của hình chữ nhật và màu sắc. In ra thông tin về chu vi, diện tích, máu sắc
(đã đưa về dạng chuẩn trong ký tự đâu viết hoa, các ký tự sau viết thường) của hình chữ nhật đó

Input Format
Gồm 2 số nguyên a, b là độ dài 2 cạnh hình chữ nhật và một xâu ký tự (không có khoảng trống) mô tả màu sắc.

Constraints
-1000 <= a, b <= 1000;

Output Format
Nếu hình chữ nhật là hợp lệ (các cạnh đều nguyên dương) thì in ra 3 thông tin: chu vi, diện tích, màu sắc,
mỗi thông tin cách nhau một khoảng trống. Nếu dữ liệu hợp lệ in ra INVALID.

Sample Input 0
22 25 Gray

Sample Output 0
94 550 Gray

*/

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

class Rectange{
private:
    double width, height;
    static string color;
public:
    Rectange()
    {
        
    }
    Rectange(double width, double height, string color)
    {
        this->width = width;
        this->height = height;
        this->color = color;
    }

    double getWidth()
    {
        return this->width;
    }
    void setWidth(double width)
    {
        this->width = width;
    }
    double getHeight()
    {
        return this->height;
    }
    void setHeight(double height)
    {
        this->height = height;
    }
    string getColor()
    {
        return this->color;
    }
    void setColor(string color)
    {
        this->color = color;
    }

    double findArea()
    {
        return (this->width * this->height);
    }

    double findPerimeter()
    {
        return 2 *(this->width + this->height);
    }
};

string Rectange::color = "";

int main(int argc, char const *argv[])
{
    Rectange re;
    string color;
    int a, b;
    cin >> a >> b >> color;
    if(a <= 0 || b <= 0)
    {
        cout <<"INVALID\n";
    }
    else{
        re.setWidth(a); re.setHeight(b); re.setColor(color);
        cout << fixed << setprecision(0) << re.findPerimeter() << " " << fixed << setprecision(0) << re.findArea() << " ";
        cout << re.getColor() << endl;
    }
    return 0;
}
