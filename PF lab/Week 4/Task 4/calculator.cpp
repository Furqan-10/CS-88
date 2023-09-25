#include<iostream> 
using namespace std;
void add(int num1,int num2);
void subtract(int num1,int num2);
void multiply(int num1,int num2);
void divide(int num1,int num2);

main() {
	cout<<"Enter 1st number: ";
	int num1;
	cin>> num1;
	cout<<"Enter 2nd number: ";
	int num2;
	cin>> num2;
	char op;
	cout<<"Enter an operator (+, -, *, /): ";
	cin>> op;
	if (op=='+')
	{
	add(num1,num2);
	}
	if (op=='-')
	{
	subtract(num1,num2);
	}
	if (op=='*')
	{
	multiply(num1,num2);
	}
	if (op=='/')
	{
	divide(num1,num2);
	}
}

void add(int num1,int num2)
{
int add=num1+num2;
cout<<"Addition: "<<add;
}

void subtract(int num1,int num2)
{
int subtract=num1-num2;
cout<<"Subtraction: "<<subtract;
}

void multiply(int num1,int num2)
{
int multiply=num1*num2;
cout<<"Multiplication: "<<multiply;
}


void divide(int num1,int num2)
{
int divide=num1/num2;
cout<<"Division: "<<divide;
}