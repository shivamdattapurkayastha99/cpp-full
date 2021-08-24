#include<iostream>
using namespace std;
int add(float a,int b)
{
    return a+b;
}
int add(int a,int b,int c)
{
    return a+b+c;
    
}
int volume(double r,int h)
{
    return 3.14*r*r*h;

}
int volume(int a)
{
    return a*a*a;
    
}
int volume(int l,int b,int h)
{
    return l*b*h;
    
}
int main(){
    // cout<<"The sum of 3 and 6 is "<<add(3,6)<<endl;
    // cout<<"The sum of 3,5 and 6 is "<<add(3,5,6)<<endl;
    cout<<"The volume of cylinder of 3 and 6 is "<<volume(3,6)<<endl;
    cout<<"The volume of cuboid of 3,5 and 6 is "<<volume(3,5,6)<<endl;
    cout<<"The volume of cube of 3,3 and 3 is "<<volume(3)<<endl;

    return 0;
}