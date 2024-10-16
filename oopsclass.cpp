#include <iostream>
#include <vector>

class Staff
{
public:
    // Pure virtual function
    virtual void performDuties() = 0;

    // Virtual destructor
    virtual ~Staff()
    {
        std::cout << "Staff destructor called" << std::endl;
    }
};

class Teacher : public Staff
{
public:
    void performDuties() override
    {
        std::cout << "Teaching students and preparing lesson plans." << std::endl;
    }

    ~Teacher() override
    {
        std::cout << "Teacher destructor called" << std::endl;
    }
};

class Principal : public Staff
{
public:
    void performDuties() override
    {
        std::cout << "Overseeing school operations and managing staff." << std::endl;
    }

    ~Principal() override
    {
        std::cout << "Principal destructor called" << std::endl;
    }
};

class Counselor : public Staff
{
public:
    void performDuties() override
    {
        std::cout << "Providing guidance and support to students." << std::endl;
    }

    ~Counselor() override
    {
        std::cout << "Counselor destructor called" << std::endl;
    }
};

void assignDuties(Staff *staffMember)
{
    if (staffMember)
    {
        staffMember->performDuties();
    }
}

int main()
{
    std::vector<Staff *> staffMembers;

    // Creating instances of derived classes
    staffMembers.push_back(new Teacher());
    staffMembers.push_back(new Principal());
    staffMembers.push_back(new Counselor());

    // Demonstrating polymorphism
    for (Staff *member : staffMembers)
    {
        assignDuties(member);
    }

    // Clean up memory
    for (Staff *member : staffMembers)
    {
        delete member; // Calls the appropriate destructor
    }

    return 0;
}
