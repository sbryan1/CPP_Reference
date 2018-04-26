#include <iostream>
#include <myClass.h>
using namespace std;





int main(){

  myClass mc1("myclassobject1");
  myClass *mcp = &mc1;
  string name = (*mcp).getName();
  cout << name;
  



  return 0;
}
