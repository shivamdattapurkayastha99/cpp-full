
#include<iostream>
using namespace std;
class Complex
{
    int a,b;

public:
    Complex(int,int);
    void printNumber(){
        cout<<a<<" + "<<b<<"i"<<endl;

    }

};
Complex::Complex(int x,int y){
    a=x;
    b=y;


}
int main(){
    Complex c1(4,6);
    c1.printNumber();
    
    return 0;
}