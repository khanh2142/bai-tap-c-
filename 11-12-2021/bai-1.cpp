#include <bits/stdc++.h>
#include <cstring>
#include <iomanip>

using namespace std;

class Khach {
    public : 
    char MaKhach[50],HoTen[50];
    void Nhap();
    void Xuat();
};

void Khach::Nhap(){
    cout<<"Nhap ma khach hang : ";fflush(stdin);gets(MaKhach);
    cout<<"Nhap ho ten khach hang : ";fflush(stdin);gets(HoTen);
}

void Khach::Xuat(){
    cout<<"Ma khach hang : "<<MaKhach<<setw(30)<<"Ho ten khach hang : "<<HoTen<<endl;
}

class DanhSach {
    public : 
    char Ten[50];
    int SoLuong,GiaTien,ThanhTien;
    void Nhap();
    void Xuat();
};

void DanhSach::Nhap(){
    cout<<"Nhap ten hoa qua : ";fflush(stdin);gets(Ten);
    cout<<"Nhap so luong : ";cin>>SoLuong;
    cout<<"Nhap gia tien : ";cin>>GiaTien;
}

void DanhSach::Xuat(){
    ThanhTien = SoLuong * GiaTien;
    cout<<Ten<<setw(15)<<SoLuong<<setw(15)<<GiaTien<<setw(15)<<ThanhTien<<endl;
}

class Phieu {
    public : 
    char MaPhieu[50],NgayMua[50];
    Khach k;
    DanhSach *arr;
    int n;
    void Nhap();
    void Xuat();
};

void Phieu::Nhap(){
    cout<<"Nhap ma phieu : ";fflush(stdin);gets(MaPhieu);
    cout<<"Nhap ngay mua : ";fflush(stdin);gets(NgayMua);
    k.Nhap();
    cout<<"Nhap so luong mat hang : ";cin>>n;
    arr = new DanhSach[n];
    for (int i = 0;i<n;i++){
        cout<<"- - - - - - - - - - - -"<<endl;
        cout<<"Nhap mat hang thu "<<i+1<<endl;
        arr[i].Nhap();
    }
}

void Phieu::Xuat(){
    cout<<"-------------- PHIEU MUA HANG --------------"<<endl;
    cout<<"Ma Phieu : "<<MaPhieu<<setw(20)<<"Ngay Mua : "<<NgayMua<<endl;
    k.Xuat();
    if (n<1){
        cout<<"Khong co san pham nao !"<<endl;
    }
    else {
        cout<<"Danh sach hoa qua"<<endl;
        cout<<"STT  "<<setw(15)<<"Ten loai hoa qua"<<setw(15)<<"So luong(kg)"<<setw(15)<<"Gia tien"<<setw(15)<<"Thanh tien"<<endl;
        for (int i = 0;i<n;i++){
            cout<<i+1<<setw(15);
            arr[i].Xuat();
        }
    }
}

int main(){
    Phieu p ;
    p.Nhap();
    p.Xuat();
    return 0;
}
