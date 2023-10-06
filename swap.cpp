#include <iostream>
using namespace std;
// void swap(int ,int);
// int main()
// {
//     int a,b;
//     cout <<"enter the two numbers::";
//     cin>>a>>b;
//     swap(a,b);
// }
// void swap(int a,int b)
// {
//     int temp;
//     temp=a;
//     a=b;
//     b=temp;
//     cout <<"after swapping the number is -->";
//     cout <<a<<endl<<b;
// }

void swap(int &x,int &y){
    int z;
    z=x;
    x=y;
    y=z;
}
int main()
{
    int a,b;
    cout <<"Enter the value of a::";
    cin>>a;
    cout <<"Enter the value of b::";
    cin>>b;
    swap(a,b);
    cout <<"after swap: "<<endl;
    // cout<<&a<<endl;
    cout <<"the value of a:"<<a<<endl;
    cout <<"the value of b:"<<b<<endl;
}

// void swap(int *x, int *y)                       //call by refrence
// {
//     int temp;
//     temp = *x;
//     *x = *y;
//     *y = temp;
// }
// int main()
// {
//     int a, b;
//     cout << "enter the value of A : ";
//     cin >> a ;
//     cout <<"enter the value of B : ";
//     cin>> b;
//     swap(&a, &b);
//     cout <<"after swapping....."<<endl;
//     cout << " A = " << a << endl;
//     cout << " B = " << b << endl;
// }