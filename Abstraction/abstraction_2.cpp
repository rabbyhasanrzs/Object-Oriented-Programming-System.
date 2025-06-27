
//!----> Example for Abstract with inherited class's ----->////

#include<iostream>
#include<string>

using namespace std;

class Human{  // Abstract Class
    public:
    virtual void work()=0;  // Pure virtual Function
};

class Baby : public Human{
    public:
    void work(){
        cout<<"Crawling"<<endl;
    }
};

class Boy:public Human{
    public:
    void work(){
        cout<<"Playing"<<endl;
    }
};
int main() {
      Baby b1;
      b1.work();

      Boy bo1;
      bo1.work();
    return 0;
}
