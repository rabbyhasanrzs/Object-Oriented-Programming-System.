



//!------> Example for  Multi Level Inheritance ----//

#include<iostream>
using namespace std;

class Person{
    public:
    string name;
    int age;
};

class Student : public Person{
    // Name,Age,Roll
    public:
    int roll;
};

class GradStudent:public Student{
    public:
    string researchArea;
    void getInfo(){
    cout<<"Name : "<<name<<endl;
    cout<<"Research Area : "<<researchArea<<endl;
    }

};

int main(){
    
    GradStudent s1;
    s1.name="Rabby";
    s1.researchArea="OS";
    s1.getInfo();

    return 0;
}




//! Example with Parameterized constructor





#include<iostream>
using namespace std;
class person{
    public:
    string name;
    int age;
    person(){}
    person(string name,int age){
        this->name=name;
        this->age=age;
    }
};
class teacher : public person{
    public:
    int id;
    teacher(){}
    teacher(string name,int age ,int id):person(name,age){
        this->id=id;
    }
};
class student : public teacher{
    public:
    int roll;
    student(string name,int age,int id ,int roll) : teacher(name,age,id){
        this->roll=roll;
    }
    void getinfo(){
    cout<<"Name is = "<<name<<endl;
    cout<<"Age is = "<<age<<endl;
    cout<<"Roll is = "<<roll<<endl;
    cout<<"ID is = "<<id<<endl;
    }
};


int main() {

    student s1("RABBY",23,333,32);
    s1.getinfo();
    return 0;
}