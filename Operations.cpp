#include<iostream>
using namespace std;
main(){
//   + , - , / , % , *  ----Arithmetic Operators------

int a ; 
int b ; 

a = 9 ;
b = 7 ;

cout << a+b << endl ; // Addition
cout << a*b << endl ; // Subtraction
cout << a-b << endl ; // Multipaication
cout << a/b << endl ; // Division
cout << a%b << endl ; //Modulo Operation (Remainder after division)


//<<----------------------------- increment operator ---------------------->>
cout << "increment operator" << endl;

int counter = 5;
cout << ++counter << endl;
cout << --counter << endl;

//<<----------------------Logical Operators --------------------->>

    cout << "Logical operator" << endl;

    int x = 5, y = 8;

    // And Operators
    if(x > y && x != y) {
        cout << " condetion true ";
    }else{
        cout << " condetion false " << endl;
    }

    // or operator 
    if(x < y || x == y ) {
        cout << " condetion true ";
    }else{
        cout << " condetion false " << endl;
    }

    //not operator 

    if(x == y) {
        cout <<  " true";
    }else{
        cout <<  " false";
    }

  // Sginment Operator (= , == , += , -= , *= , %= , /=)
   cout << " \n Sginment Operator" << endl; 

   int p = 5 ,q = 8 , j ;

    p += p ; // p +  p = p  /  P = 5+5 => 10
    cout << p << endl ;

    p -= q ; // p - q = p  /  P = 10-8 => 2
    cout  << p ;


    q *= p; // q * p = q  / q = 8*2 => 16
    cout << " \n Q New Value " << q ;

    q /= p ; // q % p = q  /  q = 16/2 => 2

    cout << " \n Q New Value " << p;

     p != p ; // p != p = p  /  P = 2 != 2 => 2 

    cout << " \n Q New Value " << p << endl;


//------------------ Comparision Operators (!= , < , > >= , <= , ==)  
    int A = 8 , B = 4;

    cout << (A > B) << endl; // true (1)
    cout << (A < B) << endl; // false (0)
    cout << (A >= B) << endl; // true (1)
    cout << (A <= B) << endl; // false (0)
    cout << (A != B) << endl; // true (1)
    
    
    return 0;
    // system("pause>0");
}
