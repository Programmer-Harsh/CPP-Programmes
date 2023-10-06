#include<iostream>
using namespace std;
inline int largest(int a,int b)
{
    int r;
    r=(a>b)?a:b;
    return(r);
}
int main()
{
    int a,b;
    cout<<"Enter the first number : ";
    cin>>a;
    cout<<"Enter the second number : ";
    cin>>b;
    if(a==b)
    {
        cout<<"Both are equal....";
    }
    else
    {
        cout<<"Largest number in [ "<<a<<","<<b<<" ] is : "<<largest(a,b)<<"\n";
    }
}