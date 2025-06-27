


//! ------>> Example for showing Error of Shallow copy Constructor  <------//



#include<iostream>
using namespace std;
class student{
    public:
        string name;
        double* cgpaPtr;
        student(string name,double cgpa){
            cout<<"Hi i the example am default Copy Constructor"<<endl;
            this->name=name;
            cgpaPtr=new double;
            *cgpaPtr=cgpa;
        }

        student(const student &s1){ // Call by reference
            cout<<"Hi i am a custom copy constructor"<<endl;
            this->name=s1.name;
            this->cgpaPtr=s1.cgpaPtr;
        }

        void getinfo(){
            cout<<"Name is = "<<name<<endl;
            cout<<"CGPA is = "<<*cgpaPtr<<endl;
        }

};
int main() {
    student s1("RABBY",3.95);
    s1.getinfo();

    student s2(s1);
    s2.name="OVI";
    *(s2.cgpaPtr)=3.0;
    s1.getinfo();
    return 0;
}