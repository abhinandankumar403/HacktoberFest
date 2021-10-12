#include<iostream>
using namespace std;
class  stackusingarr
{
    int *data;
    int capacity;
    int top;
    public : 
    stackusingarr(int size)
    {
        data = new int[size];
        capacity=size;
        top=0;
    }
    bool isempty()
    {
        return top==0;
    }
    void push(int x)
    {
        if(top==capacity)
        {
            cout<<"Stack full"<<endl;
        }
        else
        {
            data[top]=x;
            top++;
        }
    }
    void pop()
    {
        if(top==0)
        {
            cout<<"empty stack"<<endl;
        }
        else
        {
            top--;
        }
    }
    int stacksize()
    {
        return top;
    }
    int topelt()
    {
        if(this->isempty())
        {
            return INT_MIN;
        }
        return data[top-1];
    }

};
int main()
{
    int choice,size;
    char ch;
    cout<<"enter max size of the stack";
    cin>>size;
    stackusingarr S(size);
    do
    {
    cout<<"1->view size"<<endl<<"2->view top element"<<endl<<"3->Insert element"<<endl<<"4->Delete element"<<" 5->Exit"<<endl<<" enter choice:"<<endl;
    cin>>choice;
    if(choice==1)
    {
        cout<<S.stacksize()<<endl;
    }
    else if(choice ==2)
    {
        cout<<S.topelt()<<endl;
    }
    else if (choice==3)
    {
        cout<<"enter the element to be inserted"<<endl;
        int x;
        cin>>x;
        S.push(x);
    }
    else if (choice==4)
    {
        S.pop();
    }
    else
    {
        break;
    }
    cout<<"do you want to continue"<<endl;
    cin>>ch;
    }
     while (ch=='y' || ch=='Y');
    
    
    return 0;
}