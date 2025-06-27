

//! ------>> Example fo using this pointer inConstructor  <------//

//? We use the this pointer in a constructor **when the parameter names are the same as the data members.


#include<iostream>
using namespace std;

// ----> Create a Class
class Teacher{
    private:
    double salary;
    public:
    // -----> Properties/ ------> Attributes
    string name;
    string dept;
    string subject;

    Teacher(string name,string dept,string subject,double salary){ // ---> using parameterized constructor
        cout << "Hi ! I am a Parameterized Constructor"<<endl;
        this->name=name;
        this->dept=dept;
        this->subject = subject;
        this->salary=salary;
    }

    void changDept(string newDept){  // ------> member function / method
        dept=newDept;
    }
    
    void getinfo(){   // for display
        
        cout<<"Teacher Name : "<<name<<endl;
        cout<<"Department : "<<dept<<endl;
        cout<<"Subject Name : "<<subject<<endl;
        cout<<"Teacher salary : "<<salary<<endl;

    }

};
int main() {
    Teacher t1("Rabby Hasan","CSE","OOPs",25000);
    t1.getinfo();
    
    cout<<endl;
    
    return 0;
}
