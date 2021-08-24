#include<iostream>
using namespace std;
int fact(int n)
{
    if (n==0||n==1)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
    

}
int fib(int n)
{
    if (n==1)
    {
        return 0;
    }
    if (n==2)
    {
        return 1;
    }
    else
    {
        return fib(n-1)+fib(n-2);
    }
    

}
int main(){
    int n;
    // cout<<"Enter the number to find factorial"<<endl;
    // cin>>n;
    cout<<"Enter the number to find fibonacci series"<<endl;
    cin>>n;
    // cout<<"The factorial of "<<n<<" is "<<fact(n)<<endl;
    for (int i = 1; i <=n; i++)
    {
        cout<<"The fibonacci of "<<n<<" is "<<fib(i)<<" "<<endl;
    }
    
    


    return 0;
}