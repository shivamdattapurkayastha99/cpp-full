#include<iostream>
using namespace std;
int glo=6;

void sum(){
    int a;
    cout<<"The value of glo inside sum() is "<<glo;

}
int main(int argc, char const *argv[])
{
    int a=4;
    int b=5;
    float pi=3.14;
    char c='u';
    int glo=9;
    bool is_true=true;

    sum();

    // cout<<"\nhi this is shivam the value of a is "<<a<<"the value of b is \n"<<b;
    // cout<<"the value of pi is "<<pi;
    // cout<<"\nthe value of c is "<<c;
    // cout<<"\nthe value of glo is "<<glo;
    // sum();
    cout<<"\nthe value of is_true is "<<is_true;
    return 0;
}
