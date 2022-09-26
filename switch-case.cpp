#include<iostream>
using namespace std;
 int main()
{
    int month , year;
    cout << "Enter week number";
    cin >> month ;//>> year;

    switch(month){

        case 1 : cout << " monday";
        break;
        case 2 : cout << " tuesday";
        break;
        case 3 : cout << " wednesday";
        break;
        case 4 : cout << " thursday";
        break;
        case 5 : cout << " friday";
        break;
        case 6 : cout << " satureday";
        break;
        case 7 : cout << " sunday";
        break;
        
            default : cout << "invald number";
    } 
    system("pause>0");
    // return 0 ;
}