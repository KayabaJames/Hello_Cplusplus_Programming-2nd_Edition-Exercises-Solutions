#include <iostream>
#include <cmath>

using namespace std;

double getDistance(double a, double b, double c, double d)
{
    return pow( ( pow((a - c), 2) + pow((b - d), 2) ), 0.5 );
}

int main()
{
    double a, b, c, d;
    cout << "�ХHa b���榡��J�y��(a, b): ";
    cin >> a >> b;
    cout << "�ХHc d���榡��J�y��(c, d): ";
    cin >> c >> d;
    double distance = getDistance(a, b, c, d);
    cout << "(a, b)�B(c, d)���I���Z�����G" << distance << endl;

    return 0;
}
