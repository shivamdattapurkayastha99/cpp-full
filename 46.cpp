#include<iostream>
using namespace std;
class Complex
{
    int real,img;
public:
    void getData(){
        cout<<real<<endl;
        cout<<img<<endl;

    }
    void setData(int a,int b){
        real=a;
        img=b;

    }
};



int main(){
    Complex c1;
    c1.setData(1,54);
    c1.getData();
    Complex c2;
    Complex *ptr=&c1;
    (*ptr).setData(1,54);
    (*ptr).getData();


    return 0;
}