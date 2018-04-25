#include "myClass.h"
using std::string;

myClass::myClass(string first,string second,int num) 
	: // initialization
	firstString(first),secondString(second),num1(num){
}

myClass::~myClass(){
}



bool myClass::operator<(myClass const& p) const { //implicit "this" pointer
	return num1 < p.num1;
}


bool myClass::operator<(int i) const{
	return num1 < i;
}
