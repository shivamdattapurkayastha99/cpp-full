#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int age;
    cout<<"Enter your age"<<endl;
    cin>>age;
    // if (age<18&&age>0)
    // {
    //     cout<<"you cannot come to my party"<<endl;
    // }
    // else if (age==18)
    // {
    //     cout<<"you are a kid"<<endl;
    // }
    // else{
    //     cout<<"you can come to my party"<<endl;
    // }
    switch (age)
    {
    case 18:
        cout<<"you are 18"<<endl;

        break;
    case 22:
        cout<<"you are 22"<<endl;
        
        break;
    case 2:
        cout<<"you are 2"<<endl;
        
        break;
    default:
        break;
    }
    return 0;
}
