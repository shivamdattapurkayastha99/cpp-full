#include<iostream>
using namespace std;
class Base1{
    public:
        void greet(){
            cout<<"how are you"<<endl;

        }
};
class Base2{
    public:
        void greet(){
            cout<<"I am shivam"<<endl;

        }
};
class Derived:public Base1,public Base2{
    int a;
    public:
        void greet(){
            Base2::greet();

        }

};
class B{
    public:
    void say(){
        cout<<"Hello shivam";

    }
};
class D{
    public:
    void say(){
        cout<<"Hello Datta";

    }
};
int main(){
    // Base1 base1obj;
    // Base2 base2obj;
    // base1obj.greet();
    // base2obj.greet();
    // Derived d;
    // d.greet();
    B b;
    b.say();
    D d;
    d.say();
    

    return 0;
}