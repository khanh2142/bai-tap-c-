#include <bits/stdc++.h>
#include <cstring>
#include <iomanip>

using namespace std;

class SinhVien{
    public : 
        float DiemTB;
        void Nhap();
};

void SinhVien::Nhap(){
    cout<<"Diem Trung Binh : ";cin>>DiemTB;
}

class GiangVien{
    public : 
    int CongTrinh;
    void Nhap();
};

void GiangVien::Nhap(){
    cout<<"So Cong Trinh : ";cin>>CongTrinh;
}

class QuanLy{
    public : 
        char HoanThanh[50];
        void Nhap();
};

void QuanLy::Nhap(){
    cout<<"Hoan Thanh : ";fflush(stdin);gets(HoanThanh);
}

class DanhSach{
    public :
    char HoTen[50];
    char BoPhan[50];
    SinhVien sv;
    GiangVien gv;
    QuanLy ql;
    void Nhap();
    void Xuat();
};

void DanhSach::Nhap(){
    cout<<"Ho Ten : ";fflush(stdin);gets(HoTen);
    cout<<"Loai : ";fflush(stdin);gets(BoPhan);
    if (strcmp(BoPhan,"sv") == 0){
        sv.Nhap();
    }
    if (strcmp(BoPhan,"gv") == 0){
        gv.Nhap();
    }
    if (strcmp(BoPhan,"ql") == 0){
        ql.Nhap();
    }
}

void DanhSach::Xuat(){
    if (strcmp(BoPhan,"sv") == 0){
        if (sv.DiemTB>8) cout<<HoTen<<setw(15)<<"Sinh Vien"<<endl;
    }
    if (strcmp(BoPhan,"gv") == 0){
        if (gv.CongTrinh>=2) cout<<HoTen<<setw(15)<<"Giang Vien"<<endl;
    }
    if (strcmp(BoPhan,"ql") == 0){
        if (strcmp(ql.HoanThanh,"co") == 0) cout<<HoTen<<setw(15)<<"Quan Ly"<<endl;
    }
}

void NhapDS(DanhSach *arr,int n){
    for (int i =0;i<n;i++){
        cout<<"- - - - - - - - "<<endl;
        cout<<"Nhap nguoi thu "<<i+1<<endl;
        arr[i].Nhap();
    }
}

void XuatDS(DanhSach *arr,int n){
    cout<<"Ho Ten"<<setw(15)<<"Bo Phan"<<endl;
    for (int i =0;i<n;i++){
        arr[i].Xuat();
    }
}

int main(){
    DanhSach *ds;
    int n;
    cout<<"Nhap so luong : ";cin>>n;
    ds = new DanhSach[n];
    NhapDS(ds,n);
    XuatDS(ds,n);
    return 0;
}
