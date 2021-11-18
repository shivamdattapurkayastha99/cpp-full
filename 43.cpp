#include<iostream>
using namespace std;
class Base
{
    int data;

public:
    Base(int i){
        data=i;
        cout<<"Constructor"<<endl;


    }
    void printDataBase1(void){
        cout<<"value of data is "<<data<<endl;

    }
};
class Base2
{
    int data2;

public:
    Base2(int i){
        data2=i;
        cout<<"Constructor"<<endl;


    }
    void printDataBase2(void){
        cout<<"value of data is "<<data2<<endl;

    }
};
class Derived:public Base,public Base2
{
    int derived1,derived2;

public:
    Derived(int a,int b,int c,int d):Base(a),Base2(b){
        derived1=c;
        derived2=d;
        
    }
    void printDataDerived(void){
        cout<<"Derived class constructor "<<derived1<<endl;
        cout<<"Derived class constructor "<<derived2<<endl;
        }

};

int main(){
    Derived shivam(1,2,3,4);
    shivam.printDataBase1();
    
    return 0;
}
