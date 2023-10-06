///write a program which take name,registration number,roll number,marks of five suject.And give per,total marks.number of students must be input by user.
#include<iostream>
#include<string>
using namespace std;
class student
{
    private:
    float m1,m2,m3,m4,m5,total,per;
    string name;
    int roll,reg;
    public:
    void input()
    {
        cout<<"Enter your Registration Number : \a ";
        cin>>roll;
        cout<<"Enter your Name : ";            
        cin>>name;
        cout<<"Enter your Roll Number : ";
        cin>>roll;
        cout<<"Enter the Marks one by one : ";
        cin>>m1>>m2>>m3>>m4>>m5;
    }
    void calculate()
    {
        total=m1+m2+m3+m4+m5;
        per=total/5;
    }
    void display()
    {
        cout<<"REGISTRATION NUMBER : "<<reg<<endl;
        cout<<"NAME : "<<name<<endl;
        cout<<"ROLL NUMBER : "<<roll<<endl;
        cout<<"TOTAL : "<<total<<" Marks"<<endl;
        cout<<"PERCENTAGE : "<<per<<"%"<<endl;
    }
};
int main()
{
    int num;
    cout <<"Enter the number students : ";
    cin>>num;
    for(int i=0;i<num;i++)
    {
        student si;
        si.input();
        si.calculate();
        si.display();
        cout<<"\n";
    }
}