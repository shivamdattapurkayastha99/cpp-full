#include<iostream>
using namespace std;
class Employee{
    // int id;
    // float salary;
    public:
    float salary;
    int id;
    Employee(int inpid){
        id=inpid;
        salary=34;

    }
    Employee(){}

};
// class {{derived-class-name}}:{{visibility-mode}} {{base-class-name }}
// {
//     memners/methods/etc
// }
// default visibilty mode is private
// Private visibility mode :public members of base class becomes private members of derived class
// Private members of base class cant be inherited
class Programmer:Employee{
    public:
    Programmer(int inpid){
        id=inpid;
        salary=14.0;


    }
    int languageCode=9;
    void getData(){
        cout<<id<<endl;

    }
};

int main(){
    Employee shivam(1);
    // cout<<shivam.salary;
    Programmer datta(1);
    // cout<<datta.languageCode;
    datta.getData();
    
    return 0;
}