/*************************************************************
 *	CPP file containing all functionalities of the header file
 *************************************************************/


#include <iostream>
#include <string>
#include "calculator.h"

void Calculator::setVal(double n1,double n2)
{
	this->num1 = n1;
	this->num2 = n2;
}

void Calculator::divide()
{
	if(this->num2 == 0)
		this->result = "Division by zero is not possible";
	else
		this->result = to_string(this->num1 / this->num2);
}

void Calculator::add()
{
	this->result = to_string(this->num1 + this->num2);
}

void Calculator::subtract()
{
	this->result = to_string(this->num1 - this->num2);
}

void Calculator::multiply()
{
	this->result = to_string(this->num1 * this->num2);
}

void Calculator::getResult()
{
	cout<<"Result : "<<this->result<<endl;
}
