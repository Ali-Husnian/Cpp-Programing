#include<iostream>
using namespace std;

/* int factoral(int a){

   if(a > 1)
    return a * factoral(a-1);
   else
    return 1;
}

int main(){
     int a;
     cout << "Enter number : ";
     cin >> a;
     cout << "Factoral is " << a << "! = " << factoral(a) << endl;
     system("pause>0");

} */

int sum(int a , int b){

   if(a == b)
    return a;
    return a + sum(a+1 , b);
}

int main(){
     int a; // 2
     int b; // 4
     cout << "Enter 1st number : ";
     cin >> a;
     cout << "Enter 2nd number : ";
     cin >> b;
     
     cout << "Sum is " << a << " , " << b << " = " << sum(a,b) << endl;
     system("pause>0");
}