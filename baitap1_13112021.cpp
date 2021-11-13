#include <bits/stdc++.h>
#include <cstring>
#include <iomanip>

using namespace std;

class NhanVien{
    public :
    char HoTen[50],ChucVu[50];
    void Nhap();
    void Xuat();
};

void NhanVien::Nhap(){
    cout<<"Ho Ten : ";fflush(stdin);gets(HoTen);
    cout<<"Chuc Vu : ";fflush(stdin);gets(ChucVu);
}

void NhanVien::Xuat(){
    cout<<"Ho Ten NV : "<<HoTen<<endl;
    cout<<"Chuc Vu : "<<ChucVu<<endl;
}

class Phong{
    public :
    char MaPhong[20],TenPhong[50],TruongPhong[50];
    void Nhap();
    void Xuat();
};

void Phong::Nhap(){
    cout<<"Ma Phong : ";fflush(stdin);gets(MaPhong);
    cout<<"Ten Phong : ";fflush(stdin);gets(TenPhong);
    cout<<"Truong Phong : ";fflush(stdin);gets(TruongPhong);
}

void Phong::Xuat(){
    cout<<"Ma Phong : "<<MaPhong<<endl;
    cout<<"Ten Phong : "<<TenPhong<<endl;
    cout<<"Truong Phong : "<<TruongPhong<<endl;
}

class TaiSan{
    public:
    char TenTS[50],TinhTrang[50];
    int SoLuong;
    void Nhap();
    void Xuat();
};

void TaiSan::Nhap(){
    cout<<"Ten Tai San : ";fflush(stdin);gets(TenTS);
    cout<<"So Luong : ";cin>>SoLuong;
    cout<<"Tinh Trang : ";fflush(stdin);gets(TinhTrang);
}

void TaiSan::Xuat(){
    cout<<TenTS<<setw(15)<<SoLuong<<setw(15)<<TinhTrang<<endl;
}

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

class Phieu{
    public :
    char MaPhieu[20];
    ThoiGian time;
    NhanVien nv;
    Phong p;
    TaiSan* ts;
    int n;
    void Nhap();
    void Xuat();
};

void Phieu::Nhap(){
    cout<<"Ma Phieu : ";fflush(stdin);gets(MaPhieu);
    time.Nhap();
    nv.Nhap();
    p.Nhap();
    cout<<"So tai san kiem ke : ";cin>>n;
    ts = new TaiSan[n];
    for (int i = 0;i<n;i++){
        cout<<"- - - - - - - - - -"<<endl;
        cout<<"Nhap tai san thu "<<i+1<<endl;
        ts[i].Nhap();
    }

}

void Phieu::Xuat(){
    cout<<"--------------PHIEU KIEM KE TAI SAN---------------"<<endl;
    cout<<"Ma Phieu : "<<MaPhieu<<endl;
    cout<<"Ngay Kiem Ke : ";
    time.Xuat();
    cout<<"- - - - - - - - -"<<endl;
    nv.Xuat();
    cout<<"- - - - - - - - -"<<endl;
    p.Xuat();
    cout<<"- - - - - - - - -"<<endl;
    cout<<"Ten TS"<<setw(15)<<"So Luong"<<setw(15)<<"Tinh Trang"<<endl;
    for (int i = 0;i<n;i++){
        ts[i].Xuat();
    }
    int total = 0;
    for (int i = 0;i<n;i++){
        total += ts[i].SoLuong;
    }
    cout<<"So Tai San Kiem Ke : "<<n<<endl;
    cout<<"Tong So Luong Tai San: "<<total<<endl;
}

int main(){
    Phieu p;
    p.Nhap();
    p.Xuat();
    return 0;
}


