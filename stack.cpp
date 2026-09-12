#include <iostream>
using namespace std;
#define MAX 5
class stack{
    int a[MAX], top, x;
    public:
    stack(){
        top=-1;
    }
    void push();
    void pop();
    void display();
};
void stack::push(){
    if(top==MAX-1){
        cout<<"STack overflow"<< endl;
    }
    else{
        cout<<"ENter element to push: ";
        cin>>x;
        top++;
        a[top]=x;
    }
}
void stack::pop(){
    if(top==-1){
        cout<<"Stack Underflow"<<endl;
    }
    else{
        cout<<"Element popped: "<<a[top]<<endl;
        top--;
    }
}
void stack::display(){
    if(top==-1){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Elements in stack: ";
        for(int i=top;i>=0;i--){
            cout<<a[i]<<" ";
        
        }
    }
}
int main(){
    stack s;
    int choice;
    do{
        cout<<"\n1.push 2.pop 3.display 4.exit"<<endl;
        cout<<"enter you choice: ";
        cin>>choice;
        switch(choice){
            case 1: 
            s.push();
            break;
            case 2:
            s.pop();
            break;
            case 3:
            s.display();
            break;
            case 4:
            break;
            default:
            cout<<"invalid choice"<<endl;
        }
    }
    while(choice!=4);
    return 0;
}