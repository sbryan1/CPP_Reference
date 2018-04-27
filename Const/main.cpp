#include <iostrem>
using namespace std;
int main(){
 
	int i = 3;
	int const ci = 3;
	

	i = 4;
	ci = 4;				//not ok
	
	int const& cri = 5;
	cri = 6				//not ok



}
