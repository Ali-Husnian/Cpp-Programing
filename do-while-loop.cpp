#include<iostream>
using namespace std ;
main(){
    int userPin = 1234 , pin , errorCount = 0;
    do{
        cout << "Enter PIN: " ;
        cin>> pin ;
        if(pin != userPin){
            cout << "invaled PIN Code \n";
            errorCount++;
        }

     }while (errorCount < 3  && pin != userPin);
     if(errorCount < 3){
        cout << "***Wellcom***\nLoading...";
     }else{
        cout << "Bloacked...";
     }
     




    system("pause>0");
}