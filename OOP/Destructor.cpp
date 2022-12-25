#include<iostream>
using namespace std;
class Test{
public:
    // constructor
    Test(){
        cout << "Constructor is called ... " << endl;
    }
    // destructor
    ~Test(){
        cout << "Destructor is called ... " << endl;
    }
};
//create normal function out side the class -> in function create objects(T1,T2)
void CreateObj(){
    Test T1,T2;
}

int main(){
    CreateObj(); //call the function tow times
    //And destroy the destructor go back main body to the program
    cout << "Back to main..." << endl;

    system("pause>0");//then brake
   // create obj call again
    Test T3;
return 0 ;
}
