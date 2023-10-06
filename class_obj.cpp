#include<iostream>
#include<string>
using namespace std;
class car{                                      //class
    public:
    string brand;
    string model;
    int year;
};
int main()
{
    car carObj1;                           //object1
    carObj1.brand="volvo";
    carObj1.model="xc-60";
    carObj1.year=2019;

    car carObj2;                           //object2
    carObj2.brand="volvo";
    carObj2.model="xc-60";
    carObj2.year=2019;

    car carObj3;                           //object3
    carObj3.brand="volvo";
    carObj3.model="xc-60";
    carObj3.year=2019;

    cout <<carObj1.brand<<" "<<carObj1.model<<" "<<carObj1.year<<"\n";
    cout <<carObj2.brand<<" "<<carObj2.model<<" "<<carObj2.year<<"\n";
    cout <<carObj3.brand<<" "<<carObj3.model<<" "<<carObj3.year<<"\n";
}