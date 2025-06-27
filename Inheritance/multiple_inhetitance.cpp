





//!------> Example for  Multiple Inheritance ----//

#include<iostream>
using namespace std;

class Person{
    public:
    string name;
    int age;
};

class Student{
    // Name,Age,Roll
    public:
    int roll;
};

class Teacher:public Person,public Student{
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


//! Example with Parameterized Constructor


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
class teacher{
    public:
    int id;
    teacher(int id){
        this->id=id;
    }
};
class student:public person,public teacher{
    public:
    int roll;
    student(string name,int age,int id,int roll):person(name,age),teacher(id){
        this->roll=roll;
    }
    void getinfo(){
    cout<<"Name is = "<<name<<endl;
    cout<<"Roll is = "<<roll<<endl;
    cout<<"Age is = "<<age<<endl;
    }
};


int main() {
    student s1("Rabby Hasan",23,528260,23);
    s1.getinfo();
    return 0;
}