#include <bits/stdc++.h>
#include <cstring>
#include <iomanip>

using namespace std;

class NSX{
    char MaNSX[50],TenNSX[50],DiaChi[50];
    public : 
    void Nhap();
    void Xuat();
};

void NSX::Nhap(){
    cout<<"Nhap Ma NSX : ";fflush(stdin);gets(MaNSX);
    cout<<"Nhap Ten NSX : ";fflush(stdin);gets(TenNSX);
    cout<<"Nhap Dia Chi NSX : ";fflush(stdin);gets(DiaChi);
}

void NSX::Xuat(){
    cout<<MaNSX<<setw(15)<<TenNSX<<setw(15)<<DiaChi<<endl;
}

class Hang{
    char MaHang[50],TenHang[50];
    NSX arr;
    public :
    void Nhap();
    void Xuat();
};

void Hang::Nhap(){
    cout<<"Nhap Ma Hang : ";fflush(stdin);gets(MaHang);
    cout<<"Nhap Ten Hang : ";fflush(stdin);gets(TenHang);
    arr.Nhap();
}

void Hang::Xuat(){
    cout<<"- - - - - - - - - - -"<<endl;
    cout<<"Ma Hang : "<<MaHang<<endl;
    cout<<"Ten Hang : "<<TenHang<<endl;
    cout<<"- - - - - - - - - - -"<<endl;
    cout<<"Ma NSX"<<setw(15)<<"Ten NSX"<<setw(15)<<"Dia Chi"<<endl;
    arr.Xuat();
}

int main(){
    Hang p;
    p.Nhap();
    p.Xuat();
    return 0;
}
