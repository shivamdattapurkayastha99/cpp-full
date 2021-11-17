#include<iostream>
using namespace std;
#include<cmath>

class SimpleCalculator
{
    int a,b;

    public:
        void getData(){
            cout<<"Enter the value of a "<<endl;
            cin>>a;

            cout<<"Enter value of b"<<endl;
            cin>>b;


        }
        void performOperations(){
            cout<<"the value of a + b is "<<a+b<<endl;
            cout<<"the value of a and b is "<<a/b<<endl;          
            cout<<"the value of a and b is "<<a*b<<endl;



        }
};
class ScientificCalculator{
    int a,b;
    public:
        void getData(){
            cout<<"Enter the value of a "<<endl;
            cin>>a;

            cout<<"Enter value of b"<<endl;
            cin>>b;


        }
        void performOperations(){
            cout<<"the value of cos(a) is "<<cos(a)<<endl;
            cout<<"the value of sin(a) is "<<sin(a)<<endl;
            cout<<"the value of a and b is "<<exp(a)<<endl;
            


        }
};
int main(){
    SimpleCalculator calc;
    calc.getData();
    calc.performOperations();
    ScientificCalculator calc2;
    calc2.getData();
    calc2.performOperations();


    return 0;
}