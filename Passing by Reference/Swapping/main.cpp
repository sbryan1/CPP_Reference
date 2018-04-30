#include <iostream>
using namespace std;

void swap(double&, double&);    //prototype
int main(){

	double firstnum = 20.5, secnum = 6.25;
	
	cout << "The value stored in firstnum is: " << firstnum << endl;
	cout << "the value storded in secnum is: " << secnum << "\n\n";
	
	swap(firstnum, secnum); //call the function with references
	
	cout << "The value stored in firstnum is now: " << firstnum << endl;
	cout << "The value stored in secnum is now: " << secnum << endl;
	
	return 0;
	





}



void swap(double& num1, double& num2){
    double temp; //means for switching
    temp = num1;
    num1 = num2;
    num2 = temp;

    
}