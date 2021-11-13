#include <bits/stdc++.h>
#include <cstring>
#include <iomanip>
#include <math.h>

using namespace std;

class SinhVien{
    public :
    char MaSV[20],TenSV[50],Lop[20];
    int Khoa;
    void Nhap();
    void Xuat();
};  

void SinhVien::Nhap(){
    cout<<"Ma Sinh Vien : ";fflush(stdin);gets(MaSV);
    cout<<"Ten Sinh Vien : ";fflush(stdin);gets(TenSV);
    cout<<"Lop : ";fflush(stdin);gets(Lop);
    cout<<"Khoa : ";cin>>Khoa;
}

void SinhVien::Xuat(){
    cout<<"Ma Sinh Vien : "<<MaSV<<endl;
    cout<<"Ten Sinh Vien : "<<TenSV<<endl;
    cout<<"Lop : "<<Lop<<endl;
    cout<<"Khoa : "<<Khoa<<endl;
}

class BangDiem{
    public : 
    char TenMon[50];
    int SoTrinh;
    float Diem;
    void Nhap();
    void Xuat();
};

void BangDiem::Nhap(){
    cout<<"Ten Mon : ";fflush(stdin);gets(TenMon);
    cout<<"So Trinh : ";cin>>SoTrinh;
    cout<<"Diem : ";cin>>Diem;
}

void BangDiem::Xuat(){
    cout<<TenMon<<setw(15)<<SoTrinh<<setw(15)<<Diem<<endl;
}

class Phieu{
    public :
    SinhVien sv;
    BangDiem* diem;
    int n;
    void Nhap();
    void Xuat();
};

void Phieu::Nhap(){
    sv.Nhap();
    cout<<"Nhap so mon hoc : ";cin>>n;
    diem = new BangDiem[n];
    for (int i =0;i<n;i++){
        cout<<"- - - - - - - - - -"<<endl;
        cout<<"Nhap mon hoc thu "<<i+1<<endl;
        diem[i].Nhap();
    }
}

void Phieu::Xuat(){
    cout<<"-------------PHIEU BAO DIEM---------------"<<endl;
    sv.Xuat();
    cout<<"- - - - - - - - - - -"<<endl;
    cout<<"Ten mon"<<setw(15)<<"So Trinh"<<setw(15)<<"Diem"<<endl;
    for (int i = 0;i<n;i++){
        diem[i].Xuat();
    }
    int ToTalTrinh = 0;
    float ToTalTrinhDiem = 0;
    float TrungBinh;
    for (int i = 0;i<n;i++){
        ToTalTrinh += diem[i].SoTrinh;
        ToTalTrinhDiem += (diem[i].SoTrinh *  diem[i].Diem);
    }
    TrungBinh = roundf((ToTalTrinhDiem / ToTalTrinh)*100) / 100;
    cout<<"- - - - - - - - - - - "<<endl;
    cout<<"Diem Trung Binh : "<<TrungBinh<<endl;
}

int main(){
    Phieu p;
    p.Nhap();
    p.Xuat();
    return 0;
}

