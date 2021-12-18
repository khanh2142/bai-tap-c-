#include <bits/stdc++.h>
#include <cstring>
#include <iomanip>

using namespace std;

class Diem {
    public : 
    int x,y,z;
    Diem();
    Diem(int a,int b,int c);
    Diem Cong(const Diem&);
    void Nhap();
    void Xuat();
};

Diem::Diem(){
    x = 1;
    y = 1;
    z = 1;
}

Diem::Diem(int a,int b,int c){
    x = a;
    y = b;
    z = c;
}

Diem Diem::Cong(const Diem &m){
    return Diem(m.x + x,m.y +y,m.z + z);
}

void Diem::Nhap(){
    cout<<"Nhap x : ";cin>>x;
    cout<<"Nhap y : ";cin>>y;
    cout<<"Nhap z : ";cin>>z;
}

void Diem::Xuat(){
    cout<<"Toa do("<<x<<","<<y<<","<<z<<")"<<endl;
}

int main(){
    Diem p1,p2,p3;
    p1.Nhap();
    p2.Nhap();
    p1.Cong(p2);
    p3 = p1.Cong(p2);
    p3.Xuat();
    return 0;
}
