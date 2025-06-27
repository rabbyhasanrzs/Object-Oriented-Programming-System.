

//!------------------> Example for constructor & destructor Calling in Inheritance --------------//

//? that situation first Base class and then derived class constructor call
//? that situation first child class and then base class destructor call


#include<iostream>
using namespace std;

class Person{
    public:
    string name;
    int age;
    Person(){
        cout<<"Hi ! I am Parent Constructor"<<endl;
    }
    ~Person(){
        cout<<"Hi i am  parent class destructor"<<endl;
    }
};

class Student : public Person{
    // Name,Age,Roll
    public:
    int roll;
    Student(){
        cout<<"Hi ! I am Child Constructor"<<endl;
    }
    ~Student(){
        cout<<"Hi i am  child class destructor"<<endl;
    }
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