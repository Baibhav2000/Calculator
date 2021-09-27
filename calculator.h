/*********************************************
 *	A header file containing Calculator class.
 *********************************************/

#include <iostream>

using namespace std;

class Calculator
{
	private:
		double num1,num2;
		string result = "";
	public:
		void setVal(double,double);
		void getResult();
		void add();
		void subtract();
		void multiply();
		void divide();
		void power();
};