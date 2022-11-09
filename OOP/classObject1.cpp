#include<iostream>
using namespace std;
// creat class 
class Pen {
    public :    // access specifier
    // create some attributes/variables
    string Color;
    string Body;
    string Hieght;
    string Width;  
};

int main()
{
    // Create Objects 
    Pen PenObj;
    // access  attributes and set values
    PenObj.Color = "Red";
    PenObj.Body = "Solid 2.1 mm";
    PenObj.Hieght = "10 cm";
    PenObj.Width = "2 cm";
    // print outputs

    cout << "Pen Color : " << PenObj.Color << endl;
    cout << "Pen Body : " << PenObj.Body << endl;
    cout << "Pen Hieght : " << PenObj.Hieght << endl;
    cout << "Pen Width : " << PenObj.Width << endl;
    return 0;
}

