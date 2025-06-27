
//! ------->> Using Access Modifier & Trying to Successfully Print Class's Object property<------//

#include<iostream>
using namespace std;

// ----> Create a Class
class Teacher{
    public:
    // ----> Properties/ ---> Attributes
    string name;
    string dept;
    string subject;
    double salary;
    // ----> Method/ -----> Function/ ----> Member Function of Classs
    void changDept(string newDept){
        dept=newDept;
    }

    void getinfo(){
        cout<<"Teacher Name : "<<name<<endl;
        cout<<"Department : "<<dept<<endl;
        cout<<"Subject Name : "<<subject<<endl;
        cout<<"Teacher salary : "<<salary<<endl;

    }

};
int main() {
    Teacher t1;  // ----> Create a teacher class object / ----> It's Also calling Constructor (default) 

    t1.name="Rabby Hasan"; // ---->  Initialize the object t1 properties
    t1.dept="CSE";
    t1.subject="OOPs";
    t1.salary= 25000;

    t1.getinfo();


    return 0;
}