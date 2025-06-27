


//!------> Example for hierarchical Inheritance ----//

#include<iostream>
using namespace std;

class Person{
    public:
    string name;
    int age;
};

class Student :Person {
    // Name,Age,Roll
    public:
    int roll;
};

class Teacher:public Person{
    public:
    string subject;
    void getInfo(){
    cout<<"Name : "<<name<<endl;
    cout<<"Subjects : "<<subject<<endl;
    }

};

int main(){
    
    Teacher s1;
    s1.name="Rabby";
    s1.subject="OS";
    s1.getInfo();

    return 0;
}


//! Example with Parameterized Constructor:


#include<iostream>
using namespace std;

class person{
    public:
    string name;
    int age;
    person(string name,int age){
        this->name=name;
        this->age=age;
    }
};
class teacher:public person{
    public:
    double salary;
    teacher(string name,int age,double salary):person(name,age){
        this->salary=salary;
    }
    void getinfo(){
            cout<<"Name : "<<name<<endl;
            cout<<"age : "<<age<<endl;
            cout<<"Salary : "<<salary<<endl;
    }
};
class student:public person{
    public:
    int roll;
    student(string name,int age,int roll):person(name,age){
    this->roll=roll;
    }
    void getinfo(){
            cout<<"Name : "<<name<<endl;
            cout<<"age : "<<age<<endl;
            cout<<"Roll : "<<roll<<endl;
    }
};

int main() {
    teacher t1("Siam",27,45000);
    t1.getinfo();
    student s1("RABBY HASAN",25,23);
    s1.getinfo();
    return 0;
}