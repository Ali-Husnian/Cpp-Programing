#include<iostream>
using namespace std;
// Options List , Check Blance , Deposite , Withdral
void showManu(){
    cout << "**********Options**********" << endl;
    cout << "1. Check Blance" << endl;
    cout << "2. Deposite" << endl;
    cout << "3. Withdral" << endl;
    cout << "4. Exit" << endl;
    cout << "***************************" << endl;
}
int main(){
    int options;
    double  blance = 500;
    do{
        showManu();  
        cout << "Enter Optioins: ";
        cin >> options;
        // system("cls");
        switch (options)
        {
        case 1 :
            cout << "Your Crint Blance :"<< " $"<<blance << endl;
        break;
        case 2 :
            double deposite;
            cout <<"Enter Amount : ";
            cin >> deposite;
            blance += deposite;
            cout << "Successfuly! Deposite\nYour Blance :"<< " $"<<blance << endl;
        break;

        case 3 :
            double withdral;
            cout <<"Enter Amount : ";
            cin >> withdral;
            blance -= withdral;
            cout << "Successfuly! Withdral\nYour Blance :"<< " $"<<blance << endl;
        break;

        default:
            if(options != 1 || options != 3 || options != 2){
                cout<<"Enter Corect Options";
            }
            break;
        }
    }while(options!=4);

    return 0;
}
