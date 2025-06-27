

// //! -----> Example Of Compile time Polymorphism -------//

#include<iostream>
using namespace std;

class student{
    public:
    string name;

    // Constructor Overloading 
    student(){
        cout<<"Non parameterized Constructor"<<endl;
    }


    student(string name){
        this->name=name;
        cout<<"parameterized Constructor"<<endl;
    }


    // Function Overloading 
    void show(int x){
        cout<<"Int is : "<<x<<endl;
    }

    void show(char ch){
    cout<<"char is : "<<ch<<endl;
    }
};
int main() {
    student s1("Rabby");
    s1.show(112);
    return 0;
}







//! -----> Example Of Run time Polymorphism -------//

#include<iostream>
using namespace std;

class Parent{

    public:
    // Function Overiding 
    void show(){
        cout<<"Parent Class"<<endl;
    }

    // Virtual Function
    virtual void hellow(){
        cout<<"Hello from Parent"<<endl;
    }
};

class Child : public Parent{
    public:
    // Function Overiding 
    void show(){
    cout<<"Child Class"<<endl;
    }

    // Virtual Function 
    virtual void hellow(){
        cout<<"Hello from Child"<<endl;
    }

};


int main() {
    Child c1;
    c1.hellow();
    return 0;
} 