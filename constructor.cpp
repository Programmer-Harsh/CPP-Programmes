/*A constructor is a special method that is automatically called when an object of a class is created
#include<iostream>
using namespace std;
class myclass
{
    public:
        myclass()
        {
            cout<<"hello i'm constructor...";
        }
};
int main()
{
    myclass obj;
}
#include<iostream>
using  namespace std;   
class car
{
    public:
        string brand;
        string model;
        int year;

        car(string x ,string y, int z)    //constructor...
        {
            brand =x;
            model =y;
            year =z;
        }
};
int main()
{
    car obj1("AUDI","E-TRON",2022);          //assigning values.
    car obj2("RANG ROVER","VELAR",2022);

    cout<<obj1.brand<<" "<<obj1.model<<" "<<obj1.year<<endl;
    cout <<obj2.brand<<" "<<obj2.model<<" "<<obj2.year;
}*/
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
    car obj1("AUDI","E-TRON",2022);          //assigning values.
    car obj2("RANG ROVER","VELAR",2022);

    cout<<obj1.brand<<" "<<obj1.model<<" "<<obj1.year<<endl;
    cout <<obj2.brand<<" "<<obj2.model<<" "<<obj2.year;
}