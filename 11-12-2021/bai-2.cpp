#include <bits/stdc++.h>
#include <cstring>
#include <iomanip>

using namespace std;

class Nguoi {
    public : 
    char HoTen[50],NgaySinh[50],SoDienThoai[50];
    void Nhap();
    void Xuat();
};

void Nguoi::Nhap(){
    cout<<"Nhap ho ten : ";fflush(stdin);gets(HoTen);
    cout<<"Nhap ngay sinh : ";fflush(stdin);gets(NgaySinh);
    cout<<"Nhap so dien thoai : ";fflush(stdin);gets(SoDienThoai);
}

void Nguoi::Xuat(){
    cout<<HoTen<<setw(25)<<NgaySinh<<setw(15)<<SoDienThoai<<setw(15);
}

class SinhVien : public Nguoi{
    public :
    char Khoa[50],Nganh[50];
    float DiemTB;
    void Nhap();
    void Xuat();
};

void SinhVien::Nhap(){
    Nguoi::Nhap();
    cout<<"Nhap khoa : ";fflush(stdin);gets(Khoa);
    cout<<"Nhap nganh : ";fflush(stdin);gets(Nganh);
    cout<<"Nhap diem trung binh : ";cin>>DiemTB;
}

void SinhVien::Xuat(){
    Nguoi::Xuat();
    cout<<Khoa<<setw(15)<<Nganh<<setw(15)<<DiemTB<<endl;
}

void NhapDanhSach(SinhVien arr[1000],int n){
    if (n<=0){
        cout<<"Khong co sinh vien nao !"<<endl;
    }
    else {
        for (int i = 0;i<n;i++){
            cout<<"-----------------------------"<<endl;
            cout<<"Nhap sinh vien thu "<<i+1<<endl;
            arr[i].Nhap();
        }
    }
};

void XuatDanhSach(SinhVien arr[1000],int n){
    if (n>0){
        cout<<"Ho Ten "<<setw(25)<<"Ngay Sinh "<<setw(15)<<"So Dien Thoai "<<setw(15)<<"Khoa "<<setw(15)<<"Nganh "<<setw(15)<<"Diem TB "<<endl;
        for (int i = 0;i<n;i++){
            arr[i].Xuat();
        }
    }
}

void SapXepDanhSach(SinhVien arr[1000],int n){
    if (n>0){
        for (int i = 0;i<n-1;i++){
            for (int j = i+1;j<n;j++){
                if (arr[i].DiemTB>arr[j].DiemTB){
                    SinhVien dummy;
                    dummy = arr[i];
                    arr[i] = arr[j];
                    arr[j] = dummy;
                }
            }
        }
    }
}

void KiemTraDanhSach(SinhVien arr[1000],int n){
    if (n>0){
        int count = 0;
        for (int i = 0;i<n;i++){
            if (arr[i].DiemTB>9){
                count++;
            }
        }
        cout<<"So luong sinh vien diem lon hon 9 : "<<count<<endl;
    }
}


int main(){
    int n;
    SinhVien *arr;
    cout<<"Nhap so luong sinh vien : ";cin>>n;
    arr = new SinhVien[n];
    NhapDanhSach(arr,n);
    cout<<"------------------- DANH SACH ------------------"<<endl;
    XuatDanhSach(arr,n);
    cout<<"\n";
    cout<<"------------------- DANH SACH SAP XEP -------------"<<endl;
    SapXepDanhSach(arr,n);
    XuatDanhSach(arr,n);
    cout<<"\n";
    KiemTraDanhSach(arr,n);
    return 0;
}
