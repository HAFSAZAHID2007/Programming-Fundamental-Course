#include <iostream>
using namespace std;
main()
{
    string figure;
    cout << "Enter the figure:";
    cin >> figure;
    if (figure == "square")
    {
        float length, area;
        cout << "length:";
        cin >> length;
        area = length * length;
        cout << "area=" << area;
    }
    if (figure == "rectangle")
    {
        float length, width, area;
        cout << "length:";
        cin >> length;
        cout << "width:";
        cin >> width;
        area = length * width;
        cout << "area=" << area;
    }
    if (figure == "circle")
    {
        float radius, area;
        cout << "radius:";
        cin >> radius;
        area = radius * radius * 3.14;
        cout << "area=" << area;
    }
    if (figure == "triangle")
    {
        float base, height, area;
        cout << "base:";
        cin >> base;
        cout << "height:";
        cin >> height;
        area = 0.5 * base * height;
        cout << "area=" << area;
    }
}
