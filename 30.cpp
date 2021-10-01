
#include<iostream>
using namespace std;

class Simple
{
    int data1,data2;


public:
    Simple(int a,int b=9){
        data1=a;
        data2=b;

    }
    void printData();

};
void Simple::printData(){
    cout<<"the value of data1 is "<<data1<<endl;
    cout<<"the value of data2 is "<<data2<<endl;

}
int main(){
    Simple s(1);
    s.printData();

    return 0;
}