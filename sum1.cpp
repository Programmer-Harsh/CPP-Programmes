#include <iostream>
using namespace std;
int main()
{
    int num, i, sum = 0;
    cout << "Enter the  number : ";
    cin >> num;
    for (i = 0; i <= num; i++)
    {
        sum = sum + i;
    }
    cout << "The sum is : " << sum;
}