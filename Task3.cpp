#include <iostream>
using namespace std;
void taxcalculator(char type, float price);

float taxamount;
float totalfinalprice;

main()
{
    char type;
    cout << "Enter the vehicle type :" << endl;
    cin >> type;
    float price;
    cout << "Enter the price of vehicle :" << endl;
    cin >> price;
    taxcalculator(type, price);
    cout << "The total final price is :" << totalfinalprice << endl;
}
void taxcalculator(char type, float price)
{

    if (type == 'M')
    {
        taxamount = price * 0.06;
    }
    if (type == 'E')
    {
        taxamount = price * 0.08;
    }
    if (type == 'S')
    {
        taxamount = price * 0.1;
    }
    if (type == 'V')
    {
        taxamount == price * 0.12;
    }
    if (type == 'T')
    {
        taxamount == price * 0.15;
    }
    totalfinalprice = price + taxamount;
}