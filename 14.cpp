#include<iostream>
using namespace std;
int sum(int a,int b){
    int c=a+b;
    return c;


}
void g()
{
    cout<<"Hello World";

}
int main(){
    int num1,num2;
    cout<<"Enter the first number"<<endl;
    cin>>num1;
    cout<<"Enter the second number"<<endl;
    cin>>num2;
    cout<<"Sum is "<<sum(num1,num2)<<endl;
    g();
    
    return 0;
}