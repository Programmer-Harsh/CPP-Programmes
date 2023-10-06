#include<iostream>
using namespace std;
int main()
{
    int num,i,temp,count=0;
    cout << "enter the number to check:";
    cin >> num;
    temp=num;
    for(i=1;i<=num/2;i++)
    {
        if(temp%i==0){
            count++;
        }
    }
    if(count==1)
    {
        cout <<"<-----number is prime----->";
    }
    else{
        cout <<"<-----number is composite----->";
    }
}