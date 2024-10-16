#include <iostream>
using namespace std;

void dummy(int n)
{
    n++; // this iteration wont affect the main() n.
    cout << n << endl;
}

int main()
{

    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;
    n++;
    dummy(n); // value just before function calling will be copied to the function
    n++;      // this value wont affect the function since its being used after function calling and isnt copied in function so this iteration wont affect the value in function.
    n++;
    cout << n << endl;
}