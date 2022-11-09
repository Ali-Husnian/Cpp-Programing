#include<iostream>
#include<string.h>
using namespace std;


class Book
{
    private: // access specfier
        int page;
        float price;
        string name;
    public: // access specfier

        // Getter Function
        void getPage(int p){
            page = p;
        }
        void getPrice(float pr){
            price = pr;
        }
        void getName(string n){
            name = n;
        }

        // Setter Function
        int setPage(){
            return page;
        }
        float setPrice(){
            return price;
        }
        string setName(){
            return name;
        }

};

int main(){
    Book b1; //class object 1
    cout << "------ Book 1------" << endl;
    b1.getPage(100);
    b1.getPrice(300.98);
    b1.getName("web programing");
    
    cout << "Book pages : " << b1.setPage() << endl;
    cout << "Book price : " << b1.setPrice() << endl;
    cout << "Book name : " << b1.setName() << endl;

        Book b2; //class object 1
        cout << "------Book 2------"<< endl;
        b2.getPage(80);
        b2.getPrice(170.68);
        b2.getName("java programing");
        
        cout << "Book pages : " << b2.setPage() << endl;
        cout << "Book price : " << b2.setPrice() << endl;
        cout << "Book name : " << b2.setName() << endl;

    system("pause>0");
}