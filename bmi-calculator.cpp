#include <iostream>
using namespace std;
    main(){

    float weight , height, bmi;

    cout << "Enter weight(kg) and height(m)" << endl;

    cin >> weight >> height ;

    bmi = weight / (height*height);

    if(bmi < 18.5)
    {
        cout << "UnderWeight" << endl;
    }
    else if (bmi > 25)
    {
        cout << "OverWeight" << endl;
    }
    else
    {
        cout << "Normal weight" << endl;
    }
        cout << "Your bmi is "<< bmi;

    return 0 ;
}