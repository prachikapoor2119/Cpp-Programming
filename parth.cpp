#include <iostream>
using namespace std;

int main(){

    int a;
    int b;
    int choice;

    while (choice!=0){
    // cout << "Enter choice" << endl;
    // cout << "1 Add" << endl;
    // cout << "2 diff" << endl;
    // cout << "3 mul" << endl;
    // cout << " 4 divide" << endl;
    // cout << "5 Modulus" << endl;
    // cout << "6 exit" << endl;
    cin >> choice >> a >> b;
    
      
    switch(choice){
        case 1:
            cout << a + b << endl;
            break;
    
    case 2:
        cout << a - b << endl;
        break;
    
case 3:
    cout << a * b << endl;
    break;

case 4:
cout << a / b << endl;
break;

case 5:
cout << a % b << endl;
break;

case 6:
    exit(0);
default:
    cout << "Invalid Operation" << endl;
    break;
}
    }
    return 0;
}



