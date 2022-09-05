#include<iostream>
using namespace std ;

main(){
    /*
        int number ;
    cout << "Enter the Whole Number : ";
    cin >> number;

    if(number % 2 == 0)
    {
        cout << "You have entered even number ";
    }
    else
    {
            cout << "You have entered odd number \n";

    }

    */
    //user enter side lengths of a triangle (a,b,c)
    //program should write out wheter triangle is
    //equilateral . isosceles or scalene
    
    float a, b, c;
    cout << " Ente the Value a , b a , c :" ;
    cin >> a >> b >> c;

    if(a==b && b==c && a==c)
    {
        cout << "Equilateral triangle :";
    }
    else
    {
        if(a!=b && b!=c && a!=c)
        {
            cout << "Isosceles triangle :";

        }
        else
        {
            cout << "Sceles triangle :";

        }
    }

    system("pause>0");

}