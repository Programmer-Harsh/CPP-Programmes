#include<iostream>
using namespace std;
int main()
{
    int sum=0,i,num,value=0;
    cout <<"enter your number:";
    cin>>num;
    while(num!=0)
    {
        value=num%10;
        sum=sum+value;
        num=num/10;
    }
    cout<<"the adding of all digits is:"<<sum;

}