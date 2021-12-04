#include <bits/stdc++.h>
#include <cstring>
#include <iomanip>

using namespace std;

class Khoa{
    public : 
    char MaKhoa[50],TenKhoa[50],TruongKhoa[50];
    void Nhap();
    void Xuat();
};

void Khoa::Nhap(){
    cout<<"Nhap Ma Khoa : ";fflush(stdin);gets(MaKhoa);
    cout<<"Nhap Ten Khoa : ";fflush(stdin);gets(TenKhoa);
    cout<<"Nhap Truong Khoa : ";fflush(stdin);gets(TruongKhoa);
}

void Khoa::Xuat(){
    cout<<MaKhoa<<setw(15)<<TenKhoa<<setw(15)<<TruongKhoa<<endl;
}

class Date{
    public : 
    int D,M,Y;
    void Nhap();
    void Xuat();
};

void Date::Nhap(){
    cout<<"Nhap Ngay Thanh Lap : ";cin>>D;
    cout<<"Nhap Thang Thanh Lap : ";cin>>M;
    cout<<"Nhap Nam Thanh Lap : ";cin>>Y;
}

void Date::Xuat(){
    cout<<D<<"/"<<M<<"/"<<Y<<endl;
}

class Ban{
    public : 
    char MaBan[50],TenBan[50];
    Date NgayThanhLap;
    void Nhap();
    void Xuat();
};

void Ban::Nhap(){
    cout<<"Nhap Ma Ban : ";fflush(stdin);gets(MaBan);
    cout<<"Nhap Ten Ban : ";fflush(stdin);gets(TenBan);
    NgayThanhLap.Nhap();
}

void Ban::Xuat(){
    cout<<MaBan<<setw(15)<<TenBan<<setw(15);
    NgayThanhLap.Xuat();
}

class TruongDH{
    public :
    Khoa* arr1;
    int n;
    Ban* arr2;
    int m;
    void Nhap();
    void Xuat();
};

void TruongDH::Nhap(){
    cout<<"Nhap so luong khoa : ";cin>>n;
    if (n>0){
        arr1 = new Khoa[n];
        for (int i = 0;i<n;i++){
            cout<<"- - - - - - - - - - - - -"<<endl;
            cout<<"Nhap thong tin khoa thu "<<i+1<<endl;
            arr1[i].Nhap();
        }
    }
    cout<<"- - - - - - - - - - - - -"<<endl;
    cout<<"Nhap so luong ban : ";cin>>m;
    if (n>0){
        arr2 = new Ban[m];
        for (int i = 0;i<m;i++){
            cout<<"- - - - - - - - - - - - -"<<endl;
            cout<<"Nhap thong tin ban thu "<<i+1<<endl;
            arr2[i].Nhap();
        }
    }
}

void TruongDH::Xuat(){
    if (n>0){
        cout<<"- - - - - - - - - - - - -"<<endl;
        cout<<"Ma Khoa"<<setw(15)<<"Ten Khoa"<<setw(15)<<"Truong Khoa"<<endl;
        for (int i = 0;i<n;i++){
            arr1[i].Xuat();
        }
    }
    if (m>0){
        cout<<"- - - - - - - - - - - - -"<<endl;
        cout<<"Ma Ban"<<setw(15)<<"Ten Ban"<<setw(15)<<"Ngay Thanh Lap"<<endl;
        for (int i = 0;i<m;i++){
            arr2[i].Xuat();
        }
    }

}

class Truong{
    public :
    char MaTruong[50],TenTruong[50],DiaChi[50];
    TruongDH dh;
    void Nhap();
    void Xuat();
};

void Truong::Nhap(){
    cout<<"Nhap Ma Truong : ";fflush(stdin);gets(MaTruong);
    cout<<"Nhap Ten Truong : ";fflush(stdin);gets(TenTruong);
    cout<<"Nhap Dia Chi : ";fflush(stdin);gets(DiaChi);
    dh.Nhap();
}

void Truong::Xuat(){
    cout<<"Ma Truong : "<<MaTruong<<endl;
    cout<<"Ten Truong : "<<TenTruong<<endl;
    cout<<"Dia Chi : "<<DiaChi<<endl;
    dh.Xuat();
}

int main(){
    Truong p;
    p.Nhap();
    p.Xuat();
    return 0;
}
