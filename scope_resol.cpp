#include<iostream>
using namespace std;
class car
{
    public:
    int speed(int maxspeed);
};
int car::speed(int maxspeed)              //scope resolution operator..
{
    return maxspeed;
}
int main()
{
    car c1;
    cout<<"MAX SPEED IS : ";
    cout<<c1.speed(200);
}