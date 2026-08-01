#include <iostream>
using namespace std;

class Student // A class is created named Student
{
public: // Access Specifier Tells about the accessing limit of content .
    // Data member
    int rollNo;
    int age;
    int numberOfSubject;
    string name;

    // Member Function

    void study()
    {
        cout << this->name << " is studying" << endl; // this-> [It is used to access the name of the particular object ]
    }
    void sleep()
    {
        cout << this->name << " is sleeping" << endl;
    }
    void stand()
    {
        cout << this->name << " is standing" << endl;
    }
};
int main()
{
    Student A;

    // Assigning values to the class member

    A.name = "Rahul";
    A.age = 20;
    A.rollNo = 301;
    A.numberOfSubject = 4;

    // Calling member function
    A.study();
    A.sleep();
    A.stand();
    return 0;
}