#include <iostream>
using namespace std;

// the first three arguments are passed by value

// the last two arguments are passed by reference

void calc(double, double, double, double&, double&); //prototype (declaration of parameters)

int main()
{
	double firstnum, secnum, thirdnum, sum, product; //declaration of variables
	
	cout << "Enter three numbers: "; 
	cin >> firstnum >> secnum >> thirdnum;
	calc(firstnum, secnum, thirdnum, sum,product); //function call
	cout << "\nThe sum of the members is: " << sum << endl;
	cout << "The product of the members is: " << product << endl;
	
	return 0;
	
}

void calc(double num1, double num2, double num3, double& total1, double& total2)
{
	//assigns value total and product, therefore doesn't need to return anything
	total1 = num1 + num2 + num3;
	total2 = num1 * num2 * num3; 
	
	return;
}