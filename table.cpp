#include<iostream>
using namespace std;
int main()
{
    int i,num,num2;
    cout << "Enter the number:";
    cin >> num;
    for(i=1;i<=10;i++)
    {
        num2 = num * i; 
        cout << num<<" * "<<i<<" = "<<num2<<endl;
    }
}