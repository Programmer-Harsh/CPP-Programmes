#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str1;
    cout <<"write your name : ";
    getline(cin,str1);
    cout<<"hello "<<str1<<"\n";
    cout<<"write your favourate colour : ";
    getline(cin,str1);
    cout<<"i like "<<str1<<" to much!\n";
}


// {
//     string name,course;
//     int reg;
//     cout<<"Enter your name : ";
//     cin>>name;
//     cout<<"Course : ";
//     cin>>course;
//     cout<<"Registration number : ";
//     cin>>reg;
//     cout<<"REGISTRATION NUMBER : "<<reg<<endl;
//     cout<<"NAME : "<<name<<endl;
//     cout<<"COURSE : "<<course;
// }