#include<iostream>
using namespace std;
double power(double n,int p=2);
double power(double n,int p);
main(){
	double a;int b;int c;
	cout<<"Enter the number "<<endl;
	cin>>a;
	cout<<"do you want to enter the power,if yes type 1 and if no type 2"<<endl;
	cin>>c;
	if(c==1){
		cout<<"Enter the power"<<endl;
	    cin>>b;
	    cout<<power(a,b);
	}
	else cout <<power(a);
}

double power(double n, int p){
	double pd=1.0;
	while(p>0){
		pd=pd*n;
		p--;
	}
	return pd;
}
