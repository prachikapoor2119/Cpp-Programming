// #include <iostream>
// using namespace std;

// int main()
// {

//     int a, b = 1;
//     a = 10;
//     if (++a)
//     {
//         a = 10;
//         if (++a)
//             cout << b;
//         else
//             cout << ++b;
//     }
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int a = 1;
//     int b = 2;
//     if(a-- > 0 || ++b > 2 ){ // b condition not evaluated bcoz of (or) condition
//         cout << "Stage1-Inside-If" << endl;

//     }

//     else{
//         cout << "Stage2-Inside else";
//     }

//     cout << a << " " << b << endl;
// }

// #include <iostream>
// using namespace std;

// int main(){

//     for (int i = 0; i <= 5;i--){
//         cout << i << " ";
//         i++;
//     }
// }

#include <iostream>
using namespace std;

int main()
{

    for (int i = 0; i <= 15; i += 2)
    {
        cout << i << " ";
        if (i & 1)
        {
            continue;
        }
        i++;
    }
}