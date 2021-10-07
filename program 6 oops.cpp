#include<iostream>
using namespace std;
class Rational{
    float num,denom;
    public:
        Rational()
        {

        }
        Rational(float num, float denom)
        {
            if(denom==0)
            {
                cout << "Denominator can't be zero";
                exit(1);
            }
            this->num = num;
            this->denom = denom;
        }
        Rational reduce()
        {
            Rational temp;
            int h = hcf(num, denom);
            temp.num = num/h;
            temp.denom = denom/h;
            return temp;
        }
        Rational operator +(Rational r)
        {
            Rational ans;
            ans.denom = denom*r.denom;
            ans.num = num*r.denom+r.num*denom;
            return ans;
        }
        int hcf(int a, int b);
        friend istream& operator >>(istream& s, Rational& r);
        friend ostream& operator <<(ostream& s, Rational& r);
};
int Rational::hcf(int a, int b)
{
    int r;
    r = a%b;
    while(r)
    {
        a=b;
        b=r;
        r=a%b;
    }
    return b;
}
istream& operator >>(istream& s,Rational& r)
{
    int a,b;
    char c;
    s>>a>>c>>b;
    if(c!='/')
    {
    cout<<"use of invalid notation";
    exit(0);
    }
    if(b==0)
    {
    cout<<"denominator can't be zero.";
    exit(1);
    }
    r.num=a;
    r.denom=b;
    return s;
}
ostream& operator <<(ostream& s,Rational& r)
{
    if(r.denom==1)
    s<<r.num;
    else
    {
    if(r.denom==-1)
    s<<-r.num;
    else
    s<<r.num<<'/'<<r.denom;
    }
    return s;
}
int main()
{
    Rational r1,r2,r3;
    cout<<"enter r1:";
    cin>>r1;
    cout<<"enter r2:";
    cin>>r2;
    r3=r1+r2; 
    cout<<r1<<" + "<<r2<<" = "<<r3<<" = ";
    r3 = r3.reduce();
    cout<<r3<<endl;
    return 0;
}
