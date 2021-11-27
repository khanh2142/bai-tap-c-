#include <bits/stdc++.h>
#include <cstring>
#include <iomanip>

using namespace std;

class Hang{
    char MaHang[50],TenHang[50];
    float DonGia;
    public : 
    void Nhap();
    void Xuat();
};

void Hang::Nhap(){
    cout<<"Nhap Ma Hang : ";fflush(stdin);gets(MaHang);
    cout<<"Nhap Ten Hang : ";fflush(stdin);gets(TenHang);
    cout<<"Nhap Don Gia : ";cin>>DonGia;
}

void Hang::Xuat(){
    cout<<MaHang<<setw(15)<<TenHang<<setw(15)<<DonGia<<endl;
}

class Phieu{
    char MaPhieu[50];
    Hang* arr;
    int n;
    public :
    void Nhap();
    void Xuat();
};

void Phieu::Nhap(){
    cout<<"Nhap Ma Phieu : ";fflush(stdin);gets(MaPhieu);
    cout<<"Nhap so luong hang : ";cin>>n;
    arr = new Hang[n];
    for (int i = 0;i<n;i++){
        cout<<"- - - - - - - - - - - -"<<endl;
        cout<<"Nhap san pham thu "<<i+1<<endl;
        arr[i].Nhap();
    }
}

void Phieu::Xuat(){
    cout<<"- - - - PHIEU BAN HANG - - - - - -"<<endl;
    cout<<"Ma Phieu : "<<MaPhieu<<endl;
    cout<<"- - - - - - - - - - -"<<endl;
    cout<<"Ma Hang"<<setw(15)<<"Ten Hang"<<setw(15)<<"Don Gia"<<endl;
    for (int i =0;i<n;i++){
        arr[i].Xuat();
    }

}

int main(){
    Phieu p;
    p.Nhap();
    p.Xuat();
    return 0;
}
