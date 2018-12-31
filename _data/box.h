#include <iostream>
#include <cString>
#include <cstdlib>
#include <string>

using namespace std;


template <class T> 

class Box{
  public:
  	int items;
	string discount;
	int totalCost;	
	void add(T const&);
	int setDiscount(int);	
		
};
