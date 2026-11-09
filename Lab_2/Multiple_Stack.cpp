#include<iostream>
#define MAX 6
using namespace std;
class mul_stack{
    int a[MAX],top1,top2,x;
    public:
    mul_stack(){
        top1=-1;
        top2=MAX;
    }
    void push1();
    void push2();
    void pop1();
    void pop2();
    void display();
};
void mul_stack::push1(){
    if(top1==top2-1){
        cout<<"Stack overflow"<<endl;
    }
    else
    {
        cout<<"Enter elements to push in stack1: ";
        cin>>x;
        top1++;
        a[top1]=x;
    }
}
void mul_stack::push2(){
  if(top2==top1+1)
    cout<<"Stack overflow"<<endl;
  else{
    cout<<"Enter elements to push in stack2: ";
    cin>>x;
    top2--;
    a[top2]=x;
  }
}
void mul_stack ::pop1(){
  if(top1==-1)
    cout<<"Stack underflow"<<endl;
  else{
   x=a[top1];
    cout<<"Element is poped "<<x<<endl;
    top1--;
  }
}
void mul_stack ::pop2(){
  if(top2==MAX)
    cout<<"Stack underflow"<<endl;
  else{
    x=a[top2];
    cout<<"Element is poped "<<x;
    top2++;
  }
}
void mul_stack::display()
{
    cout<<"Elements of stack 1 are:"<<endl;
    for(int i=top1; i>=0; i--)
    {
        cout<<a[i]<<" ";
    }
cout<<endl;
cout<<"Elements of stack 2 are:"<<endl;
    for(int i=top2; i<MAX; i++)
    {
        cout<<a[i]<<" ";
    }

    cout<<endl;
}
int main(){
  mul_stack m;
  m.push1();
  m.push2();
  m.display();
  m.pop1();
  m.pop2();
   return 0;
}
