#include<iostream>
using namespace std;
int main()
{
    string food="pizza";
    string*ptr=&food;

    cout <<food<<endl;
    cout <<ptr<<endl;
    cout <<*ptr<<endl;
    cout <<&food<<endl;

    *ptr="hamburger";

    cout <<*ptr<<endl;
    cout <<food<<endl;
    cout <<ptr<<endl;
}