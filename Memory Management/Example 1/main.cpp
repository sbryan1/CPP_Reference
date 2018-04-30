#include <iostream>
#include "Myclass.h"
using namespace std;
int main()
{
    
    
    Myclass mc1("mcl_obj");
    cout << mc1.getPtr() << endl;           //value of pint1;
    mc1.addInt(32);                       
    cout << mc1.getInt() << endl;           //value of pint1 after assignment;
    
    
    

    
    
    return 0;
}