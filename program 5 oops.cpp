#include<iostream>
using namespace std;

class DB;
class DM{
    int m,cm;
    public:
    void get();
    void display();
    friend DM sum1(DM &,DB &);
    friend DB sum2(DM &,DB &);
};

void DM:: get(){
    cout<<"Enter distace in metre and centimetre : "<<endl;
    cin>>m;
    cin>>cm;
}
void DM:: display(){
    cout<<"Distance in m and cm : "<<m<<" "<<cm<<endl;
}

class DB{
    int feet,inches;
    public:
    void get();
    void display();
    friend DM sum1(DM &,DB &);
    friend DB sum2(DM &,DB &);
};
void DB:: get(){
    cout<<"Enter distace in feet and inches : "<<endl;
    cin>>feet;
    cin>>inches;
}
void DB:: display(){
    cout<<"Distance in feet and inches: "<<feet<<" "<<inches<<endl;
}

DM sum1(DM &dm,DB &db){
    DM s1;
    s1.m=dm.m+((db.feet)*0.305);
    s1.cm=dm.cm+((db.inches)*2.54);
    return s1;
}

DB sum2(DM &dm,DB &db){
    DB s2;
    s2.feet=((dm.m)*3.280)+db.feet;
    s2.inches=((dm.cm)*0.394)+db.inches;
    return s2;
}

int main(){
    DM dm,s1;
    DB db,s2;
    
    int c;
    cout<<"Enter the values : "<<endl;
    dm.get();
    db.get();
    dm.display();
    db.display();

    cout<<"Enter 1 to print result in m and cm."<<endl;
    cout<<"Enter 2 to print result in feet and inches."<<endl;
    cin>>c;

    switch(c){
        case 1: s1=sum1(dm,db);
        s1.display();
        break;

        case 2: s2=sum2(dm,db);
        s2.display();
        break;
    }

    return 0;
}
