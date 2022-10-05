#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int num ,i ,fac =1;                     // fac = 1 , fac = 2 , fac = 6 ,fac = 24 ,fac = 120
    cout << "Enter a number check factorial : ";
    cin >> num;

    for (i=1; i<=num; i++){
                                             //fac = i*fac;
         fac *=i;                            // 1x1=1 , 2x1=2 , 3x2=6, 4x6=24, 5x24=120
        
    }
    cout << "Factorial " << num << "! is " << fac;
    
    return 0;
}
