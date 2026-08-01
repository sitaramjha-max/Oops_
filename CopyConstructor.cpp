
#include <iostream>
using namespace std;

class Student 
{
public: 
    int rollNo;
    int age;
    int numberOfSubject;
    string name;

    

    //Parameterised constructor
    Student(int rollNo , int age , int numberOfSubject , string name)
    {
        //Assigning the values got into the parameter form to the object data member .
        this->age = age; // this->is used to assign the value in the particular data member of the object .
        this->rollNo= rollNo;
        this->name= name;
        this->numberOfSubject= numberOfSubject;
    }

    // Copy Constructor 
    Student(const Student &srcobj)
    {
        this->age = srcobj.age;
        this->name= srcobj.name;
        this->rollNo = srcobj.rollNo;
        this->numberOfSubject = srcobj.numberOfSubject;
    }

    void display() //A display function which displays attributes of the object
    {
        cout<< this->name <<endl;
        cout<< this->age <<endl;
        cout<< this->numberOfSubject <<endl;
        cout<< this->rollNo <<endl;
    }

    

};
int main()
{
    //Passing Value to a parameterised constructor
    Student A(301 , 20 , 5 , "Sitaram");
    A.display();

    //Calling Copy Constructor
    Student C(A); // Copy the data from object A to C .

    cout<<"Object C Detail" << endl ;
    C.display();

    
    
    return 0;
}


