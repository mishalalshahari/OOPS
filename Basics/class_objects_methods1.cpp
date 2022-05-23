#include<iostream>
using namespace std;

class Student{ // class of name 'Student'
    
    public:
        
        //data members of class
        
        long roll;
        string name;
        string address;
        
        //member functions of class i.e. methods
        
        void insert(int st_roll, string st_name, string st_address){
            roll=st_roll;
            name=st_name;
            address=st_address;
        };
        
        void disp(){
            cout<<"Roll no.: "<<roll<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Address: "<<address<<endl;
        };
};

int main(){
    Student s1,s2; //object 's1' of class 'Student'
    
    s1.insert(24,"Mishal Al Shahari","Kushinagar");
    s2.insert(33,"Om Prakash","Patna");
    s1.disp();
    s2.disp();
    
    return 0;
}
