#include<iostream>
using namespace std;

template<typename Type>
void Swap(Type& a , Type& b){
    Type temp = a;
    a = b;
    b = temp;
}

int main(){
    int a = 10 , b = 5;
    cout << a << " - " << b << endl;
    Swap<int>(a,b);
    cout << a << " - " << b << endl;

    cout << "........."<< endl;

    char c = 'c' , d = 'd';
    cout << c << " - " << d << endl;
    Swap<char>(c,d);
    cout << c << " - " << d << endl;

    system("pause>0");
}