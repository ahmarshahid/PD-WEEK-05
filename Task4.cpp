#include <iostream>
using namespace std;

main()
{
    float hours;
    float days;
    float workers;
    float totalwork;
    float req_days;
    float totalhours;
    float newhours;
    cout << "Enter the no of hours :";
    cin >> hours;
    cout << "Enter the no of days :";
    cin >> days;
    cout << "Enter the no of workers :";
    cin >> workers;

    req_days = days - (0.1 * days);
    totalwork = req_days * 10;
    totalhours = totalwork * workers;
    if (totalhours > hours)
    {
        newhours = totalhours - hours;
        cout << "YES!" << newhours << " hours are left" << endl;
    }
    if (totalhours < hours)
    {
        newhours = hours - totalhours;
        cout << "Not enough time!" << newhours << "hours are required" << endl;
    }
}
