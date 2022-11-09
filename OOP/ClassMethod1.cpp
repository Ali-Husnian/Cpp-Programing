#include<iostream>
using namespace std;
class Students
{
private:
    string Name ;
    int RollNo;
    string Class;
    string Subject;
    string Programe;

public:
   void StudentsMethod();
};

void Students::StudentsMethod(){
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

Students s;
s.StudentsMethod();
    system("pause>0");
}