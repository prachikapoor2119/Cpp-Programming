#include <iostream>
using namespace std;

int main(){

    int amount;
    cout << "Enter the amount" << endl;
    cin >> amount;
    int count1 = 0;
    int count2 = 0;
    int count3 = 0;
    int count4 = 0;
    int num = true;

    switch(num){

    case 1:

        count1 = amount / 100;
        amount = amount % 100;
       
    case 2:

        count2 = amount / 50;
        amount = amount % 50;
      
    case 3:

        count3 = amount / 20;
        amount = amount % 20;
        
    case 4:

        count4 = amount / 1;
        amount = amount % 1;
       

}

cout << count1<<endl;
cout << count2<<endl;
cout << count3<<endl;
cout << count4<<endl;

}