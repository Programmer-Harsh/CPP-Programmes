#include<iostream>
using namespace std;
int main()
{
    struct{
        string brand;
        string model;
        int year;
    }mycar1,mycar2;

    mycar1.brand="bmw";
    mycar1.model="x5";
    mycar1.year=2003;

    mycar2.brand="audi";
    mycar2.model="e-tron";
    mycar2.year=2022;

    cout <<mycar1.brand<<" "<<mycar1.model<<" "<<mycar1.year<<"\n";
    cout <<mycar2.brand<<" "<<mycar2.model<<" "<<mycar2.year<<"\n";
 
}