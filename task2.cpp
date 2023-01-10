#include <iostream>
using namespace std;
float pvolume(float length, float width, float height, string unit);
string unit();

main()
{
    while (true)
    {
        float length;
        cout << "Enter the length :";
        cin >> length;
        float width;
        cout << "Enter the width :";
        cin >> width;
        float height;
        cout << "Enter the height :";
        cin >> height;
        string unit;
        cout << "Enter the unit :";
        cin >> unit;
        float total = pvolume(length, width, height, unit);
        cout << total;
    }
}
float pvolume(float length, float width, float height, string unit)
{
    float volume;
    float total;
    cout << length << width << height << endl;
    volume = (length * width * height) / 3.0;

    cout << "The volume is :" << volume << endl;

    if (unit == "kilometers")
    {
        total = volume / 1000000000.00;
        return total;
    }
    if (unit == "milimeters")
    {
        total = volume * 1000000000.00;

        return total;
    }
    if (unit == "centimeters")
    {
        total = volume * 1000000.00;
        return total;
    }
    return 0;
}
