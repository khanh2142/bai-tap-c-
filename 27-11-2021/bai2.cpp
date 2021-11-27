#include <bits/stdc++.h>
#include <cstring>
#include <iomanip>

using namespace std;

class Date{
    public :
    int Ngay,Thang,Nam;
    void Nhap();
    void Xuat();
};

void Date::Nhap(){
    cout<<"Nhap Ngay : ";cin>>Ngay;
    cout<<"Nhap Thang : ";cin>>Thang;
    cout<<"Nhap Nam : ";cin>>Nam;
}

void Date::Xuat(){
    cout<<Ngay<<"/"<<Thang<<"/"<<Nam<<endl;
}

class NhanSu{
    public :
    char MaNhanSu[20],HoTen[50];
    Date time;
    void Nhap();
    void Xuat();
};

void NhanSu::Nhap(){
    cout<<"Nhap Ma Nhan Su : ";fflush(stdin);gets(MaNhanSu);
    cout<<"Nhap Ho Ten : ";fflush(stdin);gets(HoTen);

    time.Nhap();
}

void NhanSu::Xuat(){
    cout<<"- - - - - - - - -"<<endl;

    cout<<"Ma Nhan Su : "<<MaNhanSu<<endl;
    cout<<"Ho Ten : "<<HoTen<<endl;

    cout<<"- - - - - - - - -"<<endl;
    cout<<"Thoi Gian : "<<endl;
    time.Xuat();

}

int main(){
    NhanSu p;
    p.Nhap();
    p.Xuat();
    return 0;
}


