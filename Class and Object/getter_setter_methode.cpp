

//! ------->> Using for Private Access Modifier & getter-setter method<------//

//? In a Class to private access modifier accessibility condition we know Data and Method Accessible inside class. But we can indirectly access by implement and using getter and setter method.

//? In object-oriented programming, data inside a class is usually kept private to protect it. To access or change that private data from outside the class, we use getter and setter methods.

//? We use getters and setters to safely access and update private data in a class. This is a key part of encapsulation in object-oriented programming.



#include<iostream>
using namespace std;

// ----> Create a Class
class Teacher{
    private:
    double salary;
    public:
    // ----> Properties/ ----> Attributes
    string name;
    string dept;
    string subject;
    // ------> Method/ ----> Function/ -----> Member Function of Classs
    void changDept(string newDept){
        dept=newDept;
    }
    
    // -----> Setter 
    void setSalary(double isalary){
        salary=isalary;
    }
    // ------> getter
    double getSalary(){
        return salary;
    }
    void getinfo(){
        cout<<"Teacher Name : "<<name<<endl;
        cout<<"Department : "<<dept<<endl;
        cout<<"Subject Name : "<<subject<<endl;
        cout<<"Teacher salary : "<<salary<<endl;
    }

};
int main() {
    Teacher t1;  // ------> Create a teacher class object/ It's Also calling Constructor (default) 

    t1.name="Rabby Hasan"; // ------> Initialize the object t1 properties
    t1.dept="CSE";
    t1.subject="OOPs";
    // t1.salary= 25000;

    t1.setSalary(25000);
    t1.getinfo();
    return 0;
}

