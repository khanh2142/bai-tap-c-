#include <bits/stdc++.h>
#include <cstring>
#include <iomanip>

using namespace std;

class Chung{
    public : 
    char HoTen[50];
    char BoPhan[50];
    void Nhap();
};

void Chung::Nhap(){
    cout<<"Ho Ten : ";fflush(stdin);gets(HoTen);
    cout<<"Bo Phan : ";fflush(stdin);gets(BoPhan);
}

class SinhVien{
    public : 
    Chung chung;
    float DiemTB;
    void Nhap();
};

void SinhVien::Nhap(){
    chung.Nhap();
    cout<<"Diem TB : ";cin>>DiemTB;
}

class GiangVien{
    public :
    Chung chung;
    int CongTrinh;
    void Nhap();
};

void GiangVien::Nhap(){
    chung.Nhap();
    cout<<"So Cong Trinh : ";cin>>CongTrinh;
}

class QuanLy{
    public :
    Chung chung;
    char HoanThanh[50];
    void Nhap();
};

void QuanLy::Nhap(){
    chung.Nhap();
    cout<<"Hoan Thanh : ";fflush(stdin);gets(HoanThanh);
}

void NhapSV(SinhVien *sv,int n){
    for (int i = 0;i<n;i++){
        cout<<"--------------"<<endl;
        cout<<"Nhap sinh vien thu "<<i+1<<endl;
        sv[i].Nhap();
    }
}

void XuatSV(SinhVien *sv,int n,char BoPhan[50]){
    for (int i = 0;i<n;i++){
        if (strcmp(sv[i].chung.BoPhan,BoPhan) == 0){
            if (sv[i].DiemTB>8) cout<<sv[i].chung.HoTen<<setw(15)<<sv[i].chung.BoPhan<<setw(15)<<"Sinh vien"<<setw(15)<<sv[i].DiemTB<<endl;
        }
    }
}

void NhapGV(GiangVien *gv,int n){
    for (int i = 0;i<n;i++){
        cout<<"--------------"<<endl;
        cout<<"Nhap giang vien thu "<<i+1<<endl;
        gv[i].Nhap();
    }
}

void XuatGV(GiangVien *gv,int n,char BoPhan[50]){
    for (int i = 0;i<n;i++){
        if (strcmp(gv[i].chung.BoPhan,BoPhan) == 0){
            if (gv[i].CongTrinh>=2) cout<<gv[i].chung.HoTen<<setw(15)<<gv[i].chung.BoPhan<<setw(15)<<"Giang vien"<<setw(15)<<gv[i].CongTrinh<<endl;
        }
    }
}

void NhapQL(QuanLy *ql,int n){
    for (int i = 0;i<n;i++){
        cout<<"--------------"<<endl;
        cout<<"Nhap quan ly thu "<<i+1<<endl;
        ql[i].Nhap();
    }
}

void XuatQL(QuanLy *ql,int n,char BoPhan[50]){
    for (int i = 0;i<n;i++){
        if (strcmp(ql[i].chung.BoPhan,BoPhan) == 0){
            if (strcmp(ql[i].HoanThanh,"co") == 0) cout<<ql[i].chung.HoTen<<setw(15)<<ql[i].chung.BoPhan<<setw(15)<<"Quan ly"<<setw(15)<<ql[i].HoanThanh<<endl;
        }
    }
}

int main(){
    SinhVien *sv;
    GiangVien *gv;
    QuanLy *ql;
    int n1,n2,n3;
    cout<<"Nhap so luong sinh vien : ";cin>>n1;
    sv = new SinhVien[n1];
    NhapSV(sv,n1);
    cout<<" - - - - - - - - - "<<endl;

    cout<<"Nhap so luong giang vien : ";cin>>n2;
    gv = new GiangVien[n2];
    NhapGV(gv,n2);
    cout<<" - - - - - - - - - "<<endl;

    cout<<"Nhap so luong quan ly : ";cin>>n3;
    ql= new QuanLy[n3];
    NhapQL(ql,n3);
    cout<<" - - - - - - - - - "<<endl;

    char BoPhan[50];
    cout<<"Nhap bo phan : ";fflush(stdin);gets(BoPhan);

    cout<<"Ho ten"<<setw(15)<<"Bo phan"<<setw(15)<<"Loai"<<setw(15)<<"Thanh tich"<<endl;

    XuatSV(sv,n1,BoPhan);
    XuatGV(gv,n2,BoPhan);
    XuatQL(ql,n3,BoPhan);
    return 0;
}
