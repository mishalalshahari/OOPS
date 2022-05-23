#include<iostream>
using namespace std;

class First{ //class of name First 
    
    public:
    
        int x;
        void insert(int num){ // insert is method i.e. functions written inside class is known as method
            x=num;
        };
  
        void disp(){
            cout<<"x="<<x<<endl;
        };
};

int main(){
    
    First f; // f is an object of class 'First'
    
    f.insert(20);
    f.disp();
    
    return 0;
}
