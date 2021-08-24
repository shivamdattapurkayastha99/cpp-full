#include<iostream>
using namespace std;
class Employee
{
int id;
static int count;
public:
 void setData(void){
     cout<<"Enter the id"<<endl;

     cin>>id;
    count++;
    
 }
 void getData(void){
     cout<<"The id of the employee is "<<id<<"and this is the employee number "<<count<<endl;

     
 }
 static void getCount(void){
     cout<<"the value of count is "<<count<<endl;

 }
};
int Employee ::count;



int main(){
    Employee shivam;
    shivam.setData();
    shivam.getData();
    Employee::getCount();
    
    Employee datta;
    datta.setData();
    datta.getData();
    Employee::getCount();
    return 0;
}