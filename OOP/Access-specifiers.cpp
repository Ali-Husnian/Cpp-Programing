#include<iostream>
#include<string.h>
using namespace std;

class AccessSpecifiers
{
private:
    int age;
    string name;
public:
    //Consturctor  call!
    AccessSpecifiers(){
        cout << "This is Consturctor Defult call!" <<endl;
    }
    
    // input Function
    void input(){
        cout << "Enter your age :";
        cin >> age;
        cout << "\nEnter your name :";
        cin >> name;
    }
    // output Function
    void output(){
        cout << "----------------------" << endl;
        cout << "Age : "<< age << endl;
        cout << "Name : "<< name << endl;
    }

    // Desturctor call!
    // ~AccessSpecifiers();
};


int main(){
    // object of AccessSpecifiers Class
    AccessSpecifiers as;
    as.input();
    as.output();

    system("pause>0");
}