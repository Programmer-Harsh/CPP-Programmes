#include <iostream>
using namespace std;
struct car{
    string brand;
    string model;
    int year;
};
int main()
{
    car mycar1;
    mycar1.brand="volvo";
    mycar1.model="xc-90";
    mycar1.year=2019;
    
    car mycar2;
    mycar2.brand="volvo";
    mycar2.model="xc-90";
    mycar2.year=2019;

    car mycar3;
    mycar3.brand="volvo";
    mycar3.model="xc-90";
    mycar3.year=2019;
    
    car mycar4;
    mycar4.brand="volvo";
    mycar4.model="xc-90";
    mycar4.year=2019;

    cout <<mycar1.brand<<" "<<mycar1.model<<" "<<mycar1.year<<"\n";
    cout <<mycar2.brand<<" "<<mycar2.model<<" "<<mycar2.year<<"\n";
    cout <<mycar3.brand<<" "<<mycar3.model<<" "<<mycar3.year<<"\n";
    cout <<mycar4.brand<<" "<<mycar4.model<<" "<<mycar4.year<<"\n";
}