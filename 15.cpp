#include<iostream>
using namespace std;
int sum(int a,int b)
{
    int c=a+b;
    return c;

}
void swap(int a,int b)
{
    int temp=a;
    a=b;
    b=temp;

}
void swapPointer(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;

}
// int &swapReferenceVar(int &a,int &b)
// {
//     int temp=a;
//     a=b;
//     b=temp;
//     return a;

// }
void swapReferenceVar(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
    

}
int main(){
    int a=4,b=5;
    // cout<<"the sum of a and b is "<<sum(a,b);
    cout<<"the value of a  is "<<a<<" the value of b is "<<b<<endl;
    // swap(a,b);
    // swapPointer(&a,&b);
    swapReferenceVar(a,b);

    
    cout<<"the value of a  is "<<a<<" the value of b is "<<b<<endl;
    return 0;
}