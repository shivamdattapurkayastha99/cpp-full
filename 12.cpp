#include<iostream>
using namespace std;
int main(){
    int marks[4]={23,45,56,89};
    int mathMarks[4];
    mathMarks[0]=75;
    mathMarks[1]=76;
    mathMarks[2]=77;
    mathMarks[3]=78;
    // cout<<mathMarks[0]<<endl;
    // cout<<mathMarks[1]<<endl;
    // cout<<mathMarks[2]<<endl;
    // cout<<mathMarks[3]<<endl;
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;
    // for (int i = 0; i < 4; i++)
    // {
    //     cout<<marks[i]<<endl;
    // }
    int *p=marks;
    cout<<*(p++)<<endl;
    cout<<*(++p)<<endl;

    // cout<<"The value of marks[0] is "<<*p<<endl;
    // cout<<"The value of marks[1] is "<<*(p+1)<<endl;
    // cout<<"The value of marks[2] is "<<*(p+2)<<endl;
    // cout<<"The value of marks[3] is "<<*(p+3)<<endl;


    return 0;
}