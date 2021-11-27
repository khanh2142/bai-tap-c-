#include <bits/stdc++.h>
#include <cstring>
#include <iomanip>

using namespace std;

class QuanLy{
    char MaQL[50],HoTen[50];
    public : 
    void Nhap();
    void Xuat();
};

void QuanLy::Nhap(){
    cout<<"Nhap Ma Quan Ly : ";fflush(stdin);gets(MaQL);
    cout<<"Nhap Ten Quan Ly : ";fflush(stdin);gets(HoTen);
}

void QuanLy::Xuat(){
    cout<<"Ma Quan Ly : "<<MaQL<<endl;
    cout<<"Ten Quan Ly : "<<HoTen<<endl;
}

class May{
    char MaMay[50],KieuMay[50],TinhTrang[50];
    public : 
    void Nhap();
    void Xuat();
};

void May::Nhap(){
    cout<<"Nhap Ma May : ";fflush(stdin);gets(MaMay);
    cout<<"Nhap Kieu May : ";fflush(stdin);gets(KieuMay);
    cout<<"Nhap Tinh Trang : ";fflush(stdin);gets(TinhTrang);
}

void May::Xuat(){
    cout<<MaMay<<setw(15)<<KieuMay<<setw(15)<<TinhTrang<<endl;
}

class PhongMay{
    char MaPhong[50],TenPhong[50];
    float DienTich;
    QuanLy ql;
    May* arr;
    int n;
    public :
    void Nhap();
    void Xuat();
};

void PhongMay::Nhap(){
    cout<<"Nhap Ma Phong : ";fflush(stdin);gets(MaPhong);
    cout<<"Nhap Ten Phong : ";fflush(stdin);gets(TenPhong);
    cout<<"Nhap dien tich : ";cin>>DienTich;
    ql.Nhap();
    cout<<"Nhap so luong may tinh : ";cin>>n;
    arr = new May[n];
    for (int i = 0;i<n;i++){
        cout<<"- - - - - - - - - - - -"<<endl;
        cout<<"Nhap san pham thu "<<i+1<<endl;
        arr[i].Nhap();
    }
}

void PhongMay::Xuat(){
    cout<<"- - - - - - - - - - -"<<endl;
    cout<<"Ma Phong : "<<MaPhong<<endl;
    cout<<"Ten Phong : "<<TenPhong<<endl;
    cout<<"Dien Tich : "<<DienTich<<endl;
    cout<<"- - - - - - - - - - -"<<endl;
    ql.Xuat();
    cout<<"- - - - - - - - - - -"<<endl;
    cout<<"Ma May"<<setw(15)<<"Kieu May"<<setw(15)<<"Tinh Trang"<<endl;
    for (int i =0;i<n;i++){
        arr[i].Xuat();
    }

}

int main(){
    PhongMay p;
    p.Nhap();
    p.Xuat();
    return 0;
}
