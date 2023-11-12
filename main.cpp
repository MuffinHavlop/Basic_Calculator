#include <iostream>
#include <string>
#include <stdio.h>
#include <cmath>

using namespace std;

void GiaiPhuongTrinh();
void ptb1();
void ptb2();
void HaiNghiemPhanBiet(float a, float b, float Delta);
void Fibonacci();
void Pythagoras();

int main()
{
    string Option;
    while (true)
    {
        cout << "\n Hay chon cac lua chon sau(q de thoat): \n"<< "1.Giai phuong trinh\n" << "2.Pythagoras\n" << "3.Fibonacci\n" << "Choice: " ; cin >> Option;
        if (Option == "1")
        {
            GiaiPhuongTrinh();
        }
        else if (Option == "2")
        {
            Pythagoras();
        }
        else if (Option == "3")
        {
            Fibonacci();
        }
    }
    return 0;
}


void GiaiPhuongTrinh()
{
    string PhuongTrinh;
    cout << "Hay chon giai phuong trinh bac nhat (ptb1) hoac phuong trinh bac hai (ptb2): "; cin >> PhuongTrinh;
    if (PhuongTrinh == "ptb1")
    {
        ptb1();
    }
    else if (PhuongTrinh == "ptb2")
    {
        ptb2();
    }
    else 
    {
        cout << "Invalid Input";
    }
}


void ptb1()
{
    float a;
    float b;
    cout << "Nhap a: "; cin >> a;
    cout << "Nhap b: "; cin >> b;
    cout << "Phuong trinh cua ban la: " << a << "x + " << b << endl;
    float result;
    result = -b/(2*a);
    cout << "Ket qua cua phuong trinh la: " << result << endl;
}


void ptb2()
{
    float a, b, c;
    cout << "Nhap a: "; cin >> a;
    cout << "Nhap b: "; cin >> b;
    cout << "Nhap c: "; cin >> c;
    cout << "Phuong trinh cua ban la: " << a << "x^2 + " << b << "x + " << c << endl;
    float SquaredDelta = sqrt(pow(b, 2) + 4*a*c);
    if (SquaredDelta < 0)
    {
        cout << "Phuong trinh vo nghiem\n";
    }
    else if (SquaredDelta == 0)
    {
        cout << "Phuong trinh co hai nghiem kep\n";
    }
    else 
    {
        cout << "Phuong trinh co hai nghiem phan biet\n";
        HaiNghiemPhanBiet(a, b, SquaredDelta);
    }
}


void HaiNghiemPhanBiet(float a, float b, float Delta)
{
    float x1, x2;
    x1 = -b+Delta/(2*a);
    x2 = -b+Delta/(2*a);
    cout << "x1: " << ceil(x1) << endl;
    cout << "x2: " << ceil(x2) << endl;
}


void Pythagoras()
{   
    int option;
    float x1,x2,ch; 
    while (true)
    {
        cout << "\n Chon cac option sau: \n";
        cout << "1.Tinh cgv \n" << "2.Tinh ch\n" ; cin >> option;
        if (option == 2) 
        {
            cout << "Nhap canh goc vuong 1:"; cin >> x1;
            cout << "Nhap canh goc vuong 2:"; cin >> x2;
            ch = sqrt(pow(x1,2)+pow(x2,2));
            cout << "Canh huyen cua tam giac la:" << ch << "\n" ; 
            break;
        }
        else if (option == 1) 
        {
            cout << "Nhap canh huyen:"; cin >> x1;
            cout << "Nhap canh goc vuong :"; cin >> x2;
            ch = sqrt(pow(x1,2)-pow(x2,2));
            cout << "Canh goc vuong can tim cua tam giac la:" << ch << "\n" ; 
            break;
        }
        else 
        {
            cout << "Nhap 1 hoac 2 \n";
            continue;
        }
    }
    
}


void Fibonacci()
{

}
