
//!----> Example for Abstract cannot be instantiated/create object and are meant to be inherited. ----->////

#include<iostream>
#include<string>

using namespace std;

class Human{  // Abstract Class
    public:
    virtual void Work()=0;  // Pure virtual Function
};

int main() {
    Human h1;  // Here show this error
    return 0;
}
