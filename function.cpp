#include <iostream>
using namespace std;
/**/
void myfunction(){   //creat a function
    cout << "This is a myFunction" << endl;
}
int main(){
    cout << "This is main function \n";
    myfunction();    // call a function in main function

    system("pause>0");
}



/**/
void newFunction();  // function declaration
int main(){

newFunction(); // call the function

    system("pause>0");
} 

void newFunction(){
    cout << "I got just run it" << endl;   // the body of function is called definition.
}




/*

void newFunction(string name = "ali" , int age=21 , string city = "warburtion"){ // defult parameters
    cout << "My name is " << name << endl;  // pass by parameters  || function declaration
    cout << "I'm " << age << " year old" << endl;
    cout << "I'm form loaction "<< city << endl;

}


int main(){

            // call the function
newFunction("husnain",33,"Nankana");        
newFunction("Hamza",21,"london");

newFunction(); // defult set values

    system("pause>0");
} 

*/
