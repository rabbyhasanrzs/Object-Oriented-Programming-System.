
//! ------->> Example for Constructor Calling (Default Constructor) <------//


    //? verify this Key Point :
            /*
                    --> Same name as class.
                    --> Constructor doesn't have a return type.
                    --> Only called once (automatically),at object creation.
                    --> Memory allocation happens when constructor is called.
            */

            /*
                    --> It's a Default Constructor
                    --> Takes no parameters.
            */



#include<iostream>
using namespace std;

// ----> Create a Class
class Teacher{
    private:
    double salary;
    public:
    // ----> Properties/Attributes
    string name;
    string dept;
    string subject;

    Teacher(){        // -----> Default constructor
        cout << "Hi ! I am a non parameterize Constructor"<<endl;
    }

};
int main() {
    Teacher t1;  // ------> constructor call 
    return 0;
}
