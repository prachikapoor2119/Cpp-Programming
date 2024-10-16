#include <iostream>
using namespace std;

int main()
{

    char arr[10] = {'a', 'b', 'c', '\0', 'd', 'e', '\0'};
    string str = "hel\0lo";
    string str1 = "prachi";
    str1[3] = '\0';
    cout << str << endl; // output = hel
    cout << str1 << endl; // output = pra hi
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    } // output = a b c  d e

    cout << endl;

    cout << arr << endl; // output = abc
}

// getline with custom delimeter(any char can be used)

#include <iostream>
#include <string>

int main()
{
    std::string input;
    std::cout << "Enter text (end with 'a'): ";

    // Read until a semicolon is encountered
    std::getline(std::cin, input, 'a');

    std::cout << "You entered: " << input << std::endl;

    return 0;
}

//cin.getline with custom delimeter

#include <iostream>

int main()
{
    char buffer[100];

    // Using the basic getline
    std::cout << "Enter text (up to 99 characters): ";
    std::cin.getline(buffer, 100);
    std::cout << "You entered: " << buffer << std::endl;

    // Using getline with a custom delimiter
    std::cout << "Enter text (end with a semicolon ';'): ";
    std::cin.getline(buffer, 100, ';');
    std::cout << "You entered: " << buffer << std::endl;

    return 0;
}
