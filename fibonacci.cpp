#include <iostream>
using namespace std;
int main()
{
    int i,n1=0,n2=1,n3,n;
    cout << "Enter the number of terms:";
    cin>>n;
    cout << "\t\t<------According to your input the fibonacci series is----->"<<endl;
    cout <<n1<<",";
    cout<<n2;

    for (i = 2; i <= n; i++)
    {
        n3=n1+n2;
        cout <<","<<n3;
        n1=n2;
        n2=n3;
    }
}