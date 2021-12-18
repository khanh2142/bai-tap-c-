#include <bits/stdc++.h>
#include <cstring>
#include <iomanip>

using namespace std;

class Nhanvien {
    public :
    char Hoten[50],Manv[50];
    void Nhap();
    void Xuat();
};

void Nhanvien::Nhap(){
    cout<<"Nhap ten nhan vien : ";fflush(stdin);gets(Hoten);
    cout<<"Nhap ma nhan vien : ";fflush(stdin);gets(Manv);
}

void Nhanvien::Xuat(){
    cout<<"Nhan vien : "<<Hoten<<setw(25)<<"Ma nhan vien : "<<Manv<<endl;
}

class Nhacungcap {
    public :
    char TenNCC[50],MaNCC[50];
    void Nhap();
    void Xuat();
};

void Nhacungcap::Nhap(){
    cout<<"Nhap ten ncc : ";fflush(stdin);gets(TenNCC);
    cout<<"Nhap ma ncc : ";fflush(stdin);gets(MaNCC);
}

void Nhacungcap::Xuat(){
    cout<<"Ten NCC : "<<TenNCC<<setw(25)<<"Ma NCC : "<<MaNCC<<endl;
}

class Hang {
    public :
    char Mahang[50],Tenhang[50];
    int Dongia,Soluong,Thanhtien;
    void Nhap();
    void Xuat();
};

void Hang::Nhap(){
    cout<<"Nhap ma hang : ";fflush(stdin);gets(Mahang);
    cout<<"Nhap ten hang : ";fflush(stdin);gets(Tenhang);
    cout<<"Nhap don gia : ";cin>>Dongia;
    cout<<"Nhap so luong : ";cin>>Soluong;
    Thanhtien = Dongia * Soluong;
}

void Hang::Xuat(){
    cout<<Mahang<<setw(15)<<Tenhang<<setw(15)<<Dongia<<setw(15)<<Soluong<<setw(15)<<Thanhtien<<endl;
}

class Hoadon {
    public:
    char Mahoadon[50],Ngaylap[50];
    Nhanvien nv;
    Nhacungcap ncc;
    int n;
    Hang *arr;
    void Nhap();
    void Xuat();
    void Danhsachsapxep();
};


void Hoadon::Nhap(){
    cout<<"Nhap ma hoa don : ";fflush(stdin);gets(Mahoadon);
    cout<<"Nhap ngay lap : ";fflush(stdin);gets(Ngaylap);
    nv.Nhap();
    ncc.Nhap();
    cout<<"Nhap so luong hang : ";cin>>n;
    arr = new Hang[n];
    for (int i = 0;i<n;i++){
        cout<<"- - - - - - - - - - -"<<endl;
        cout<<"Nhap hang thu "<<i+1<<endl;
        arr[i].Nhap();
    }
}

void Hoadon::Xuat(){
    int tong = 0;
    int check = 0;
    cout<<"--------------------- HOA DON NHAP HANG ---------------------"<<endl;
    cout<<"Ma hoa don : "<<Mahoadon<<setw(25)<<"Ngay lap : "<<Ngaylap<<endl;
    nv.Xuat();
    ncc.Xuat();
    cout<<"Ma hang "<<setw(15)<<"Ten hang "<<setw(15)<<"Don gia "<<setw(15)<<"So luong "<<setw(15)<<"Thanh tien "<<endl;
    cout<<"----------------------------------------------------------------"<<endl;
    for (int i = 0;i<n;i++){
        arr[i].Xuat();
        tong+=arr[i].Thanhtien;
        if (strcmp(arr[i].Mahang,"H02") == 0){
            if (arr[i].Soluong <5){
                check = 1;
            }
        }
        cout<<"----------------------------------------------------------------"<<endl;
    }
    cout<<"                          TONG                         | "<<tong<<endl;
    cout<<"----------------------------------------------------------------"<<endl;
    cout<<endl;
    if (check == 1){
        cout<<"Can nhap them hang !"<<endl;
    }
}

void Hoadon::Danhsachsapxep(){
    int tong = 0;
    int check = 0;

    cout<<"\n\n";
    cout<<"Danh sach sap xep : "<<endl;
    cout<<"--------------------- HOA DON NHAP HANG ---------------------"<<endl;
    cout<<"Ma hoa don : "<<Mahoadon<<setw(25)<<"Ngay lap : "<<Ngaylap<<endl;
    nv.Xuat();
    ncc.Xuat();
    cout<<"Ma hang "<<setw(15)<<"Ten hang "<<setw(15)<<"Don gia "<<setw(15)<<"So luong "<<setw(15)<<"Thanh tien "<<endl;
    cout<<"----------------------------------------------------------------"<<endl;
    for (int i = 0;i<n-1;i++){
        for (int j = i+1;j<n;j++){
            if (arr[i].Thanhtien>arr[j].Thanhtien){
                Hang dummy;
                dummy = arr[i];
                arr[i] = arr[j];
                arr[j] = dummy;
            }
        }
    }

    for (int i = 0;i<n;i++){
        arr[i].Xuat();
        tong+=arr[i].Thanhtien;
        if (strcmp(arr[i].Mahang,"H02") == 0){
            if (arr[i].Soluong <5){
                check = 1;
            }
        }
        cout<<"----------------------------------------------------------------"<<endl;
    }
    cout<<"                          TONG                         | "<<tong<<endl;
    cout<<"----------------------------------------------------------------"<<endl;
    cout<<endl;
    if (check == 1){
        cout<<"Can nhap them hang !"<<endl;
    }
}


int main(){
    Hoadon hd;
    hd.Nhap();
    hd.Xuat();
    hd.Danhsachsapxep();
    return 0;
}
