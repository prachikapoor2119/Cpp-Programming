// case 4
// Data Member = protected
// Mode of Inheritance = public


// #include <iostream>
// using namespace std;

// class Human
// {
// protected: 
//     int weight;
// };

// class Male : public Human
// {
//     public:

//     int getweight()
//     {
//         return weight;
//     }

//     void setweight(int w)
//     {
//         weight = w;
//     }
// };

// int main()
// {

//     Male object1;
//     object1.setweight(80);
//     cout << object1.getweight() << endl;
// }





// case 5
// Data Member = protected
// Mode of Inheritance = protected

// #include <iostream>
// using namespace std;

// class Human
// {
// protected:
//     int weight;
// };

// class Male : public Human
// {
// public:
//     int getweight()
//     {
//         return weight;
//     }

//     void setweight(int w)
//     {
//         weight = w;
//     }
// };

// int main()
// {

//     Male object1;
//     object1.setweight(80);
//     cout << object1.getweight() << endl;
// }







// case 6
// Data Member = protected
// Mode of Inheritance = private

// #include <iostream>
// using namespace std;

// class Human
// {
// protected:
//      int weight;
// };

// class Male : private Human
// {
// public:
//     int getweight()
//     {
//         return weight;
//     }

//     void setweight(int w)
//     {
//         weight = w;
//     }
// };

// int main()
// {

//     Male object1;
//     object1.setweight(80);
//     cout << object1.getweight() << endl;
    
// }




// case 6
// Data Member = private
// Mode of Inheritance = public

// #include <iostream>
// using namespace std;

// class Human
// {
// private:
//     int weight;
// };

// class Male : private Human
// {
// public:
    // int getweight()
    // {
    //     return weight;
    // }

    // void setweight(int w)
    // {
    //     weight = w;
    // }
// };

// int main()
// {

//     Male object1;
//     object1.setweight(80);
//     cout << object1.getweight() << endl;
// }
