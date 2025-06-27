

//! ------->> Example for Parameterized Constructor  <------//

#include<iostream>
using namespace std;

// ----> Create a Class
class Teacher{
    private:
    double salary;
    public:
    //----> Properties/ ----> Attributes
    string name;
    string dept;
    string subject;

    Teacher(string nam,string dep,string sub,double sal){    // ----> Parameterized Constructor
        cout << "Hi ! I am a Parameterized Constructor"<<endl;
        name=nam;
        dept=dep;
        subject=sub;
        salary=sal;
    }

    void changDept(string newDept){  // -----> member function
        dept=newDept;
    }
    
    void getinfo(){   //------> for display class's elements.
        cout<<"Teacher Name : "<<name<<endl;
        cout<<"Department : "<<dept<<endl;
        cout<<"Subject Name : "<<subject<<endl;
        cout<<"Teacher salary : "<<salary<<endl;
    }

};
int main() {
    Teacher t1("Rabby Hasan","CSE","OOPs",25000); // -----> Calling Constructor.
    t1.getinfo();

    cout<<endl; 
    return 0;
}
