#include <iostream>
using namespace std ;

int main() {
	
	// write all out the number between 100 - 500  that are the divisible 3 and 5. 
	
	/*
	int number ; 
	
	number = 100;
	
	while(number <= 500){
		
		if(number % 3 == 0 && number % 5 == 0)
		
		cout << "divisible 3 and 5 > " << number << endl;
	
		number++;
	}
	*/
cout << "***************************************** \n";

// count digits of a numbers.
/*
int number ;
cout << "Enter a number \n";
cin >> number; 

if (number == 0)
{
	cout << "You Entered (0) zero";
}
else
{
	if(number < 0){
		number = -1 * number ;
	}
	int counter = 0;
	while (number > 0)
	{
		number/=10; //number = number/10;
		counter++;
	}
	cout << "Count the number lenght is " << counter ;
	
}
*/

// Reversing number with while loop.
int number ,reversNumber = 0,result;
cout << "Enter the a number";
cin >> number;

while (number != 0 )
{
	result = number % 10;
	reversNumber = (reversNumber*10)+result;
	number = number/10; 
}
cout << "Reverse " << reversNumber;


	system("pause>0");
}