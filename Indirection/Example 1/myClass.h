#include <string>
class myClass{
  private: 
    std::string name;

  public:
    myClass(string s){
      name = s;
    }
    std::string getName(){
      return name;
    }
};
