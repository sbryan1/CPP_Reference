#include <string>
class myClass{

	private:
		std::string firstString;
		std::string secondString;
		int num1;

	public:
		myClass(std::string first,std::string second, int num);
		~myClass();
		
		int GetNumber() const {return num1;}



		bool operator<(Person const& p) const;
		bool operator<(int i) const;




};

//free function

bool operator<(int i, Person const& p); //necessary for when the integer is first
