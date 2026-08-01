// There are 3 types of constructor in c++
// 1.Default constructor 2.Parameterised constructor 3.Copy Constructor
// And the deconstrutor is of 1 type = 1.Default deconstructor

// Syntax -> constructor
// 1.Default constructor -> nameoftheclass()
// 2.Parameterised Constructor -> nameoftheclass(parameters)
// 3.Copy constructor -> nameoftheclass(const nameoftheclass &srcobj)
// In copy constructor const tells that no changes should be made in original object
// and (&srcobj) acts as a parameter and stands for source object
// Tells from which object to copy .

// Syntax -> Deconstructor
// Syntax-> ~nameoftheclass

// Constructor is called when an object is created.
// Destructor is called automatically when the object is destroyed
// (goes out of scope or is deleted).

#include <iostream>
using namespace std;

// Agar humne parameterised constructor bna rkha hai toh compiler default constructor
// nhi banata hai . so aise case mein humein agr koi object bina parameter ke bananna
// hai toh humein default constructor bhi declare krna padega class mein .
class Student
{
public:
    int rollNo;
    int age;
    int numberOfSubject;
    string name;

    // Default Constructor
    Student()
    {
        cout << "Constructor is called";
    }

    // Parameterised constructor
    Student(int rollNo, int age, int numberOfSubject, string name)
    {
        // Assigning the values got into the parameter form to the object data member .
        this->age = age; // this->is used to assign the value in the particular data member of the object .
        this->rollNo = rollNo;
        this->name = name;
        this->numberOfSubject = numberOfSubject;
    }

    void display() // A display function which displays attributes of the object
    {
        cout << this->name << endl;
        cout << this->age << endl;
        cout << this->numberOfSubject << endl;
        cout << this->rollNo << endl;
    }

    // Default Destructor

    // ~Student()
    // {
    //     cout<<"Default Destructor is called ";

    // }
};
int main()
{
    // Passing Value to a parameterised constructor
    Student A(301, 20, 5, "Sitaram");
    A.display();
    Student B; // Agar default constructor nhi hoga toh error dega as parameterised constructor ki
               // ki wajah se compiler default constructor nhi banayega isliye humein khud declare
               // krna padega default constructor

    return 0;
}