#include<iostream>
using namespace std;
struct employee
{
    int eId;
    char favChar;
    float salary;

};
union money
{
    int rice;
    char car;
    float pounds;

};
int main(){
    // struct employee shivam;
    // shivam.eId=1;
    // shivam.favChar='c';
    // shivam.salary=12000000000;
    // cout<<"the value is "<<shivam.eId<<endl;
    // cout<<"the value is "<<shivam.favChar<<endl;
    // cout<<"the value is "<<shivam.salary<<endl;

    // union money shivam1;
    // shivam1.rice=10;
    // shivam1.car='a';
    // shivam1.pounds=14000000000;
    // cout<<"the value is "<<shivam1.rice<<endl;
    // cout<<"the value is "<<shivam1.car<<endl;
    // cout<<"the value is "<<shivam1.pounds<<endl;
    enum Meal{breakfast,lunch,dinner};
    // cout<<breakfast<<endl;
    // cout<<lunch<<endl;
    // cout<<dinner<<endl;
    Meal m1=breakfast;
    cout<<m1<<endl;
    
    return 0;
}