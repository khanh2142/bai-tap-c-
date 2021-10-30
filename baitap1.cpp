#include <bits/stdc++.h>
#include <cstring>
#include <iomanip>

using namespace std;


class Date{
    public:
    int Ngay,Thang,Nam;
    void Nhap();
    void Xuat();
};

void Date::Nhap(){
    cout<<"Nhap ngay : ";cin>>Ngay;
    cout<<"Nhap thang : ";cin>>Thang;
    cout<<"Nhap nam : ";cin>>Nam;
}

void Date::Xuat(){
    cout<<Ngay<<setw(12)<<Thang<<setw(12)<<Nam;
}

class MayIn{
    public:
    float TrongLuong;
    char HangSanXuat[50];
    Date NgaySanXuat;
};

class MayInKim:public MayIn{
    public:
    int SoKim,TocDo;
    void Nhap();
    void Xuat();
};

void MayInKim::Nhap(){
    cout<<"Trong Luong : ";cin>>TrongLuong;
    cout<<"Hang San Xuat : ";fflush(stdin);gets(HangSanXuat);
    NgaySanXuat.Nhap();
    cout<<"So Kim : ";cin>>SoKim;
    cout<<"Toc Do: ";cin>>TocDo;
}

void MayInKim::Xuat(){
    cout<<TrongLuong<<setw(12)<<HangSanXuat<<setw(12);
    NgaySanXuat.Xuat();
    cout<<SoKim<<setw(12)<<TocDo<<setw(12)<<endl;
}

class MayInLaser:public MayIn{
    public:
    int DoPhanGiai,TocDo;
    void Nhap();
    void Xuat();
};

void MayInLaser::Nhap(){
    cout<<"Trong Luong : ";cin>>TrongLuong;
    cout<<"Hang San Xuat : ";fflush(stdin);gets(HangSanXuat);
    NgaySanXuat.Nhap();
    cout<<"So Kim : ";cin>>DoPhanGiai;
    cout<<"Toc Do: ";cin>>TocDo;
}

void MayInLaser::Xuat(){
    cout<<TrongLuong<<setw(12)<<HangSanXuat<<setw(12);
    NgaySanXuat.Xuat();
    cout<<DoPhanGiai<<setw(12)<<TocDo<<setw(12)<<endl;
}

void NhapDSMayInKim(MayInKim *arr,int n){
    for (int i = 0;i<n;i++){
        arr[i].Nhap();
    }
}

void XuatDSMayInKim(MayInKim *arr,int n){
    cout<<"Trong Luong"<<setw(12)<<"Hang San Xuat"<<setw(12)<<"Ngay"<<setw(12)<<"Thang"<<setw(12)<<"Nam"<<"So Kim"<<setw(12)<<"Toc Do"<<setw(12)<<endl;
    for (int i = 0;i<n;i++){
        arr[i].Xuat();
    }
}

void NhapDSMayInLaser(MayInLaser *arr,int n){
    for (int i = 0;i<n;i++){
        arr[i].Nhap();
    }
}

void XuatDSMayInLaser(MayInLaser *arr,int n){
    cout<<"Trong Luong"<<setw(12)<<"Hang San Xuat"<<setw(12)<<"Ngay"<<setw(12)<<"Thang"<<setw(12)<<"Nam"<<"Do Phan Giai"<<setw(12)<<"Toc Do"<<setw(12)<<endl;
    for (int i = 0;i<n;i++){
        arr[i].Xuat();
    }
}

int main(){
    MayInKim *array1;
    MayInLaser *array2;
    int n,m;
    do {
        cout<<"Nhap so luong may in kim : ";cin>>n;
    }
    while (1>n);
    array1 = new MayInKim[n];
    NhapDSMayInKim(array1,n);
    XuatDSMayInKim(array1,n);
    cout<<"-------------------"<<endl;
    // 
    do {
        cout<<"Nhap so luong may in laser : ";cin>>m;
    }
    while (1>m);
    array2 = new MayInLaser[m];
    NhapDSMayInLaser(array2,m);
    XuatDSMayInLaser(array2,m);
    return 0;
}