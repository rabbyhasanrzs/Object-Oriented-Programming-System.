
//! ------->> Example for Constructor data Initialization <------//

//?  Why Use Constructors?

            /*
                    1) Automatic Initialization of objects
            */



#include<iostream>
#include<string>
using namespace std;

// ------> Create a Class
class Teacher{
    private:

        double salary;

    public:
        //----> Properties/ ------> Attributes
        string name;
        string dept;
        string subject;

        Teacher(){
            cout << "Hi ! I am a Constructor"<<endl;
            dept="CSE";  // --------> Constructor data Initialization.
        }

        void changDept(string newDept){
            dept=newDept;
        }
        
        // ------> Setter 
        void setSalary(double Salary){
            salary=Salary;
        }
        // -------> getter
        double getSalary(){
            return salary;
        }
        void getinfo(){
            cout<<"Teacher Name : "<<name<<endl;
            cout<<"Department : "<<dept<<endl;
            cout<<"Subject Name : "<<subject<<endl;
            cout<<"Teacher salary : "<<salary<<endl;
        }

};
int main() {
    Teacher t1;  // -----> constructor call
    t1.name="Rabby Hasan"; 
    t1.subject="OOPs";
    t1.setSalary(25000);
    t1.getinfo();
    
    cout<<endl;
    
    Teacher t2;  // ----> constructor call
    t2.name="OVi-Hasan"; 
    t2.subject="SPL";
    t2.setSalary(20000);
    t2.getinfo();
    return 0;
}
