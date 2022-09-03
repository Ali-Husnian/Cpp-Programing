#include<iostream>
using namespace std;
main (){
   
//    string Concatination
    string first , last , username , space = " " ; 
    
    cout << "Enter the first name : " ;
    cin >> first ;
    
    cout << "Enter the last name : " ;
    cin >> last ;

    username = first + space + last ;

    cout << "Your username is : " << username << endl;

//***************************************************************//
    // addition
    
    float a , b , c ; 
    
    cout << "Enter your first number : " ;
    cin >> a ;
    
    cout << "Enter your second number : " ;
    cin >> b ;

    c = a+b;

    cout << "sum of two number is : " << c << endl;


    cout << "size of integer " << sizeof(int) << " Bytes \n";

    // max or min size of integer number
    cout << "int min size " << INT_MIN << " Bytes \n";
    cout << "int max size " << INT_MAX << " Bytes \n";

    //size of Data types 
        cout << "size of float  " << sizeof(float) << " Bytes \n";
        cout << "size of string " << sizeof(string) << " Bytes \n";
        cout << "size of duble " << sizeof(double) << " Bytes \n";
        cout << "size of boolan " << sizeof(bool) << " Bytes \n";

    
    // system("pause>0");
    return 0 ;
}