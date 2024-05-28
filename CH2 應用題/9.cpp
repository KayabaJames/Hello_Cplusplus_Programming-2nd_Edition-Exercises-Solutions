#include <bits/stdc++.h>
#define PI 3.14159

using namespace std;

int main()
{
    double radius, height, volume, surface_area;

    cin >> radius >> height;
    volume = radius * radius * PI * height;
    surface_area = (radius * radius * PI * 2) + (2 * radius * PI * height);
    cout << volume << " " << surface_area;

    return 0;
}
