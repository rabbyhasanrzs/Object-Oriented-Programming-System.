

//!------> Example for  Parameterized constructor  in Inheritance ----//

#include<iostream>
using namespace std;

class Person{
    public:
    string name;
    int age;
    Person(string name,int age){
        this->name=name;
        this->age=age;
    }
};

class Student : public Person{
    // Name,Age,Roll
    public:
    int roll;
    Student(string name,int age,int roll): Person(name,age){
        this->roll=roll;
    }
    void getInfo(){
    cout<<"Name : "<<name<<endl;
    cout<<"Age : "<<age<<endl;
    cout<<"Roll : "<<roll<<endl;
    }
};

int main(){
    Student s1("Rabby Hasan",25,23);
    s1.getInfo();
    return 0;
}