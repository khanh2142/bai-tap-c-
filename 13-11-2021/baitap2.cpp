#include <bits/stdc++.h>
#include <cstring>
#include <iomanip>
#include <math.h>

using namespace std;

class ThoiGian{
    public :
    int Ngay,Thang,Nam;
    void Nhap();
    void Xuat();
};

void ThoiGian::Nhap(){
    cout<<"Ngay : ";cin>>Ngay;
    cout<<"Thang : ";cin>>Thang;
    cout<<"Nam : ";cin>>Nam;
}

void ThoiGian::Xuat(){
    cout<<Ngay<<"/"<<Thang<<"/"<<Nam<<endl;
}

class NhaCungCap{
    public :
    char MaNCC[20],TenNCC[50],DiaChi[100];
    void Nhap();
    void Xuat();
};

void NhaCungCap::Nhap(){
    cout<<"Ma NCC : ";fflush(stdin);gets(MaNCC);
    cout<<"Ten NCC : ";fflush(stdin);gets(TenNCC);
    cout<<"Dia Chi : ";fflush(stdin);gets(DiaChi);
}

void NhaCungCap::Xuat(){
    cout<<"Ma NCC : "<<MaNCC<<endl;
    cout<<"Ten NCC : "<<TenNCC<<endl;
    cout<<"Dia Chi : "<<DiaChi<<endl;
}

class HangHoa{
    public :
    char TenHang[50];
    float DonGia,SoLuong,ThanhTien;
    void Nhap();
    void Xuat();
};

void HangHoa::Nhap(){
    cout<<"Ten Hang : ";fflush(stdin);gets(TenHang);
    cout<<"Don Gia : ";cin>>DonGia;
    cout<<"So Luong : ";cin>>SoLuong;
    ThanhTien = DonGia * SoLuong;
}

void HangHoa::Xuat(){
    cout<<TenHang<<setw(20)<<DonGia<<setw(20)<<SoLuong<<setw(20)<<ThanhTien<<endl;
}

class Phieu{
    public :
    char MaPhieu[20];
    ThoiGian time;
    NhaCungCap ncc;
    HangHoa* arr;
    int n;
    void Nhap();
    void Xuat();
};

void Phieu::Nhap(){
    cout<<"Ma Phieu : ";fflush(stdin);gets(MaPhieu);
    time.Nhap();
    ncc.Nhap();
    cout<<"Nhap so luong hang hoa : ";cin>>n;
    arr = new HangHoa[n];
    for (int i =0;i<n;i++){
        cout<<"- - - - - - - - - - - - "<<endl;
        cout<<"Nhap hang hoa thu "<<i+1<<endl;
        arr[i].Nhap();
    }
}

void Phieu::Xuat(){
    float total = 0;

    cout<<"-----------------PHIEU NHAP HANG----------------"<<endl;
    cout<<"Ma Phieu : "<<MaPhieu<<endl;
    time.Xuat();
    cout<<"- - - - - - - - - - - - - -"<<endl;
    ncc.Xuat();
    cout<<"- - - - - - - - - - - - - -"<<endl;
    cout<<"Ten Hang"<<setw(20)<<"Don Gia"<<setw(20)<<"So Luong"<<setw(20)<<"Thanh Tien"<<endl;
    for (int i =0;i<n;i++){
        total += arr[i].ThanhTien;
        arr[i].Xuat();
    }
    cout<<"- - - - - - - - - - - - - -"<<endl;
    cout<<"Cong Thanh Tien : "<<total<<endl;
}

int main(){
    Phieu p;
    p.Nhap();
    p.Xuat();
    return 0;
}
