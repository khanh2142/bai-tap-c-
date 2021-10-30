#include <bits/stdc++.h>
#include <cstring>
#include <iomanip>

using namespace std;

class NhaSanXuat{
    public : 
    char TenNSX[20],DiaChiNSX[30];
    void input();
    void output();
};

void NhaSanXuat::input(){
    cout<<"Nhap ten nha san xuat : ";fflush(stdin);gets(TenNSX);
    cout<<"Nhap dia chi nha san xuat : ";fflush(stdin);gets(DiaChiNSX);
}

void NhaSanXuat::output(){
    cout<<TenNSX<<setw(15)<<DiaChiNSX<<setw(15);
}

class Date{
    public:
    int D,M,Y;
    void input();
    void output();
};

void Date::input(){
    cout<<"Nhap ngay : ";cin>>D;
    cout<<"Nhap thang : ";cin>>M;
    cout<<"Nhap nam : ";cin>>Y;
}

void Date::output(){
    cout<<D<<"/"<<M<<"/"<<Y<<setw(15);
}

class Hang{
    public:
    char TenHang[30];
    NhaSanXuat NSX;
    int DonGia;
    void input();
    void output();
};

void Hang::input(){
    cout<<"Nhap ten hang : ";fflush(stdin);gets(TenHang);
    NSX.input();
    cout<<"Nhap don gia : ";cin>>DonGia;
}

void Hang::output(){
    cout<<TenHang<<setw(15);
    NSX.output();
    cout<<DonGia<<setw(15);
}

class Tivi:public Hang{
    public :
    int KichThuoc;
    Date NgayNhap;
    void input();
    void output();
};

void Tivi::input(){
    Hang::input();
    cout<<"Nhap kich thuoc : ";cin>>KichThuoc;
    NgayNhap.input();
}

void Tivi::output(){
    Hang::output();
    cout<<KichThuoc<<setw(15);
    NgayNhap.output();
    cout<<endl;
}

void NhapDSTivi(Tivi *arr,int n){
    for (int i = 0;i<n;i++){
        cout<<"Nhap san pham thu "<<i+1<<endl;
        arr[i].input();
        cout<<"- - - - - - - - - - -"<<endl;
    }
}

void XuatDS(Tivi *arr,int n){
    bool check = false;
    for (int i = 0;i<n;i++){
        if (strcmp(arr[i].NSX.TenNSX,"LG") == 0) check = true;
    }
    if (check){
        cout<<"Ten Hang"<<setw(15)<<"Ten NSX"<<setw(15)<<"Dia chi"<<setw(15)<<"Don gia"<<setw(15)<<"Kich thuoc"<<setw(15)<<"Ngay nhap"<<endl;
        for (int i = 0;i<n;i++){
            if (strcmp(arr[i].NSX.TenNSX,"LG") == 0) arr[i].output();
        }
    }
    else {
        cout<<"Khong co san pham nao !"<<endl;
    }
}

int main(){
    Tivi *tv;
    int n;
    do {
        cout<<"Nhap so luong TV : ";cin>>n;
    }
    while (1>n);
    tv = new Tivi[n];
    NhapDSTivi(tv,n);
    cout<<"----------------------"<<endl;
    XuatDS(tv,n);
    return 0;
}