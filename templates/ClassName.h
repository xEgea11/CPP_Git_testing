#ifndef CLASSNAME_H
# define CLASSNAME_H

# include <iostream>
using namespace std;

// Class declaration
class ClassName
{
    private:
        int value;
        static int objective;       //Static member variable; it is shared by all objects of the class
    public:
        //Constructor       <-- This doesn't have a return type.
        ClassName();
        //Overriding constructor, now with parameters
        ClassName(int number);

        //Destructor; only one is allowed per class
        ~ClassName();

        void set_variable(int number);
        int get_variable() const;
        //We can put inline functions here --> If they are short, they can be implemented within the class declaration, but personally I dont like it
        int get_value() const { return value; }
        //Static function declaration
        static void set_objective(int number);
        static int get_objective() { return objective; }    // Static funcion + inline functions
};

//Static member variable initialization, they are done outside the class
//Although it is not mandatory, it is a good practice to initialize static member variables
//C++ initializes static member variables to zero by default if not initialized explicitly
int ClassName::objective = 0;

#endif