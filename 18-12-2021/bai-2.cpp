#include <bits/stdc++.h>
#include <cstring>
#include <iomanip>

using namespace std;

class Ngaysinh {
    public :
    int Ngay,Thang,Nam;
    void Nhap();
    void Xuat();
};

void Ngaysinh::Nhap(){
    cout<<"Nhap ngay : ";cin>>Ngay;
    cout<<"Nhap thang : ";cin>>Thang;
    cout<<"Nhap nam : ";cin>>Nam;
}

void Ngaysinh::Xuat(){
    cout<<Ngay<<"/"<<Thang<<"/"<<Nam;
}

class Person{
    public :
    char Hoten[50],Quequan[100];
    Ngaysinh ns;
    void Nhap();
    void Xuat();
};

void Person::Nhap(){
    cout<<"Nhap ho ten : ";fflush(stdin);gets(Hoten);
    ns.Nhap();
    cout<<"Nhap que quan : ";fflush(stdin);gets(Quequan);
}

void Person::Xuat(){
    cout<<Hoten<<setw(15);
    ns.Xuat();
    cout<<setw(15)<<Quequan<<setw(15);
}

class Vandongvien : public Person{
    public :
    char Bomon[50];
    float Thunhap;
    void Nhap();
    void Xuat();
};

void Vandongvien::Nhap(){
    Person::Nhap();
    cout<<"Nhap bo mon : ";fflush(stdin);gets(Bomon);
    cout<<"Nhap thu nhap : ";cin>>Thunhap;
}

void Vandongvien::Xuat(){
    Person::Xuat();
    cout<<Bomon<<setw(15)<<Thunhap<<setw(15);
}

class Cauthu : public Vandongvien{
    public :
    char Clb[50],Vitri[50];
    void Nhap();
    void Xuat();
};

void Cauthu::Nhap(){
    Vandongvien::Nhap();
    cout<<"Nhap clb : ";fflush(stdin);gets(Clb);
    cout<<"Nhap vi tri : ";fflush(stdin);gets(Vitri);
}

void Cauthu::Xuat(){
    Vandongvien::Xuat();
    cout<<Clb<<setw(15)<<Vitri<<endl;
}

void NhapDS(Cauthu *arr,int n){
    if (n>0){
        for (int i =0;i<n;i++){
            cout<<"- - - - - - - - - - - -"<<endl;
            cout<<"Nhap cau thu thu "<<i+1<<endl;
            arr[i].Nhap();
        }
    }
}

void XuatDS(Cauthu *arr,int n){
    if (n>0){
        cout<<"\n\n";
        cout<<"---------------------------- DANH SACH CAU THU ----------------------------"<<endl;
        cout<<"Ho ten "<<setw(15)<<"Ngay sinh "<<setw(15)<<"Que quan "<<setw(15)<<"Bo mon "<<setw(15)<<"Thu nhap "<<setw(15)<<"Clb "<<setw(15)<<"Vi tri "<<endl;
        for (int i =0;i<n;i++){
            if (strcmp(arr[i].Clb,"Ha Noi") == 0){
                arr[i].Xuat();
            }
        }
    }

    float max = 0;

    for (int i =0;i<n;i++){
        if (strcmp(arr[i].Clb,"Ha Noi") == 0){
                if (arr[i].Thunhap > max){
                    max = arr[i].Thunhap;
                }
            }
        }

    
    cout<<"\n\n\n"<<endl;
    cout<<"Danh sach van dong vien co thu nhap lon nhat "<<endl;
    for (int i = 0;i<n;i++){
        if (strcmp(arr[i].Clb,"Ha Noi") == 0){
            if (arr[i].Thunhap == max){
                    arr[i].Xuat();
                }
            }
        }
}

int main(){
    Cauthu *arr;
    int n;
    cout<<"Nhap so luong cau thu : ";cin>>n;
    arr = new Cauthu[n];
    NhapDS(arr,n);
    XuatDS(arr,n);
    return 0;
}
