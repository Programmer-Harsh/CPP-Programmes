#include<iostream>
using  namespace std;   
class car
{
    public:
        string brand;
        string model;
        int year;

        car(string x ,string y, int z);         //constructor...
};
car::car(string x,string y,int z)
{
    brand =x;
    model =y;
    year=z;
}
int main()
{
    int num,num3[num];
    cout<<"Enter the number of cars : ";
    cin>>num;
    string num2[num],num1[num];
    for(int i=0;i<num;i++)
    {
    cout<<"Enter brand : ";
    cin>>num1[i];
    cout<<"Enter model : ";
    cin>>num2[i];
    cout<<"Enter the year : ";
    cin>>num3[i];
    }
    for(int i=0;i<num;i++)
    {
    car obj[i](num1[i],num2[i],num3[i]);
    cout<<"the entered cars is........."<<endl;
    cout<<obj[i].brand<<" "<<obj[i].model<<" "<<obj[i].year;
    }
    // car obj1("AUDI","E-TRON",2022);          //assigning values.
    // car obj2("RANG ROVER","VELAR",2022);

    // cout<<obj1.brand<<" "<<obj1.model<<" "<<obj1.year<<endl;
    // cout <<obj2.brand<<" "<<obj2.model<<" "<<obj2.year;
}