#include <string>
class Myclass{
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
