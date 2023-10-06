#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,i,j;
    cout <<"Enter the value of a : ";
    cin>>a;
    cout <<"Enter the value of b : ";
    cin>>b;

    if(a==0||b==0)
    {
        cout <<"The H.C.F. is : 0 ";
    }
    else if(a==1||b==1)
    {
        cout <<"The H.C.F. is : 1 ";
    }
    else
    {
    cout <<"\tThe common factors in "<<a<<"  is : "<<" 1 ";
    for(i=2;i<=a;i++)
    {
        if(a%i==0)
        {
            cout <<" * "<<i;
        }
    }
    cout <<"\n";
    cout <<"\tThe common factors in "<<b<<" is :  1 ";
    for (j=2;j<=b;j++)
    {
        if(b%j==0)
        {
            cout <<" * "<<j;
        }
    }
    cout <<"\n";
    for(i=2;i<=a||i<=b;i++)
    {
        if (a%i==0&&b%i==0)
        {
            c=i;
        }
    }

    cout <<"\tHence,the most common factor i.e. H.C.F. is : "<<c<<endl;
    }

}