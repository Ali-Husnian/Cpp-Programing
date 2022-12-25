#include<iostream>
#include<string>
using namespace std;
class classConstructor{
private:
    int n;
    string age;
public:
        //assign the value of data member n default Constructor

    classConstructor():n(10){ // -> first away assign value

        // n = 20; ->  second away assign value
        cout << "Value of n : " << n << endl;
    }

    // parameterize constructor
    classConstructor(string a){
        age = a;
    }
    void printData(){
        cout << "The Value of Age :" << age;
    }
};

int main(){
classConstructor C;
classConstructor A("Ali Husnain");
A.printData();

system("pause>0");
}
