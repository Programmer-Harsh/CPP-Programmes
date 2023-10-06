#include <iostream>
using namespace std;
int main()
{
    int years, months, days, weeks, weeks1, years1, months1;

    cout << "Enter the number of days::";
    cin >> days;

    weeks = days / 7;
    weeks1 = days % 7;
    years = days / 365;
    years1 = days % 365;
    months = days / 30;
    months1 = days % 30;

    cout << "According to your input there are --->" << endl;
    cout << weeks << " weeks " << weeks1 << " days " << endl;
    cout << months << " months " << months1 << " days " << endl;
    cout << years << " years " << years1 << " days \t in " << days << "days" << endl;
}
