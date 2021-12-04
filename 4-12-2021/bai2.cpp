#include <bits/stdc++.h>
#include <cstring>
#include <iomanip>

using namespace std;

class School{
    public:
    char Name[50],Date[50];
    void Input();
    void Output();
};

void School::Input(){
    cout<<"Enter School Name : ";fflush(stdin);gets(Name);
    cout<<"Enter School Date : ";fflush(stdin);gets(Date);
}

void School::Output(){
    cout<<"School Name : "<<Name<<endl;
    cout<<"School Date : "<<Date<<endl;
}

class Faculty{
    public :
    char Name[50],Date[50];
    School s;
    void Input();
    void Output();
};

void Faculty::Input(){
    cout<<"Enter Faculty Name : ";fflush(stdin);gets(Name);
    cout<<"Enter Faculty Date : ";fflush(stdin);gets(Date);
    s.Input();
}

void Faculty::Output(){
    cout<<"Faculty Name : "<<Name<<endl;
    cout<<"Faculty Date : "<<Date<<endl;
    s.Output();
}

class Person{
    public:
    char Name[50],Birth[50],Address[50];
    void Input();
    void Output();
    Person(){}
    Person(char *a,char *b,char *c){
        strcpy(Name,a);
        strcpy(Birth,b);
        strcpy(Address,c);
    }   
};


void Person::Input(){
    cout<<"Enter Student Name : ";fflush(stdin);gets(Name);
    cout<<"Enter Student Birth : ";fflush(stdin);gets(Birth);
    cout<<"Enter Student Address : ";fflush(stdin);gets(Address);
}

void Person::Output(){
    cout<<"Student Name : "<<Name<<endl;
    cout<<"Student Birth : "<<Birth<<endl;
    cout<<"Student Address : "<<Address<<endl;
}


class Student:public Person{
    public :
    Faculty f;
    char Classname[50];
    float Score;
    void Input();
    void Output();
    Student(){}
    Student(char *a,float b){
        Person::Input();
        f.Input();
        strcpy(Classname,a);
        Score = b;
    }
};

void Student::Input(){
    Person::Input();
    f.Input();
    cout<<"Enter Classname : ";fflush(stdin);gets(Classname);
    cout<<"Enter Score : ";cin>>Score;
}

void Student::Output(){
    Person::Output();
    f.Output();
    cout<<"Classname : "<<Classname<<endl;
    cout<<"Score : "<<Score<<endl;
}

int main(){
    Student st = Student("pr02",9);
    system("cls"); 
    st.Output();
    return 0;
}
