#include <iostream>
#include <conio.h>

using namespace std;

//Write a C++ program using functions that will display the calculator menu. The program will
//prompt the user to choose the operation choice (from 1 to 5). Then it asks the user to input two integer
//values for the calculation. 

int main ()
{
	int choice;
	double x, y;
	int xRem, yRem;
	double sum, diff, prod, quotient;
	int rem;
	char response;

do {
	//displays menu of choices
	cout << "MENU:" << endl; 
	cout << "1. Add\n" << "2. Subtract\n" << "3. Multiply\n" << "4. Divide\n" << "5. Modulus\n";
	cout << "----------------------------------------" << endl;
	cout << "Enter your choice: ";
	cin >> choice;
	cout << "Enter two numbers: ";
	cin >> x >> y;
	
				
	switch(choice)
	{
		//for addition
		case 1:
			sum = x + y;
			cout << "Result: " << sum << endl;
			cout << "----------------------------------------" << endl;
			break;
			
		//for subtraction
		case 2:
			diff = x - y;
			cout << "Result: " << diff << endl;
			cout << "----------------------------------------" << endl;
			break;
		
		//for multiplication	
		case 3:
			prod = x * y;
			cout << "Result: " << prod << endl;
			cout << "----------------------------------------" << endl;
			break;
		
		//for division
		case 4:
			quotient = x/y;
			cout << "Result: " << quotient << endl;
			cout << "----------------------------------------" << endl;
			break;	
		
		//for remainder
		case 5:
			rem = xRem%yRem;
			cout << "Result: " << rem << endl;
			cout << "----------------------------------------" << endl;
			break;
		
		default:
			cout << "Invalid Input. Try Again." << endl;
			cout << "----------------------------------------" << endl;
			break;
	}

	cout << "Do another calculation? (y/n): ";
	cin >> response;
	cout << "----------------------------------------" << endl;
	}
	while(response == 'y' || response == 'Y'); // loop to continue
	cout << "Thank you!";
	
	getch();
	return 0;
}
	

