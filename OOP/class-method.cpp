
#include<iostream>
using namespace std;

/*
//creat Class pen
class pen{
    public:
    void penMethod(string color , int price){ //Method/function defined inside the class
        cout << "Pen Color : " << color << endl <<"Pen Price : " << price; 
    }
};

int main(){
    pen penObj; //creat Class Object 
    penObj.penMethod("red",30); //Call Method/function 

    system("pause>0");
}
*/

class car{
    public:
    void carMethod(); //Method/function declaration
};

void car::carMethod(){  //Method/function defination outside the class
    string color = "black";
    int price = 40000;
    cout << "Color: " << color << "\n Price: " << price;
}


int main(){
    car carObj; //creat Class Object 
    carObj.carMethod(); //Call Method/function 

    system("pause>0");
}