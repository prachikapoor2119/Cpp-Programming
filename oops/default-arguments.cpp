#include <iostream>
using namespace std;

class Calculator
{
public:
    int add(int a, int b, int c = 0)
    {
        return a + b + c;
    }

    double add(double a, double b = 0.0)
    {
        return a + b;
    }
};

int main()
{
    Calculator calc;

    cout << "Sum of 5, 10, and 15: " << calc.add(5, 10, 15) << endl;

    cout << "Sum of 5, 10: " << calc.add(5, 10) << endl;

    cout << "Sum of 5.5 and 2.5: " << calc.add(5.5, 2.5) << endl;

    cout << "Sum of 5.5: " << calc.add(5.5) << endl;

    return 0;
}
