
//!------------------------------------------> Encapsulation <-----------------------------------------//


#include<iostream>
using namespace std;

// ---> Create a Class
class Teacher{

    private:     // ---> Data hiding
    string password;
    public:

    // ---> Properties /---> Attributes

    string name;
    string dept;
    string subject;

    //  ---> Method /--> Function / --> Member Function of Classs
    void changDept(string newDept){
        dept=newDept;
    }
    
    // ------> Setter 
    void setPass(string pass){
        password=pass;
    }
    // -----> getter
    string getPass(){
        return password;
    }
    void getinfo(){
        cout<<"Your password is : "<<password<<endl;

        cout<<"Teacher Name : "<<name<<endl;
        cout<<"Department : "<<dept<<endl;
        cout<<"Subject Name : "<<subject<<endl;
        
    }

};
int main() {

    Teacher t1;  // -----> Create a teacher class object/ It's Also calling Constructor (default) 

    string pass;
    cout<<"Create a password = ";
    cin>>pass;

    t1.name="Rabby Hasan"; // ------> Initialize the object t1 properties 
    t1.dept="CSE";
    t1.subject="OOPs";
    
    t1.setPass(pass);
    t1.getinfo();
    return 0;
}