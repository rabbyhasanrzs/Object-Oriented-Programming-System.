

//!------> Example for  Multiple Inheritance ----//

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
};
class GradStu:public Student{
    string researchArea;

};

class TeacherAssistance : public Student,public Teacher{
    public:
    int salary;
    void getInfo(){
    cout<<"Name : "<<roll<<endl;
    cout<<"Subjects : "<<subject<<endl;
    cout<<"Salary: "<<salary<<endl;
    }
};

int main(){
    
    TeacherAssistance s1;
    s1.roll=23;
    s1.subject="OS";
    s1.salary=25000;
    s1.getInfo();

    return 0;
}





//! ----- Example with Parameterized Constructor



#include<iostream>
using namespace std;

// ----> Base class
class Person{
    public:
    string name;
    int age;
    Person(string name,int age){
        this->name=name;
        this->age=age;
    }
};


// ----> Derived class from Person

class Student :virtual public Person {
    public:
    int roll;
    Student(string name,int age ,int roll): Person(name,age){
        this->roll=roll;
    }
    void getInfo(){
    cout<<"Information for Student"<<endl<<endl;
    cout<<"Name : "<<name<<endl;
    cout<<"Age : "<<age<<endl;       
    cout<<"Roll : "<<roll<<endl<<endl;
    }
};


// ----> Derived class from Person

class Teacher:virtual public Person{
    public:
    string subject;
    Teacher(string name,int age ,string subject): Person(name,age){
        this->subject=subject;
    }
    void getInfo(){
    cout<<"Information for Teacher"<<endl<<endl;
    cout<<"Name : "<<name<<endl;
    cout<<"Age : "<<age<<endl;       
    cout<<"Subjects : "<<subject<<endl<<endl;
    }
};


// Graduate student derived from Student

class GradStu:public Student{
    public:
    string researchArea;
    GradStu(string name,int age,int roll ,string researchArea): Person(name,age),Student(name,age,roll){
        this->researchArea=researchArea;
    }

    void getInfo(){
    cout<<"Information for Graduate Student"<<endl<<endl;
    cout<<"Name : "<<name<<endl;
    cout<<"Age : "<<age<<endl;       
    cout<<"Roll : "<<roll<<endl;
    cout<<"Research Area : "<<researchArea<<endl<<endl;
    }
};


// Multiple Inheritance from Student and Teacher


class TeacherAssistance : public Student,public Teacher{
    public:
    int salary;
    TeacherAssistance(string name,int age,int roll,string subject,int salary) : Person(name,age),Student(name,age,roll) , Teacher(name,age,subject){
        this->salary=salary;
    }
    void getInfo(){
    cout<<"Information for Teacher Assistance"<<endl<<endl;
    cout<<"Name : "<<name<<endl;
    cout<<"Age : "<<age<<endl;       
    cout<<"Roll : "<<roll<<endl;
    cout<<"Subjects : "<<subject<<endl;
    cout<<"Salary: "<<salary<<endl<<endl;
    }
};

int main(){
    Student s1("Shakib",23,2);
    s1.getInfo();

    Teacher t1("Jahanur Biswas",35,"DSA");
    t1.getInfo();

    GradStu g1("Rabby Hasan",25,23,"OOPs");
    g1.getInfo();

    TeacherAssistance ta1("RABBY",27,5,"DSA",25000);
    ta1.getInfo();
    return 0;
}



