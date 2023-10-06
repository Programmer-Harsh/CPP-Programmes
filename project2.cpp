#include<iostream>
using  namespace std;   
class car
{
    public:
    string brand;
    string model;
    int year;
    int get()
    {
        cout<<"Enter the brand name : ";
        cin>>brand;
        cout<<"Enter the model name : ";
        cin>>model;
        cout<<"Enter the year : ";
        cin>>year;
    }
    int display()
    {
        cout<<"BRAND : "<<brand<<endl;
        cout<<"MODEL : "<<model<<endl;
        cout<<"YEAR : "<<year<<endl;
    }
};
int main()
{
    int num;
    cout<<"Enter the number of cars : ";
    cin>>num;
    for(int j=0;j<num;j++)
    {
        car obj[j];
        obj[j].get();
    }
    for(int i=0;i<num;i++)
    {
        car obj[i];
        cout<<"BRAND : "<<obj[i].brand<<"MAODEL : "<<obj[i].model<<"YEAR : "<<obj[i].year<<endl;
    }
}