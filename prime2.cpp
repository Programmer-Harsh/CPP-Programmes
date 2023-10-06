#include <iostream>
using namespace std;
int main()
{
    int l, u, count;
    cout << "Enter the lower limit : ";
    cin >> l;
    cout << "Enter the upper limit : ";
    cin >> u;
    if (l > u)
    {
        cout << "Lower limit must be smaller than upper limit....";
    }
    else if (l == u)
    {
        cout << "Don't enter the same value to both limits.....";
    }
    else
    {
        cout << "Prime numbers b/w " << l << " and " << u << " is -->" << endl;
        for (int i = l; i <= u; i++)
        {
            if (i == 0 || i == 1)
                continue;
            count = 1;
            for (int j = 2; j <= i / 2; j++)
            {
                if (i % j == 0)
                {
                    count = 0;
                    break;
                }
            }
            if (count == 1)
            {
                cout << i << ",";
            }
        }
        cout << " \b\b ";
    }
}