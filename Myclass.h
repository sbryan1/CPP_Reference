#include <string>
class Myclass{
  private: 
    std::string name;

  public:
    Myclass(string s){
      name = s;
    }
    std::string getName(){
      return name;
    }
};
