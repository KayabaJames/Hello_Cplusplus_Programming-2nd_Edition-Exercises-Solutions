# include <iostream>
# include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));
    int a = rand() % 10;
    int b = (rand() % 900) + 100;
    int c = (rand() % 3) - 1;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    return 0;
}
