#include <iostream>
using namespace std;


template <class T>
T tmax(T const& t1, T const& t2){
  return t1 < t2? t2: t1;
}



int main(){


  cout << tmax(2,4) << endl;
  cout << tmax<int>(33,44) << endl;
  cout << tmax<double>(33,2.0) << endl;
  

  return 0;
}
