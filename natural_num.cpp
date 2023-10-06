#include<iostream>
using namespace std;
int main()
{
    int i,num=0;

    for(i=1;i<=10;i++)
    {
        cout << i<<endl;
        num=num+i;
    }

    cout <<"the total is:"<<num;
}