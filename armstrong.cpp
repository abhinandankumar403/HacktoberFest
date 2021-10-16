#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,r,m;
    int sum=0;
    cout<<"Enter any number"<<endl;
    cin>>n;
    m=n;
        while(n!=0)
        {
            r=n%10;
            n=n/10;
            sum+=(r*r*r);
           cout<<r<<endl;
           
        }
        
    cout<<"Sum ="<<sum<<endl;
    if(sum==m)
    {
    cout<<"a";
    }   
    else{
    cout<<"na";
    }
}
