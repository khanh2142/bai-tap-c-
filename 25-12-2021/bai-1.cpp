#include <bits/stdc++.h>
#include <cstring>
#include <iomanip>

using namespace std;

class Hoadon{
    public : 
    int Mahd,Dongia,Soluong,Thanhtien;
    void Nhap();
    void Xuat();
    Hoadon(){
        Mahd = 1;
        Dongia = 1;
        Soluong = 1;
        Thanhtien = 1;
    }
    Hoadon(int a,int b,int c){
        Mahd = a;
        Dongia = b;
        Soluong = c;
        Thanhtien = Dongia * Soluong;
    }
};

void Hoadon::Nhap(){
    cout<<"Nhap ma hoa don : ";cin>>Mahd;
    cout<<"Nhap don gia : ";cin>>Dongia;
    cout<<"Nhap so luong : ";cin>>Soluong;
    Thanhtien = Dongia * Soluong;
}

void Hoadon::Xuat(){
    cout<<"Ma hoa don : "<<Mahd<<endl;
    cout<<"Don gia : "<<Dongia<<endl;
    cout<<"So luong : "<<Soluong<<endl;
    cout<<"Thanh tien : "<<Thanhtien<<endl;
}

int main(){
    Hoadon p;
    p.Nhap();
    p.Xuat();
    Hoadon t = Hoadon(2,6,9);
    t.Xuat();
    return 0;
}
