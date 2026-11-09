#include <iostream>
using namespace std;
 class constructor{
        public:
          constructor(){
            cout<<"constructor called"<<endl;
          }
           ~constructor(){
               cout<<"constructor deleted";
           }};
 int main(){
    constructor obj;
    constructor();
    
    return 0;
 }