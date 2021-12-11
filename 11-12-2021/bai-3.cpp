#include <bits/stdc++.h>
#include <cstring>
#include <iomanip>

using namespace std;

class PhanSo {
    public :
    int Tu,Mau;
    void Nhap();
    void Nhan(const PhanSo&);
    void Tru(const PhanSo&);
    void Xuat();
};

void PhanSo::Nhap(){
    cout<<"Nhap tu : ";cin>>Tu;
    cout<<"Nhap mau : ";cin>>Mau;
    cout<<"-------------------------"<<endl;
}

void PhanSo::Nhan(const PhanSo &ps){
    if (this->Mau == 0 || ps.Mau == 0){
        cout<<"Ket qua khong hop le !";
    }
    else {
        cout<<this->Tu<<"/"<<this->Mau<<" x "<<+ps.Tu<<"/"<<ps.Mau<<" = "<<this->Tu*ps.Tu<<"/"<<this->Mau*ps.Mau<<endl;
    }
}

void PhanSo::Tru(const PhanSo &ps){
    if (this->Mau == 0 || ps.Mau == 0){
        cout<<"Ket qua khong hop le !";
    }
    else {
        cout<<this->Tu<<"/"<<this->Mau<<" - "<<+ps.Tu<<"/"<<ps.Mau<<" = "<<this->Tu*ps.Mau-ps.Tu*this->Mau<<"/"<<this->Mau*ps.Mau<<endl;
    }
}


void PhanSo::Xuat(){
    cout<<"Phan so : "<<Tu<<"/"<<Mau<<endl;
}


int main(){
    PhanSo a,b;
    a.Nhap();
    b.Nhap();
    a.Tru(b);
    a.Nhan(b);
    return 0;
}

