#include<iostream>
using namespace std;
class Students //class
{
private: //access specifier
    // class data member
    string Name ;
    int RollNo;
    string Class;
    string Subject;
    string Programe;

public: // access specifier
   void StudentsMethod(); // calss member function declaration
};

void Students::StudentsMethod(){ //  member function deffination
    Name = "Ali";
    RollNo = 33;
    Class = "A";
    Subject = "Computer";
    Programe = "BSCS";

    cout << "Name : " << Name << endl;
    cout << "Roll No : " << RollNo << endl;
    cout << "Class : " << Class << endl;
    cout << "Subject : " << Subject << endl;
    cout << "Programe : " << Programe << endl;
}

int main(){

    Students s; //class objcet
    s.StudentsMethod(); // call function

    system("pause>0");
}