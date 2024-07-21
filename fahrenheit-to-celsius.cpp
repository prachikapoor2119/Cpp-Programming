#include <iostream>
using namespace std;

int main()
{

    float f, c;
    cout << "Enter the value of fahrenheit" << endl;
    cin >> f;

    c = (f - 32) * 5 / 9;
    cout << "Value of celcius in degress is " << c << endl;
}