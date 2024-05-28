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
    cout << "請以a b的格式輸入座標(a, b): ";
    cin >> a >> b;
    cout << "請以c d的格式輸入座標(c, d): ";
    cin >> c >> d;
    double distance = getDistance(a, b, c, d);
    cout << "(a, b)、(c, d)兩點的距離為：" << distance << endl;

    return 0;
}
