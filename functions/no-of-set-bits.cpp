#include <iostream>
using namespace std;

// converting from decimal to binary
int setbits(int a)
{

    int ans1 = 0;

    while (a != 0)
    {
        int bit1 = a & 1;
        ans1 = (ans1 * 10) + bit1;
        a = a >> 1;
    }

    return ans1;
}

int main()
{

    int a;
    int b;
    cout << "Enter the value of a and b" << endl;
    cin >> a >> b;

    // counting set bits in a
    int setbit1 = setbits(a);
    int count1 = 0;
    while (setbit1 > 0)
    {
        int lastdigit = setbit1 % 10;
        if (lastdigit == 1)
        {
            count1++;
        }
        setbit1 = setbit1 / 10;
    }

    // counting set bits in b
    int setbit2 = setbits(b);
    int count2 = 0;
    while (setbit2 > 0)
    {
        int lastdigit2 = setbit2 % 10;
        if (lastdigit2 == 1)
        {
            count2++;
        }
        setbit2 = setbit2 / 10;
    }

    cout << "Setbits in a= " << count1 << endl;
    cout << "Setbits in b= " << count2 << endl;

    // adding setbits of a and b
    cout << "Total setbits in a and b= " << count1 + count2 << endl;
}