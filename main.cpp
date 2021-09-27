/*******************************************************
 * CPP file used to implement user-defined headrer file.
 *******************************************************/

#include <iostream>
#include "calculator.h"

int main()
{
	Calculator cal;
	cout<<"\n1. Find addition result of two values.\n";
	cout<<"2. Find subtraction result of two values.\n";
	cout<<"3. Find multiplication result of two values.\n";
	cout<<"4. Find division result of two values.\n";

	int option;
	double n1,n2;
	char ch;
	do
	{
		cout<<"\n\nEnter option: ";
		cin>>option;

		switch(option)
		{
			case 1:
					cout<<"Enter first number : ";
					cin>>n1;
					cout<<"Enter second number : ";
					cin>>n2;
					cal.setVal(n1,n2);
					cal.add();
					cal.getResult();
					break;
			case 2:
					cout<<"Enter first number : ";
					cin>>n1;
					cout<<"Enter second number : ";
					cin>>n2;
					cal.setVal(n1,n2);
					cal.subtract();
					cal.getResult();
					break;
			case 3:
					cout<<"Enter first number : ";
					cin>>n1;
					cout<<"Enter second number : ";
					cin>>n2;
					cal.setVal(n1,n2);
					cal.multiply();
					cal.getResult();
					break;
			case 4:
					cout<<"Enter first number : ";
					cin>>n1;
					cout<<"Enter second number : ";
					cin>>n2;
					cal.setVal(n1,n2);
					cal.divide();
					cal.getResult();
					break;
			default:
					cout<<"Not a valid option.\n";
		}
		cout<<"Do you want to continue (Y/y)? ";
		cin>>ch;
	}while(ch == 'Y' ||  ch=='y');
	return 0;
}