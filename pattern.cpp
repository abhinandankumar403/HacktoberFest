#include <iostream>

using namespace std;

int main(){
    int rows, col;
    cout<<"enter the no. of rows:\n";
    cin>>rows;
    cout<<"enter the no. of col :\n";
    cin>>col;

    for(int i=1;i<=rows; i++){
        for (int j=1; j<=col;j++){
            if (i==1 || i==rows || j== 1|| j==col){
                cout<<"*";
            } else {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}