#include <bits/stdc++.h>
#include <cstring>
#include <iomanip>

using namespace std;

class CaNhan{
    public : 
    char HoTen[50],SoNha[50],MaCongTo[50];
    void Nhap();
    void Xuat();
};

void CaNhan::Nhap(){
    cout<<"Nhap Ho Ten : ";fflush(stdin);gets(HoTen);
    cout<<"Nhap So Nha : ";fflush(stdin);gets(SoNha);
    cout<<"Nhap Ma Cong To : ";fflush(stdin);gets(MaCongTo);
}

void CaNhan::Xuat(){
    cout<<"Ho Ten : "<<HoTen<<endl;
    cout<<"So Nha : "<<SoNha<<endl;
    cout<<"Ma Cong To : "<<MaCongTo<<endl;
}

class BienLai{
    public : 
    CaNhan k;
    int ChiSoCu,ChiSoMoi;
    float TienPhaiTra;
    void Nhap();
    void Xuat();
};

void BienLai::Nhap(){
    k.Nhap();
    cout<<"Nhap Chi So Cu : ";cin>>ChiSoCu;
    cout<<"Nhap Chi So Moi : ";cin>>ChiSoMoi;
}

void BienLai::Xuat(){
    cout<<"-----------THONG TIN BIEN LAI-----------"<<endl;
    k.Xuat();
    cout<<"Chi So Cu"<<setw(15)<<"Chi So Moi"<<setw(15)<<"Thanh Toan"<<endl;
    int kc = ChiSoMoi - ChiSoCu;
    if (kc<50){
        TienPhaiTra = 1250 * kc;
    }
    else if (50<=kc && kc<100){
        TienPhaiTra = 1500 * kc;
    }
    else {
        TienPhaiTra = 2000 * kc;
    }
    cout<<ChiSoCu<<setw(15)<<ChiSoMoi<<setw(15)<<TienPhaiTra<<endl;
    cout<<"----------------------------------------"<<endl;
}

class HoSuDung{
    public :
    BienLai *arr;
    int n;
    void Nhap();
    void Xuat();
};

void HoSuDung::Nhap(){
    cout<<"Nhap so ho su dung dien : ";cin>>n;
    arr = new BienLai[n];
    for (int i =0 ;i<n;i++){
        cout<<"--------------------------"<<endl;
        cout<<"Nhap ho dan thu "<<i+1<<endl;
        arr[i].Nhap();
    }
}

void HoSuDung::Xuat(){
    for (int i = 0;i<n;i++){
        arr[i].Xuat();
    }
}

int main(){
    HoSuDung a;
    a.Nhap();
    a.Xuat();
}
