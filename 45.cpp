#include<iostream>
using namespace std;

int main(){
    int a=4;
    int *ptr=&a;
    cout<<ptr<<endl;
    cout<<*(ptr)<<endl;
    int *p=new int(5);
    float *p1=new float(5.1);
    cout<<*p<<endl;
    cout<<*p1<<endl;
    int *arr=new int[3];
    arr[0]=1;
    *(arr+1)=2;

    arr[2]=3;
    delete[]arr;

    for (int i = 0; i < 3; i++)
    {
        cout<<arr[i]<<endl;

    }
    



    return 0;
}