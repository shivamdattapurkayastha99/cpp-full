#include<iostream>
using namespace std;
int product(int a,int b)
{
    return a*b;

}
float moneyReceived(int currentMoney,float factor=1.04)
{
    return currentMoney*factor;

}
int main(){
    // int a,b;
    // cout<<"Enter ther value of a and b";
    // cin>>a>>b;
    
    // cout<<"The product of a and b is "<<product(a,b);
    int money=100000;

    cout<<"if you have "<<money<<" Rs in your bank account,you will receive "<<moneyReceived(money)<<"Rs after 1 year";
    cout<<"For VIP:if you have "<<money<<" Rs in your bank account,you will receive "<<moneyReceived(money,1.1)<<"Rs after 1 year";
    
    return 0;
}