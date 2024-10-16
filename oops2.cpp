// Problem Statement
// Design a class hierarchy to represent different types of vehicles in a transportation system. You will create a base class called Vehicle and two derived classes: Car and Bike. Each vehicle has a name and a method to calculate its rental cost.

// Base Class: Vehicle

// Attributes:
// string name
// Methods:
// Vehicle(string name): Constructor to initialize the vehicle's name.
// virtual double calculateRentalCost(): A virtual method that returns the rental cost (default implementation returns 0).
// Derived Class: Car

// Attributes:
// double dailyRentalRate
// Methods:
// Car(string name, double dailyRentalRate): Constructor to initialize the name and daily rental rate.
// double calculateRentalCost(): Override the base class method to return the total cost based on the number of days rented.
// Derived Class: Bike

// Attributes:
// double hourlyRentalRate
// int hoursRented
// Methods:
// Bike(string name, double hourlyRentalRate, int hoursRented): Constructor to initialize the name, hourly rental rate, and hours rented.
// double calculateRentalCost(): Override the base class method to return the total cost based on hours rented.
// Instructions:
// Implement the classes as described above.
// In the main() function, create one car and one bike.
// Output their names and calculated rental costs using the calculateRentalCost() method.
#include <iostream>
#include <string.h>
using namespace std;

class Vehicle
{
protected:
    string name;

public:
    Vehicle(string n) : name(n) {}

    virtual double rental() = 0;

    string getname()
    {
        return name;
    }
};

class Car : public Vehicle
{
private:
    double dailyrental;

public:
    Car(string name, double dailyrental) : Vehicle(name), dailyrental(dailyrental) {};

    double rental() override
    {
        int NoOfDays;
        cout << "Total no of days :";
        cin >> NoOfDays;
        return NoOfDays * dailyrental;
    }
};

class Bike : public Vehicle
{
private:
    double Hourlyrental;
    int hours;

public:
    Bike(string name, double HourlyRental, int hours) : Vehicle(name), Hourlyrental(Hourlyrental), hours(hours) {};

    double rental() override
    {
        return Hourlyrental * hours;
    }
};

int main()
{

    Car c("Prachi", 25);
    Bike b("Par", 25, 100);
    cout << " name " << c.getname() << endl
         << "rental " << c.rental() << endl;
    
    cout << " name " << b.getname() << endl
         << "rent " << b.rental() << endl;
    
}




 






















// 3











// chocolate
// teacher reco