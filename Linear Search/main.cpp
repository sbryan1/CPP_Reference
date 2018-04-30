// linear search demonstration, looks for the index of the item you are looking for 
// also known as a sequential search, each item in the list is examined in the order in which it occurs until the desired item is found 

#include <iostream>
using namespace std;

int linearSearch(int [], int, int); //function prototype and paramter type declaration

int main()

{
	const int NUMEL = 10;
	
	int nums[NUMEL] = {5,10,22,32,45,67,73,98,99,101};
	
	int item, location;
	
	cout << "Enter the item you are searching for: ";
	cin >> item;
	
	location = linearSearch(nums, NUMEL, item);
	
	if (location > -1) 
		cout << "The item was found at index location " << location << endl;
		
	else 
		cout << "The item was not found in the list\n"; 
		
	return 0;
	
}

int linearSearch(int list[], int size, int key) //funciton definition and parameter variable declaration
{
	int i;
	
	for(i = 0; i < size; i++)
	{
		if (list[i] == key)
			return i;
	
	}
	//implicit else statement
	return -1;
}
	
	
			
	