#include <iostream>
using namespace std;
#define MAX 10
class Arr{
  int size, a[MAX],min,max;
  public:
  void get();
  void put();
  void insert();
  void minimum();
  void maximum();
  void display();
  void rev_arr();
};
void Arr::get(){
  cout<<"Enter the size of array: ";
  cin>>size;
  cout<<"Enter elements of array: ";
    for(int i=0;i<size;i++)
      cin>>a[i];
}
void Arr::put(){
  cout<<"The elements of array are: ";
    for(int i=0;i<size;i++)
      cout<< a[i]<<" ";
  cout<<endl;
}
void Arr:: insert(){
  int p,d;
  cout<< "Entr position and data: ";
    cin>>p>>d;
  cout<<endl;
  for(int j=size-1;j>=p-1;j--)
    a[j+1]=a[j];
  a[p-1]=d;
  size++;
 cout<<"NEW ARRAY IS: ";
  for(int i=0; i<size;i++){
    cout<<a[i]<<" ";
  }
  cout<<endl;
}
void Arr:: minimum(){
  min=a[0];
  for(int i=0;i<size;i++){
    if (a[i]<min){
      min=a[i];
    }
  } cout<<" minimum value is: "<<min<<endl;
}
void Arr:: maximum(){
  max=a[0];
  for(int i=0;i<size;i++){
    if (a[i]>max){
      max=a[i];
    }
  }  cout<<" maximum value is: "<<max<<endl ;
}
void Arr:: rev_arr(){
  cout<<"Reverse of array is : ";
  for(int i=size-1;i>=0;i--){
    cout<< a[i]<< " ";
  }
}
  int main(){
    Arr a;
    a.get();
    a.put();
    a.insert();
    a.maximum();
    a.minimum();
    a.rev_arr();
    
    return 0;
  }

