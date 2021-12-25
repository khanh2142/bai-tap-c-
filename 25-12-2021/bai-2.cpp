#include <bits/stdc++.h>
#include <cstring>
#include <iomanip>

using namespace std;

class SoPhuc {
    public : 
    double a,b;
    void Nhap();
    void Xuat();
    SoPhuc(){
        a = 1;
        b = 1;
    }
    SoPhuc(double x,double y){
        a = x;
        b = y;
    }
    SoPhuc operator+(SoPhuc k){
        SoPhuc dummy;
        dummy.a = a + k.a;
        dummy.b = b + k.b;
        return dummy;
    }
};

void SoPhuc::Nhap(){
    cout<<"Nhap phan thuc : ";cin>>a;
    cout<<"Nhap phan ao : ";cin>>b;
}

void SoPhuc::Xuat(){
    cout<<"So Phuc : "<<a<<"+"<<b<<"i"<<endl;
}

int main(){
    SoPhuc p = SoPhuc(6,9);
    SoPhuc t,ketqua;
    t.Nhap();
    ketqua = p+t;
    ketqua.Xuat();
    return 0;
}
