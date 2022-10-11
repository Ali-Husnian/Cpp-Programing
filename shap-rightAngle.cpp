#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
    // print shap rightangle 
    int width , height;
    char symbol;
    cout << "Enter Width: ";
    cin >> width;
    cout << "Enter Height: ";
    cin >> height;
    cout << "Enter Symbol: ";
    cin >> symbol;
 
    for (int h = 0;  h < height; h++) // first loop print colums
    {
       for (int w = 0; w < width; w++) // second loop print rows
       {
        cout << setw(3) << symbol ;
       }
       cout << endl;
    }
    
    return 0;
}
