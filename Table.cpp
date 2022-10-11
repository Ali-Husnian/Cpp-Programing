#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int num ,result;

    cout << "Enter a number for print  a Table : ";
    cin >> num;
    // print Single Table enter user number
    for (int i = 1; i <= 10; i++)
    {
        result = i*num;

        cout << num << " x " << i << " = "<<result << endl;
        
    }
            // prints are multipal tables 1 to 10 

    for (int x = 1; x <= 10; x++)
    {
        for (int y = 1; y <=10; y++)
        {
            cout << x << " * " << y << " = " << x*y << endl;
        }
        cout << endl;
        
    }
    
    return 0;
}

