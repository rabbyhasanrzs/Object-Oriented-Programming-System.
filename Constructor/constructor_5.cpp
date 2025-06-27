

//! ------>> Example fo using this default copy Constructor  <------//



#include<iostream>
using namespace std;
class student{
    public:
        string name;
        student(string name){
            cout<<"Hi i the example am default Copy Constructor"<<endl;
            this->name=name;
        }
        void getinfo(){
            cout<<"Name is = "<<name<<endl;
        }

};
int main() {
    student s1("RABBY");
    s1.getinfo();

    student s2(s1);  // Default Copy constructor
    s2.getinfo();
    return 0;
}