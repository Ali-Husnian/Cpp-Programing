#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, char const *argv[])
{
    int lenght;
    cout << "Enter lenght:";
    cin >> lenght;
    char symbol;
    cout << "Enter symbol:";
    cin >> symbol;
    for (int i = 1; i <=  lenght; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << setw(2) << symbol;
        }
        cout << endl;
    }
    
    return 0;
}
