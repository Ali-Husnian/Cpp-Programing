#include <iostream>
using namespace std ;
main (){

    string HostName , GustName;
    cout << "Host Name : " ;
    cin >> HostName;

    system("cls");

    cout << "Gust Name : " ;
    cin >> GustName;

    (HostName == GustName) ? cout << "Wellcom Gust/Host Location" : cout << "Wrong Gust/Host Location";
return 0 ;
    // system("pause>0");
}
