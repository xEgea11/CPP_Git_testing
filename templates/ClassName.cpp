#include <iostream>
#include "ClassName.h"
using namespace std;

// Class implementation

// Implementation of Constructor
ClassName::ClassName()
{
    value = 0;
}
// Implementation of Overridden Constructor, with parameters
ClassName::ClassName(int number)
{
    value = number;
}

// Implementation of Destructor; we can define some steps to end the object's life
ClassName::~ClassName()
{
    cout << "Destructor called" << endl;
}

//Static functions can only access static member variables. In the cpp we dont have to define the "static" keyword
void ClassName::set_objective(int number)
{
    objective = number;
}

void ClassName::set_variable(int number)
{
    value = number;
}
int ClassName::get_variable() const
{
    return value;
}

int main()
{
    //Example of static function and static member variable
    ClassName::set_objective(10);               //Static functions are accessed with :: operator
    cout << ClassName::get_objective() << endl;

    //Simple class example
    ClassName obj;
    obj.set_variable(5);
    cout << obj.get_variable() << endl;
    
    //Class example with pointers
    ClassName *obj_ptr = nullptr;               //<--- Pointer to object of class ClassName
    ClassName obj2;
    obj_ptr = &obj2;

    //Accessing member function using pointer
    obj_ptr->set_variable(10);                  //Member functions are accessed with -> operator if the object is a pointer
    cout << obj_ptr->get_variable() << endl;

    //Class example with dynamic memory allocation
    ClassName obj3;

    //Dinamically allocating memory for object
    ClassName *obj4 = new ClassName;            //Dinamically allocating memory for object with "new" keyword; new ClassName returns a pointer to the object,
                                                //It cannot be assigned to a non-pointer variable

    ClassName *obj5 = new ClassName(15);        //Dinamically allocating memory for object with parameters

    //Delete object                             
    delete obj4;                                //Delete object with "delete" keyword; no free is needed
    obj4 = nullptr;                             //Set pointer to nullptr
    delete obj5;
    obj5 = nullptr;
}