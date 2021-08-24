#include<iostream>
using namespace std;
class Employee{
    int id;
    int salary;
    public:
    void setId(void){
        salary=122;

        cout<<"Enter Id of employee"<<endl;
        cin>>id;

    }
    void getId(){
        
        cout<<"the id of this employee is "<<id<<endl;

    }
};
int main(){
    // Employee shivam,datta;
    // shivam.setId();
    // shivam.getId();
    Employee fb[2];
    for (int i = 0; i < 2; i++)
    {
        fb[i].setId();
        fb[i].getId();
        
    }
    

    return 0;
}