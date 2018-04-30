#include <string>
class Myclass{
  private: 
    std::string name;
    int* pint1;

  public:
    Myclass(std::string s) : name(s), pint1(nullptr){
    }
    ~Myclass(){
        std::cout << "deleting Myclass object: " << name << std::endl;
        std::cout << "deleting " << name << "'s " << "pint of value: " << *pint1 << std::endl;
        delete pint1;
        std::cout << "value of pint1 after manual resource deletion: " << *pint1 << std::endl;
        
    }
    
    
    
    
    
    std::string getName(){
      return name;
    }
    void addInt(int i){
        pint1 = new int(32);        //allocating a new int off the heap
    }
    int getInt(){
        return *pint1;
    }
    int* getPtr(){
        return pint1;
    }
};
