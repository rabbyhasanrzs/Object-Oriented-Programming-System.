

//! ----------> Create Class and Object Example and Trying to Print <------//

#include<iostream>
using namespace std;

// ------>  Create a Class
class Teacher{
    // -----> Properties/ -----> Attributes
    string name;
    string dept;
    string subject;
    string salary;
    // -----> Method / -----> Function / ----> Member Function of Classs
    void changDept(string newDept){
        dept=newDept;
    }

};
int main() {
    Teacher t1;  // -----> Create a teacher class object
    t1.name="Rabby";
    return 0;
}

//* This program throws an error because, in the Teacher class, members are private by default, making its data and methods accessible only within the class.

//?     Access Modifier :
        //? --> Private : Data and Method Accessible inside class.
        //? --> Public : Data and Method Accessible to everyone.
        //? --> Protected : Data and Method Accessible inside class and to its derived class.