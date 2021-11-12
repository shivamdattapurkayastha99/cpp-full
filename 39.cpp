#include<iostream>
using namespace std;
// class DerivedC:visibility-mode base1,visibility-mode base2{
//     class body 
// }
class Base1{
    protected:
     int base1int;
    public:
        void set_base1int(int a){
            base1int=a;

        }
};
class Base2{
    protected:
     int base2int;
    public:
        void set_base2int(int a){
            base2int=a;
            
        }
};
class Derived:public Base1,public Base2{
    public:
        void show(){
            cout<<"the value of base 1 is "<<base1int<<endl;
            cout<<"the value of base 2 is "<<base2int<<endl;
            cout<<"the value of sum is "<<base1int+base2int<<endl;

        }
};

int main(){
    Derived shivam;
    shivam.set_base1int(23);
    shivam.set_base2int(25);
    shivam.show();
    
    return 0;
}