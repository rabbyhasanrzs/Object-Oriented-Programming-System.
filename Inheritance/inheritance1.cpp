

//!------------------------------------------> Example for Inheritance <-----------------------------------------//


#include<iostream>
using namespace std;

class Person{
    public:
    string name;
    int age;

    Person(){       
    }
};

class Student : public Person{
    // Name,Age,Roll
    public:
    int roll;

    void getInfo(){
    cout<<"Name : "<<name<<endl;
    cout<<"Age : "<<age<<endl;
    cout<<"Roll : "<<roll<<endl;
    }
};

int main(){
    
    Student s1;
    s1.name="Rabby";
    s1.age=25;
    s1.roll=23;

    s1.getInfo();
    return 0;
}