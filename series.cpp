#include <iostream>
using namespace std;
int main()
{
    int i, a, b = 1, c = 2, num;
    cout << "enter the number :";
    cin >> num;
    cout << "1";
    for (i = 2; i <= num; i++)
    {
        a = b + c;
        cout << "," << a;
        b = a;
    }
}