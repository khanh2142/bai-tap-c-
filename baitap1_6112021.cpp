#include <bits/stdc++.h>
#include <cstring>
#include <iomanip>

using namespace std;

class ThayGiao{
 public: 
    float TienMotTiet;
    int SoTiet;
    void Nhap();
    void Xuat();
};

void ThayGiao::Nhap(){
    cout<<"Tien Mot Tiet : ";cin>>TienMotTiet;
    cout<<"So Tiet : ";cin>>SoTiet;
}

void ThayGiao::Xuat(){
    cout<<TienMotTiet*SoTiet<<setw(15)<<endl;
}

class GiaoVienCoHuu:public ThayGiao {
    public: 
    float PhuCap;
    void Nhap();
    void Xuat();
};

void GiaoVienCoHuu::Nhap(){
    ThayGiao::Nhap();
    cout<<"Phu Cap : ";cin>>PhuCap;
}

void GiaoVienCoHuu::Xuat(){
    cout<<PhuCap+ThayGiao::SoTiet*ThayGiao::TienMotTiet<<setw(15)<<endl;
}

class NguoiLamHopDong{
    public :
    float TienCong;
    int NgayLam;
    void Nhap();
    void Xuat();
};

void NguoiLamHopDong::Nhap(){
    cout<<"Tien Cong : ";cin>>TienCong;
    cout<<"Ngay Lam : ";cin>>NgayLam;
}

void NguoiLamHopDong::Xuat(){
    cout<<TienCong*NgayLam<<setw(15)<<endl;
}

class HoTen{
    public : 
    char HoTen[50];
    int Loai;
    ThayGiao teacher;
    GiaoVienCoHuu oldTeacher;
    NguoiLamHopDong staff;
    void Nhap();
    void Xuat();
};

void HoTen::Nhap(){
    cout<<"Ho Ten : ";fflush(stdin);gets(HoTen);
    cout<<"Loai : ";cin>>Loai;
    if (Loai == 1){
        teacher.Nhap();
    }
    if (Loai == 2){
        oldTeacher.Nhap();
    }
    if (Loai == 3){
        staff.Nhap();
    }

}

void HoTen::Xuat(){
    cout<<HoTen<<setw(15)<<Loai<<setw(15);
    if (Loai == 1){
        teacher.Xuat();
    }
    if (Loai == 2){
        oldTeacher.Xuat();
    }
    if (Loai == 3){
        staff.Xuat();
    }
}


void NhapDS(HoTen *arr,int n){
    for (int i = 0;i<n;i++){
        cout<<"- - - - - - - - - -"<<endl;
        cout<<"Nhap thanh vien thu "<<i+1<<endl;
        arr[i].Nhap();
    }
}

void XuatDS(HoTen *arr,int n){
    cout<<"Ho Ten"<<setw(15)<<"Loai"<<setw(15)<<"So Tien"<<setw(15)<<endl;
    for (int i = 0;i<n;i++){
        arr[i].Xuat();
    }
}


int main(){
    HoTen *name;
    int n;
    cout<<"Nhap so luong thanh vien : ";cin>>n;
    name = new HoTen[n];
    NhapDS(name,n);
    XuatDS(name,n);
    return 0;
}


