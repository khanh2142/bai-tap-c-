#include <bits/stdc++.h>
#include <cstring>
#include <iomanip>

using namespace std;

class Date{
    public : 
    int D,M,Y;
    void Nhap();
    void Xuat();
};

void Date::Nhap(){
    cout<<"Nhap Ngay Sinh : ";cin>>D;
    cout<<"Nhap Thang Sinh : ";cin>>M;
    cout<<"Nhap Nam Sinh : ";cin>>Y;
}

void Date::Xuat(){
    cout<<D<<"/"<<M<<"/"<<Y;
}

class Nguoi{
    public :
    char CMND[12],HoTen[50],NgheNghiep[50];
    Date time;
    public :
    void Nhap();
    void Xuat();
};

void Nguoi::Nhap(){
    cout<<"Nhap CMND : ";fflush(stdin);gets(CMND);
    cout<<"Nhap Ho Ten : ";fflush(stdin);gets(HoTen);
    time.Nhap();
    cout<<"Nhap Nghe Nghiep : ";fflush(stdin);gets(NgheNghiep);
}

void Nguoi::Xuat(){
    cout<<CMND<<setw(15)<<HoTen<<setw(15);
    time.Xuat();
    cout<<setw(15)<<NgheNghiep<<endl;
}

class HoDan{
    public: 
    int n;
    char SoNha[50];
    Nguoi* arr;
    public :
    void Nhap();
    void Xuat();
};

void HoDan::Nhap(){
    cout<<"Nhap So Nha : ";fflush(stdin);gets(SoNha);
    cout<<"Nhap so luong thanh vien : ";cin>>n;
    arr = new Nguoi[n];
    for (int i = 0;i<n;i++){
        cout<<"- - - - - - - - - - - - - -"<<endl;
        cout<<"Nhap thanh vien thu "<<i+1<<endl;
        arr[i].Nhap();
    }
}

void HoDan::Xuat(){
    cout<<"So Nha : "<<SoNha<<endl;
    cout<<"CMND"<<setw(15)<<"Ho Ten"<<setw(15)<<"Ngay Sinh"<<setw(15)<<"Nghe Nghiep"<<endl;
    for (int i = 0;i<n;i++){
        arr[i].Xuat();
    }
}

class KhuPho{
    public :
    int m;
    HoDan* arr2;
    public :
    void Nhap();
    void Xuat();
    void TimKiemTen(char s[50]);
    void TimKiemSoNha(char s[50]);
};

void KhuPho::Nhap(){
    cout<<"Nhap so luong ho dan : ";cin>>m;
    arr2 = new HoDan[m];
    for (int i =0;i<m;i++){
        cout<<"- - - - - - - - -"<<endl;
        cout<<"Nhap ho dan thu "<<i+1<<endl;
        arr2[i].Nhap();
    }
}

void KhuPho::Xuat(){
    for (int i =0;i<m;i++){
        cout<<"- - - - - Ho Dan"<<i+1<<"- - - - - - -"<<endl;
        arr2[i].Xuat();
    }
}

void KhuPho::TimKiemTen(char s[50]){
    int count = 0;
    for (int i = 0;i<m;i++){
        for (int j = 0;j<arr2[i].n;j++){
            if (strcmp(s,arr2[i].arr[j].HoTen) == 0){
                count++;
            }
        }
    }
    if (count>0){
        cout<<"Ho Dan"<<setw(15)<<"So Nha"<<setw(15)<<"CMND"<<setw(15)<<"Ho Ten"<<setw(15)<<"Ngay Sinh"<<setw(15)<<"Nghe Nghiep"<<endl;
        for (int i = 0;i<m;i++){
            for (int j = 0;j<arr2[i].n;j++){
                if (strcmp(s,arr2[i].arr[j].HoTen) == 0){
                    cout<<"Ho Dan "<<i+1<<setw(15)<<arr2[i].SoNha<<setw(15)<<arr2[i].arr[j].CMND<<setw(15)<<arr2[i].arr[j].HoTen<<setw(15);
                    arr2[i].arr[j].time.Xuat();
                    cout<<arr2[i].arr[j].NgheNghiep<<endl;
                }
            }
        }
    }
    else {
        cout<<"Khong tim thay ket qua !"<<endl;
    }
}

void KhuPho::TimKiemSoNha(char s[50]){
    int count = 0;
    for (int i = 0;i<m;i++){
        if (strcmp(s,arr2[i].SoNha) == 0){
            count++;
        }
    }
    if (count>0){
        for (int i = 0;i<m;i++){
            if (strcmp(s,arr2[i].SoNha) == 0){
                arr2[i].Xuat();
            }
        }
    }
    else {
        cout<<"Khong tim thay ket qua !"<<endl;
    }
}


int main(){
    KhuPho p;
    p.Nhap();
    int chon;
    do {
        cout<<"- - - - - - - - - - - - -"<<endl;
        cout<<"1.Tim theo ho ten"<<endl;
        cout<<"2.Tim theo so nha"<<endl;
        cout<<"3.Hien thi toan bo"<<endl;
        cout<<"0.Thoat"<<endl;
        cout<<"- - - - - - - - - - - - -"<<endl;
        cout<<"Nhap lua chon : ";cin>>chon;
        switch (chon)
        {
            case 1:{
                char timkiem[50];
                cout<<"Nhap ho ten can tim : ";fflush(stdin);gets(timkiem);
                p.TimKiemTen(timkiem);
                break;
            }

            case 2 : {
                char sonha[50];
                cout<<"Nhap so nha can tim : ";fflush(stdin);gets(sonha);
                p.TimKiemSoNha(sonha);
                break;
            }

            case 3 : {
                p.Xuat();
                break;
            }

            case 0 :{
                break;
            }
        
            default:{
                cout<<"Ban nhap sai ! Vui long nhap lai !"<<endl;
                break;
            }
        }
    }
    while (chon!=0);
    return 0;
}
