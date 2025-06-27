

//! ------>> Example for Destructor  <------//



#include<iostream>
using namespace std;
class student{
    public:
        string name;
        double* cgpaPtr;
        student(string name,double cgpa){
            cout<<"Hi i am a Parameterized Constructor"<<endl;
            this->name=name;
            cgpaPtr=new double;
            *cgpaPtr=cgpa;
        }
        // Destructor
        ~student(){
            cout<<"Hi! I am Destructor"<<endl;
            delete cgpaPtr;
        }
        void getinfo(){
            cout<<"Name is = "<<name<<endl;
            cout<<"CGPA is = "<<*cgpaPtr<<endl;
        }
};
int main() {
    student s1("RABBY",3.95);
    s1.getinfo();
    return 0;
}